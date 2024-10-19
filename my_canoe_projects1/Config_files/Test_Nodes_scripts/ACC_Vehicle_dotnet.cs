using System;
using Vector.Tools;
using Vector.CANoe.Runtime;
using Vector.CANoe.Sockets;
using Vector.CANoe.Threading;
using Vector.Diagnostics;
using Vector.Scripting.UI;
using Vector.CANoe.TFS;
using Vector.CANoe.VTS;
using NetworkDB;
using System.Collections.Generic;
using System.Linq;
using Vector.CANoe.Runtime.Internal;
using System.Runtime.InteropServices;
using Vector.CANoe.Runtime.DBElements;
using System.ComponentModel;
using System.IO;
using Vector.Tools.Internal;

//int result;

public class ACC_Vehicle_dotnet : TestModule
{
    //int result;
    public override void Main()
    {
        TestGroupBegin("TG_001", "Functional Test", "To test basic functuonalities");
        ACCStandBy_Test();
        ACC_OFFTest();
        ACCActiveTest();
        ACCOff_from_ActiveTest();
        BrakeSwitch1Test();
        BrakeSwitch2Test();
        BrakeDeccelReq_BrakelightTest();
        ACCOff_ignitioncondition1();
        ACCOff_ignitioncondition2();
        ACCTargetSpeedCheck();
        TestGroupEnd();
    }

    [TestCase("ACC_TC_001: ACC Standby Test")] 

    public void ACCStandBy_Test()
    {
        Execution.WaitForConfirmation("Turn Battery ON");
        Execution.Wait(500);

        ACC_SysVar.sysvar_ignstate.Value = 2;
        Execution.Wait(500);
        Report.TestStep("verify ACC is in Off State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in Off State");
        }
        else
        {
            Report.TestStepFail("ACC is not in off state");
        }

        Execution.Wait(500);
        Report.TestStep("Set the vehicle speed to 60km/hr");
        NetworkDB.VehicleSpeed.Value = 60;
        Execution.Wait(500);

        Report.TestStep("press ACC ON button to Turn On the ACC");
        CruiseSwitch(1);

        Execution.Wait(500);
        Report.TestStep("Verify ACC State is in StandbyState");
        if(NetworkDB.ACC_State.Value == 2)
        {
            Report.TestStepPass("ACC is in Standby State");
        }
        else
        {
            Report.TestStepFail("ACC is not in StandbyState");
        }
        Execution.Wait(500);
        Userconfirmation("Does ICM display ACC Standby","ICM Displays ACC Standby","ICM Doesn't displays ACC Standby");
        
    }

    [TestCase("ACC_TC_002: ACC OFF Test")]

    public void ACC_OFFTest()
    {
        Report.TestStep("Press ACC OFF button");
        CruiseSwitch(0);
        Execution.Wait(500);

        Report.TestStep("Verify ACC State is in ACC_OFF State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in OFF State");
        }
        else
        {
            Report.TestStepFail("ACC is not in OFF State");
        }
        Execution.Wait(500);
        Userconfirmation("Does ICM display ACC OFF", "ICM Displays ACC OFF", "ICM displays ACC Standby");

    }

    [TestCase("ACC_TC_003: ACC ACTIVE Test")]

    public void ACCActiveTest()
    {
        Report.TestStep("Verify ACC State is in ACC_OFF State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in OFF State");
        }
        else
        {
            Report.TestStepFail("ACC is not in OFF State");
        }
        Execution.Wait(500);
        Userconfirmation("Does ICM display ACC OFF", "ICM Displays ACC OFF", "ICM displays ACC Standby");

        Execution.Wait(500);
        CruiseSwitch(1);
        Execution.Wait(500);

        Report.TestStep("Verify ACC State is in StandbyState");
        if (NetworkDB.ACC_State.Value == 2)
        {
            Report.TestStepPass("ACC is in Standby State");
        }
        else
        {
            Report.TestStepFail("ACC is not in StandbyState");
        }
        Execution.Wait(500);
        Userconfirmation("Does ICM display ACC Standby", "ICM Displays ACC Standby", "ICM Doesn't displays ACC Standby");
        Execution.Wait(500);

        Report.TestStep("Press set/Accel Buttom");
        CruiseSwitch(2);
        Execution.Wait(500);

        Report.TestStep("Verify ACC State is in ACC Active");
        if (NetworkDB.ACC_State.Value == 3)
        {
            Report.TestStepPass("ACC is in Active state");
        }
        else
        {
            Report.TestStepFail("ACC is not in Active State");
        }
        Userconfirmation("Does ICM display ACC Active", "ICM Displays ACC Active", "ICM displays ACC Standby");


    }

    [TestCase("ACC_TC_004: ACCOff_from_ActiveTest")]

    public void ACCOff_from_ActiveTest()
    {
        Report.TestStep("Press ACC OFF button");
        CruiseSwitch(0);
        Execution.Wait(500);

        Report.TestStep("Verify ACC State is in ACC_OFF State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in OFF State");
        }
        else
        {
            Report.TestStepFail("ACC is not in OFF State");
        }
        Execution.Wait(500);
        Userconfirmation("Does ICM display ACC OFF", "ICM Displays ACC OFF", "ICM displays ACC Standby");

    }

    [TestCase("ACC_TC_005: BrakeSwitch1Test")]

    public void BrakeSwitch1Test()
    {
        Report.TestStep("Verify ACC State is in ACC_OFF State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in OFF State");
        }
        else
        {
            Report.TestStepFail("ACC is not in OFF State");
        }
        Report.TestStep("Press ACC ON button");
        CruiseSwitch(1);
        Execution.Wait(250);

        Report.TestStep("Verify ACC State is in StandbyState");
        if (NetworkDB.ACC_State.Value == 2)
        {
            Report.TestStepPass("ACC is in Standby State");
        }
        else
        {
            Report.TestStepFail("ACC is not in StandbyState");
        }

        Report.TestStep("Press set/Accel Buttom");
        CruiseSwitch(2);
        Execution.Wait(250);

        Report.TestStep("Press Brakeswitch1");
        Brakeswitch(1);
        Execution.Wait(250);

        Report.TestStep("Verify ACC State is in StandbyState");
        if (NetworkDB.ACC_State.Value == 2)
        {
            Report.TestStepPass("ACC is in Standby State");
        }
        else
        {
            Report.TestStepFail("ACC is not in StandbyState");
        }
        Userconfirmation("Does ICM display ACC Standby", "ICM Displays ACC Standby", "ICM Doesn't displays ACC Standby");
       // Report.TestCaseMeasuredValue ("", NetworkDB.ACC_State.Value);
    }

    [TestCase("ACC_TC_006: BrakeSwitch2Test")]

    public void BrakeSwitch2Test()
    {
        Report.TestStep("Verify Acc is in Standby state");

        Report.TestStep("Verify ACC State is in StandbyState");
        if (NetworkDB.ACC_State.Value == 2)
        {
            Report.TestStepPass("ACC is in Standby State");
        }
        else
        {
            Report.TestStepFail("ACC is not in StandbyState");
        }

        Report.TestStep("Press set/Accel Buttom");
        CruiseSwitch(2);
        Execution.Wait(250);

        Report.TestStep("Press Brakeswitch1");
        Brakeswitch(2);
        Execution.Wait(250);

        Report.TestStep("Verify ACC State is in StandbyState");
        if (NetworkDB.ACC_State.Value == 2)
        {
            Report.TestStepPass("ACC is in Standby State");
        }
        else
        {
            Report.TestStepFail("ACC is not in StandbyState");
        }
        Userconfirmation("Does ICM display ACC Standby", "ICM Displays ACC Standby", "ICM Doesn't displays ACC Standby");
    }


    [TestCase("ACC_TC_007: BrakeDeccelReq_BrakelightTest")]

    public void BrakeDeccelReq_BrakelightTest()
    {
        Report.TestStep("Verify ACC State is in StandbyState");
        if (NetworkDB.ACC_State.Value == 2)
        {
            Report.TestStepPass("ACC is in Standby State");
        }
        else
        {
            Report.TestStepFail("ACC is not in StandbyState");
        }
        Userconfirmation("Does ICM display ACC Standby", "ICM Displays ACC Standby", "ICM Doesn't displays ACC Standby");
        double Previousvalue = NetworkDB.BrakeDecelRequest.Value;

        Report.TestStep("Press set/Accel Buttom");
        CruiseSwitch(2);
        //  Execution.Wait(250);
       // Execution.Wait(100,NetworkDB.BrakeDecelRequest.ValueChanged);
        double Currentvalue = NetworkDB.BrakeDecelRequest.Value;
        Report.TestStep("validating the BrakeDecReq signal");
        Validatesignalchange(Previousvalue, Currentvalue);


        Report.TestStep("Verify ACC State is in ACC Active");
        if (NetworkDB.ACC_State.Value == 3)
        {
            Report.TestStepPass("ACC is in Active state");
        }
        else
        {
            Report.TestStepFail("ACC is not in Active State");
        }
        Userconfirmation("Does ICM display ACC Active", "ICM Displays ACC Active", "ICM displays ACC Standby");

        Userconfirmation("Does brakelight is Turned on", "Yes brake light is toggling", "no it is not toggling");
        int value=(int)NetworkDB.BrakeDecelRequest.Value;
        //Execution.WaitForChange(value1000);
        //Execution.WaitForChange(() => NetworkDB.BrakeDecelRequest.Value, 1000);
       // Execution.WaitForChange(NetworkDB.BrakeDecelRequest,1000);
       
    }

    [TestCase("ACC_TC_008: ACCOff_ignitioncondition1")]

    public void ACCOff_ignitioncondition1()
    {
        Report.TestStep("Verifying the ACC is in ACC Active state");

        Report.TestStep("Verify ACC State is in ACC Active");
        if (NetworkDB.ACC_State.Value == 3)
        {
            Report.TestStepPass("ACC is in Active state");
        }
        else
        {
            Report.TestStepFail("ACC is not in Active State");
        }
        Userconfirmation("Does ICM display ACC Active", "ICM Displays ACC Active", "ICM displays ACC Standby");

        Report.TestStep("Turn OFF the ignition");
        ACC_SysVar.sysvar_ignstate.Value = 0;
        Execution.Wait(250);

        Report.TestStep("Verify ACC State is in ACC_OFF State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in OFF State");
        }
        else
        {
            Report.TestStepFail("ACC is not in OFF State");
        }

        Report.TestStep("Turn ON the ignition");
        ACC_SysVar.sysvar_ignstate.Value = 2;

        Report.TestStep("Verify ACC State is in ACC_OFF State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in OFF State");
        }
        else
        {
            Report.TestStepFail("ACC is not in OFF State");
        }

        Userconfirmation("Does ICM displayes the ACC OFF", "Yes ICM displays ACC OFF state","NO ICM doesnt displays the ACC OFF state");

    }

    [TestCase("ACC_TC_009: ACCOff_ignitioncondition2")]

    public void ACCOff_ignitioncondition2()
    {
        Report.TestStep("Verify ACC is in OFF State");
        Report.TestStep("Verify ACC State is in ACC_OFF State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in OFF State");
        }
        else
        {
            Report.TestStepFail("ACC is not in OFF State");
        }
        

        Report.TestStep("Press SET/Aceel button");
        CruiseSwitch(2);
        Execution.Wait(250);

        Report.TestStep("Verify ACC is in OFF State");
        Report.TestStep("Verify ACC State is in ACC_OFF State");
        if (NetworkDB.ACC_State.Value == 0)
        {
            Report.TestStepPass("ACC is in OFF State");
        }
        else
        {
            Report.TestStepFail("ACC is not in OFF State");
        }

    }

    [TestCase("ACC_TC_010: ACCTargetSpeedCheck")]

    public void ACCTargetSpeedCheck()
    {
        Report.TestStep("Set vehicle speed to 60km/hr");
        NetworkDB.BCM.VehicleSpeed.Value = 60;
        Report.TestCaseMeasuredValue("Vehicle speed", VehicleSpeed.Value);
        Execution.Wait(250);

        Report.TestStep("Press ACC ON button");
        CruiseSwitch(1);
        Execution.Wait(250);

        Report.TestStep("Verify ACC State is in StandbyState");
        if (NetworkDB.ACC_State.Value == 2)
        {
            Report.TestStepPass("ACC is in Standby State");
        }
        else
        {
            Report.TestStepFail("ACC is not in StandbyState");
        }
        Userconfirmation("Does ICM display ACC Standby", "ICM Displays ACC Standby", "ICM Doesn't displays ACC Standby");

        Report.TestStep("Press SET/Aceel button");
        CruiseSwitch(2);
        Execution.Wait(250);

        Report.TestCaseMeasuredValue("Target speed", TargetSpeed.Value);
        bool Value=Report.Equals(VehicleSpeed.Value, TargetSpeed.Value);
        if (Value)
        {
            Report.TestStepPass("Target speed is set to 60kmhr");

        }
        else
        {
            Report.TestStepFail("Targetspeed is not set to 60kmhr");
        }

    }

    public void Validatesignalchange(double previousvalue, double currentvalue)
    {
        if (previousvalue != currentvalue)
        {
            Report.TestStepPass("Brake light in Turned ON");
            Report.TestCaseMeasuredValue("BrakeDecSignal", NetworkDB.BrakeDecelRequest.Value);
        }
        else
        { 
            Report.TestStepFail("Brake light is not turned ON");
        }
      
    }
    public void CruiseSwitch(int switch_value)
    {
        NetworkDB.CruiseSwitchRequest.Value= switch_value;
        Execution.Wait(250);
        NetworkDB.CruiseSwitchRequest.Value = 7;
    }

    public void Userconfirmation(string msg1,string msg2,string msg3)
    {
       ConfirmationResult result = ConfirmationDialog.Show(msg1,"User Confirmation",ConfirmationDialogButtons.YesNo);
        if(result == ConfirmationResult.Yes)
        {
            Report.TestStepPass(msg2);
        }
        else
        {
            Report.TestStepFail(msg3);
        }
    }

    public void Brakeswitch(int brakeswitch)
    {
      if (brakeswitch == 1)
        {
            NetworkDB.BrakeSwitch1.Value = 1;
            Execution.Wait(250);
            NetworkDB.BrakeSwitch1.Value = 0;
        }
      else if (brakeswitch == 2)
        {
            NetworkDB.BrakeSwitch2.Value = 1;
            Execution.Wait(250);
            NetworkDB.BrakeSwitch2.Value = 0;   
        }
    }

}