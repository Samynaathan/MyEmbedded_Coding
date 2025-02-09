# ACC Node Details
ECU_Name="ACC"     # Assign name of the ECU
Channel=1          # Assign CAN Channel 1
baudrate=250000    # Buadrate 
Network="ACC_Vehicle_Network"  #Database name
print(ECU_Name)                # Print ECU Name
print("%s is connected to channel %d and runs at the speed of %d kb/sec" %(ECU_Name,Channel,(baudrate/1000.0)))   # Print ECU details 
