import random
import threading
import time

msg={"Id":0x123,"Channel":1,"DLC":1,"Data":{"Vehicle_speed":0}}
speed_Samples=[]
speed_index=0
periodicity=0.250

for i in range(0,250):
    speed_Samples.append(random.randint(0,250))
      
      
def vehicle_speed():
    
    global speed_index
    msg["Data"]["Vehicle_speed"]=speed_Samples[speed_index]
    speed_index=(speed_index+1)% len(speed_Samples)
    
def transmit_msg():
    print(msg)
    vehicle_speed()
    threading.Timer(periodicity,transmit_msg).start()
    
transmit_msg()
    