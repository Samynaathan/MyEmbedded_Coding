
# a=(input())
# b=(input())
# c=a+b
# print(c)
#---------------------------------------------------------------------------------------------------------------------------------------

#input() uses exmp 1

# name=input("Enter the name: ")
# age=int (input("Enter the age: "))
# dept=input("Enter the dept: ")

# print("My name is ",name,"\nmy age is ",age, "\nMy department is",dept)
#---------------------------------------------------------------------------------------------------------------------------------------------------------

#string  if statement

# str="shyamm"

# if(str=="shyam"):
    # print("Its is correct")
# else:
    # print("Its not correct")
#-----------------------------------------------------------------------------------------------------------------------------------------------    

#if else exmp 2

# income= int(input("Enter thr income: "))

# if(income<5000):
    # print("it is eligible for scholarship")
# else:
    # print("Its not eligible for scholarship")
    
#---------------------------------------------------------------------------------------------------------------

# If else statement exmp 3

# a=int (input("Enter the number: "))
# if((a%3)==0 and (a%5)==0):
    # print("The number is divisible by three and five")
# else:
    # print("The number is not divisible by three and five")

#---------------------------------------------------------------------------------------------------------------------

#if else Odd even program

# number =int (input("Enter the number: "))

# if(number>0):
    # if(number%2==0):
        # print("The entered number is even")
    # else:
        # print("The entered number is odd")
# else:
        # print("Enter the non zero value")
        
#-----------------------------------------------------------------------------------------------------------------

# elif exmp
# marks=int(input("Enter the marks: "))

# if(marks>40 and marks<60):
    # print("Average\n")
# elif(marks>60 and marks<80):
    # print("Good")
# else:
    # print("Excellant")
#------------------------------------------------------------------------------------------------------------------

# for loop exmp 1

# for i in range(1,11):
    # print(i,"x2=",i*2)
    
#-----------------------------------------------------------------------------------------------------------------------
    
# print the number between 10 and 20

# num1=int (input("Enter the num1: "))
# num2=int (input("Enter the num2: "))
# print("In between numbers are")
# for i in range(num1+1,num2):
    # print(i)

#------------------------------------------------------------------------------------------------------------------

#for loop to print 1-10 even numbers 

# num1=int (input("Enter the num1: "))
# num2=int (input("Enter the num2: "))
# print("In between numbers are")
# for i in range(num1+1,num2):
    # if(i%2==0):
        # print(i)
        
#----------------------------------------------------------------------------------------------------------------------

#for loop to print the sum of five natural numbers 

# sum=int(0)
# for i in range(1,6):
    # sum=sum+i
# print(sum)    
 
#for loop to get 10 input values

# arr=[]
# print(Enter 10 numbers: )
# for i in range(1,11):
    # number=int (input())
    # arr.append(number)
# print(arr)
#-------------------------------------------------------------------------------------------------------------

# How to use the formatted string in python

# number = 42
# print(f"The value of number is {number}")

# print(f"Type of 'number': {type(number)}")

#---------------------------------------------------------------------------------------------------------------

#for loop to print 10 numbers using input fun and string
#arr=[]
# for i in range(5):
    # number=input("Enter the number "+str(i+1)+" ")
    # arr.append(number)
# print(arr)    
    
#----------------------------------------------------------------------------------------------------------------

#list exmp program-append,pop,insert,del

# CruiseSwitch=["On","Off","Set+","Coast","Resume","Time Gap+","Time Gap-"]
# print(CruiseSwitch) 


# for i in range(1,3):
    # CruiseSwitch.append(str(input("Enter the switch state: ")))

# print(CruiseSwitch)  

# CruiseSwitch.pop(7)
# del CruiseSwitch[7]
# print("After del and pop")
# print(CruiseSwitch)

# CruiseSwitch.insert(2,"fault")
# print("After insert")
# print(CruiseSwitch)

# CruiseSwitch.remove("Time Gap+")
# print("After romove")
# print(CruiseSwitch)

# print("Particular index")
# print(CruiseSwitch[3])

# print("Range of index")
# print(CruiseSwitch[1:5])

# print([CruiseSwitch[i] for i in range(1,5) if i%2==1])

#-----------------------------------------------------------------------------------------------------------------------------------------

# Nested for loop

# for i in range(1,6):
    # for j in range(1,4):
        # print(i,"Apple")
        
# Nested loop exmp 2

# for i in range(1,5):
    # print()
    # for j in range(1,i+1):
        # print(j,end=" ") #end=" " is used print the next value on the same line without going to the new line...
#-------------------------------------------------------------------------------------------------------------------------------------------

#while loop exmp 1

# i=int(0)

# while(i<5):
    # print(i,end=" ")
    # i=i+1
    
#------------------------------------------------------------------------------------------------------------------------------
# While loop exmp 2 factorial

# fact=1
# factorial=int(input("Enter the number to find the factorial: "))

# while(factorial>0):
    # fact=fact*factorial
    # factorial=factorial-1
# print(fact)  

#----------------------------------------------------------------------------------------------------------------

#list=[]
# Allow duplicates
# Any type of data can be stored 
# We can modify the list items, We can add or remove 
# insert(), append(), remove(), pop(), extend()

#tuple=()
# Allows duplicates
# Any type of data can be stored
# We cannot modify the tuple items, we canot add or remove
# but we can type cast thr tuple to list 
# a=[1,2,3,4,5]
# b=list(a) here the tuple is stored as a list

#set={}
# Do not allows duplicate, it will resmove the duplicates
# Any type of data can be stored
# We cannot modify the set, but we can add or remove the items
# sets are unordered 
# add(), update(), remove(), pop()
# order can be changed at any run time

#Dictionary{} 
# Do not allow duplicate, Duplicate value will overwrite exsisting data.
# Any type of data can be stored 
# values can be changable
# we can add the list to the dictionary or using update() fun to update the dic 

#-------------------------------------------------------------------------------------------

# Dictionary exmp
# a={
    # "shyam":"meena",
    # "divya":"balagi",
    # "Age":2,
    # "key":[1,2,3]
    # }
# print(a) 
# print(a.keys())   #print the keys
# print(a.values()) #print the values 
# print(a["shyam"]) #printing the particular key values
# a["Age"]=3
# print(a)

# a.update({"Age":6}) #we can update like this also..
# print(a)
# del a["shyam"] #we can delete the particular items
# del a      # here we r deleting the entire dic
# a.clear() #items in the dic will be removed or emptied

#----------------------------------------------------------------------

#create the dic Test input condioiton for ACC vehicles

# TestInput={"Ignition_Status":2, "Vehicle_speed":60, "Engine_speed":2500}
# print(TestInput)

# print("The ignition status is ",TestInput["Ignition_Status"]) #this is one method tp print the dic value on the console
# print("The ignition status is %d" %(TestInput["Ignition_Status"]))  #this is another method to print the dic value on the console

# IgnitionStatus={"ign_off":0, "ACC":1, "ign_run":2}
# print(IgnitionStatus)

# CruiseSwitch={"ACC_OFF":0, "ACC_ON":1, "SET/Accel":2, "Coast":3, "Resume":4, "Time_Gap+":5, "Time+Gap-":6, "None":7}
# print(CruiseSwitch)

# TestInput["Vehicle_speed"]=120
# print(TestInput)
# TestInput.update({"Vehicle_speed":250})
# print(TestInput)

#--------------------------------------------------------------------------------------------------------------------------------------------


# #Create tuples to generate 10 vehicle speed samples

# vehicle_speed=(0,30,60,90,120,150,180,210,230,260)

# print(vehicle_speed)

# print("The total no of occurence of speed 30 is: ",vehicle_speed.count(30))  #this is one method to print the particlar value in the console

# print("The index of the speed 30 is %d" %(vehicle_speed.index(30))) 

# #vehicle_speed.extend(99)

# #print(dir(vehicle_speed))

# vehicle_speed=vehicle_speed+ (4,)

# print(vehicle_speed) # we can do only concatanate to add a element in a tuple...

#------------------------------------------------------------------------------------------------------------------------------------------

# Funtions exmp 1
# we can call the function only after the function def
# def add():
    # a= int(10)
    # b= int(20)
    # print("Addition of two numbers:" ,a+b)

# def sub():
    # c=int (input("Enter the value of c: "))
    # d=int (input("Enter the value of d: "))
    # print("Sib of two numbers: ",c-d)
 
# add() 
# sub() 
#--------------------------------------------------------------------------------------------------------------------------------------

# Functiona exmp 2 passing arguments

# def Addition(a,b):
    # print("Addition of two numbers: ",a+b)

# a=int(input("Enter the value of a: "))
# b=int (input("Enter the value of b: "))
# Addition(a,b)

#-------------------------------------------------------------------------------------------------------------------------------------
   
# How to use the return in python

# def Addition():
    # a=int (input("Enter a: "))
    # b=int (input("Enter b: "))
    # return a+b

# c=Addition()
# print(c)

#--------------------------------------------------------------------------------------------------------------------------------

# #File Function exmp how to read a file and how to write a file in python 
# f=open("Vehicel_speed.csv","w")

# f.write("S.No,Vehicle speed,Engine Rpm\n")
# for rider in range(150):
    # vehicle_speed=random.randint(0,250)
    # Engine_speed=random.randint(0,8000)
    # record=str((rider+1))+","+str(vehicle_speed)+","+str(Engine_speed)+"\n"
    # f.write(record)
# f.close()

# f=open("Vehicel_speed.csv")
# str=f.read()
# print(str)
# f.close()

#--------------------------------------------------------------------------------------------------------------------------------

# Classes and object in python

# class student:
    
    # name=""
    # marks=0
    
# stu=student()

# stu.name="shyam"
# stu.marks=55        

# print(f"student name: {stu.name},student marks: {stu.marks}\n")

#------------------------------------------------------------------------------------------------------------------------------

#Constructor in python

# class laptop:
    # def __init__(self):
        # self.ram="20gb"
        # self.processor=""
        # print(self.ram)
    # def display(self):
        # self.ram="10gb"
        # self.processor="i5"
        # print(self.ram)
        
# dell=laptop()
# dell.display()

#--------------------------------------------------------------------------------------------------------------------------------

# import threading

# def say_hello():
    # print("Hello, World!")

# # Schedule the function to run after 5 seconds
# timer = threading.Timer(5, say_hello)
# timer.start()

# print("Timer started. The message will print after 5 seconds.")

#-----------------------------------------------------------------------------------------------
# sending a can message for every 250 milli seconds 

import threading
import random
import time
import pika
import json

BCM={"Id":0x123,"Channel":1,"DLC":1,"Data":{"Vehicle_speed":0}}
speed_samples=[]
periodicity=0.250
speed_index=0 

for i in range(10):
    speed_samples.append(random.randint(0,250))
    # print(Vehicle_speed)
    
def changevehiclespeed():
    global speed_index
    BCM["Data"]["Vehicle_speed"]=speed_samples[speed_index]
    speed_index=(speed_index+1) % len(speed_samples)
    
def Transmit_msg():
    
    connection = pika.BlockingConnection(
    pika.ConnectionParameters(host='localhost'))
    channel=connection.channel()
    
    channel.queue_declare(queue='BCMQ')
    result=json.dumps(BCM)
    
    channel.basic_publish(
        exchange='',
        routing_key='BCMQ',
        body=result)
        
    connection.close()
        
    #print(BCM)
    changevehiclespeed()
    threading.Timer(periodicity,Transmit_msg).start()
    
Transmit_msg()






        