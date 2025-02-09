 
# -----------------------------------------------------------------------------
# Example: Test Feature Set via Python COM API
# 
# This sample demonstrates how to load and start the test modules and test 
# configurations via COM API using a Python script.
# The script uses the included PythonBasicEmpty.cfg configuration but the  
# wrapper class is working also with any other CANoe configuration containing   
# test modules and test configurations. 
# 
# Limitations:
#  - the script does not wait for test reports to be finished. If the test
#    reports are enabled, they may run in the background even after the test is 
#    finished
# -----------------------------------------------------------------------------
# Copyright (c) 2023 by Vector Informatik GmbH.  All rights reserved.
# -----------------------------------------------------------------------------

import time, os, msvcrt
from win32com.client import *
from win32com.client.connect import *

def DoEvents():
    pythoncom.PumpWaitingMessages()
    time.sleep(.1)
def DoEventsUntil(cond):
    while not cond():
        DoEvents()

# use this helper function when waiting longer than 5s instead of time.sleep() to avoid "Server Busy" error
def waitsleep(sleeptime):
        t = 0
        while t < sleeptime:
            pythoncom.PumpWaitingMessages()
            time.sleep(1)
            t += 1

class CanoeSync(object):
    """Wrapper class for CANoe Application object"""
    Started = False
    Stopped = False
    ConfigPath = ""
    def __init__(self):
        app = DispatchEx('CANoe.Application')    
        ver = app.Version
        print('Loaded CANoe version ', 
            ver.major, '.', 
            ver.minor, '.', 
            ver.Build, '...', sep='')
        self.App = app
        self.Measurement = app.Measurement
        WithEvents(self.App, CanoeApplicationEvents)
        WithEvents(self.App.Measurement, CanoeMeasurementEvents)

    def Running(self):
        return self.Measurement.Running
    def WaitForStart(self):
        return DoEventsUntil(lambda: CanoeSync.Started)
    def WaitForStop(self):
        return DoEventsUntil(lambda: CanoeSync.Stopped)

    def Load(self, cfgPath):
        # make sure current configuration has no modified flag
        self.App.Configuration.Modified = False
        # current dir must point to the script file
        cfg = os.path.dirname(os.path.realpath(__file__))
        cfg = os.path.join (cfg, cfgPath)
        print('Opening: ', cfg)
        self.ConfigPath = os.path.dirname(cfg)
        self.App.Open(cfg)
        self.Configuration = self.App.Configuration
        # TestConfigs property to access test configurations
        self.TestConfigs = []
        # TestModules property to access test modules
        self.TestModules = [] 

    def LoadTestSetup(self, testsetup):
        self.TestSetup = self.App.Configuration.TestSetup
        path = os.path.join(self.ConfigPath, testsetup)
        testenv = self.TestSetup.TestEnvironments.Add(path)
        testenv = CastTo(testenv, "ITestEnvironment2")
        self.TraverseTestItem(testenv, lambda tm: self.TestModules.append(CanoeTestModule(tm)))
    
    def LoadTestConfiguration(self, testcfgname, testunits):
        """ Adds a test configuration and initialize it with a list of existing test units """
        tc = self.App.Configuration.TestConfigurations.Add()
        tc.Name = testcfgname
        tus = CastTo(tc.TestUnits, "ITestUnits2")
        for tu in testunits:
            tus.Add(tu)
        # append TestConfig tc to TestConfigs
        self.TestConfigs.append(CanoeTestConfiguration(tc))

    def Start(self): 
        if not self.Running():
            self.Measurement.Start()
            self.WaitForStart()

    def Stop(self):
        if self.Running():
            self.Measurement.Stop()
            self.WaitForStop()
       
    def RunTestModules(self):
        """ starts all test modules and waits for all of them to finish"""
        # start all test modules
        for tm in self.TestModules:
            tm.Start()
        # wait for test modules to stop
        while not all([not tm.Enabled or tm.IsDone() for tm in app.TestModules]):
            DoEvents()

    def RunTestConfigs(self):
        """ starts all test configurations and waits for all of them to finish"""
        # start all test configurations
        for tc in self.TestConfigs:
            tc.Start()
        # wait for test modules to stop
        while not all([not tc.Enabled or tc.IsDone() for tc in app.TestConfigs]):
            DoEvents()

    def TraverseTestItem(self, parent, testf):
        for test in parent.TestModules: 
            testf(test)
        for folder in parent.Folders: 
            self.TraverseTestItem(folder, testf)

class CanoeApplicationEvents(object):
    """Handler for CANoe Application events"""
    def OnOpen(self, FullName):
        print("Configuration: "+FullName+" is opened")
    def OnQuit(self):
        print("CANoe is quit")

class CanoeMeasurementEvents(object):
    """Handler for CANoe Measurement events"""
    def OnInit(self):
        print("< measurement init >")
    def OnStart(self): 
        CanoeSync.Started = True
        CanoeSync.Stopped = False
        print("< measurement started >")
    def OnStop(self): 
        CanoeSync.Started = False
        CanoeSync.Stopped = True
        print("< measurement stopped >")
    def OnExit(self):
        print("< measurement exit >")

class CanoeTestModule:
    """Wrapper class for CANoe TestModule object"""
    def __init__(self, tm):
        self.tm = tm
        self.Events = DispatchWithEvents(tm, CanoeTestEvents)
        self.Name = tm.Name
        self.IsDone = lambda: self.Events.stopped
        self.Enabled = tm.Enabled
    def Start(self):
        if self.tm.Enabled:
            self.tm.Start()
            self.Events.WaitForStart()

class CanoeTestConfiguration:
    """Wrapper class for a CANoe Test Configuration object"""
    def __init__(self, tc):        
        self.tc = tc
        self.Name = tc.Name
        self.Events = DispatchWithEvents(tc, CanoeTestEvents)
        self.IsDone = lambda: self.Events.stopped
        self.Enabled = tc.Enabled
    def Start(self):
        if self.tc.Enabled:
            self.tc.Start()
            self.Events.WaitForStart()

class CanoeTestEvents:
    """Utility class to handle the test events"""
    def __init__(self):
        self.started = False
        self.stopped = False
        self.WaitForStart = lambda: DoEventsUntil(lambda: self.started)
        self.WaitForStop = lambda: DoEventsUntil(lambda: self.stopped)
    def OnStart(self):
        self.started = True
        self.stopped = False        
        print("<", self.Name, " started >")
    def OnStop(self, reason):
        self.started = False
        self.stopped = True 
        print("<", self.Name, " stopped >")

# -----------------------------------------------------------------------------
# main
# -----------------------------------------------------------------------------
app = CanoeSync()

# load the sample configuration
app.Load('CANoeConfig\PythonBasicEmpty.cfg')

# add test modules to the configuration
app.LoadTestSetup('TestEnvironments\Test Environment.tse')

# add a test configuration and a list of test units
app.LoadTestConfiguration('TestConfiguration', ['TestConfiguration\EasyTest\EasyTest.vtuexe'])

# start the measurement
app.Start()    

# run the test modules
app.RunTestModules()

# run the test configurations
app.RunTestConfigs()

# wait for a keypress to stop the measurement
print("Press any key to stop the measurement ...")
while not msvcrt.kbhit():
    DoEvents()

# stop the measurement
app.Stop()
waitsleep(2)