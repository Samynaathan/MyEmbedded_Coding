
# first_name="shyam"
# second_name="muthu"

# fullname=first_name+second_name

# print(fullname)
# print("samynaathan"+fullname)

# age=98  #here the age is int data type
# print(type(age))

# print(fullname+ str(age)) #here full name is str data type inorder to add both we neen to type case the age tp str
#---------------------------------------------------------
#Float
# height = 23.45
# print(type(height)) #return float
#---------------------------------------------------------
#bool
# shyam = True
# print(shyam)
# print(type(shyam))
#----------------------------------------------------------
#Multiple assignment

# shyam=meena=rythu=sreethu=80

# print(meena)

#-----------------------------------------------------------------
#Methods for strings

# name = "shyam muthu"
# print(name.capitalize()) # it will capitalize the first letter
# print(name.upper()) # it will capitalize all the letters
# print(name.lower()) # it will makes to lower case
# print(name.isdigit()) #it will check is containing digits or not
# print(name.isalpha()) # it will chect for is cointaining alphbabet, it will return false bcoz name contain space is a special character
# print(name.count("m")) #it will count the number of repition of characters
# print(name.replace("m","n")) #it will replace the characters..
# print(name*5 ) #it will multiply the characters stored

#-------------------------------------------------------------------
#Typecasting

# x=123 #int
# y=int (12.34) #float
# z= "324" #string

# print(x)
# print(int(y))
# print(int(z))

# print(type(y))
#-----------------------------------------------------------------
# input() function

# name = input("What is ur name: ")

# age = int(input("what is ur age: "))

# weight = float(input("what is your weight: "))

# print("Hello"+name)
# print("You are "+str(age)+" years old")
# print("you are "+str(weight)+" Kgs")
#--------------------------------------------------------------------------
#string slicing

# name = "shyammuthu"

# first_name=name[:5]
# last_name=name[5:]
# mid_name= name[2:5]
# funny_name = name[::2]  #start,stop,step
# reverse_name= name[::-1]
# print(first_name)
# print(last_name)
# print(mid_name)
# print(funny_name)
# print(reverse_name)

# slice = slice(2,-2)
# print(name[slice])

#----------------------------------------------------------

#If statement

# a=10
# b=20

# if(a==10):
#     print("value a")
# else:
#     print("not a")

#---------------------------------------------------------------------------
# while loop

# name = ""

# while len(name) == 0:
#     name = input("Enter the name: ")

# print("hello world")

#----------------------------------------------------------------------------

#for loop

# for i in range(10):
#     print(i)
# import time
#-----------------------
# for i in range(10,1):
#     time.sleep(1)
#     print(i)
#------------------------
# Nested loops in pytho

# row = int(input("Enter the row:"))
# column = int(input("Enter the column:"))
# symbol = input("Enter the symbol:")

# for i in range(row):
#     for j in range(column):
#         print(symbol,end="")  #end = "" it will keep print side by side on the same line
#     print() #it will move to the next line if we simply use print()

#------------------------------------------------------------------------------------------------

# How to use break, Continue, and pass

# while True:
#     name = input("Enter the name:")

#     if name != "":
#         break

#-------------------------------------------------------------------------------------
#How to use continue statement

# phone_number = "124-334-566"

# for i in phone_number:
#     if i=="-":
#         continue

#     print(i,end = "")

#-------------------------------------------------------------------------------
# How to use the pass control

# for i in range(1,21):
#     if i==10:
#         pass         #it will pass the particular statement it will not skip the loop
#     else:
#         print(i,end=' ')
#-------------------------------------------------------------------------------

#list=[]
# Allow duplicates
# Any type of data can be stored
# We can modify the list items, We can add or remove
# insert(), append(), remove(), pop(), extend()

# name = ["shyam","meena","muthu","yamini","divya"]

# print(name[0])
# name.insert(1,"nathan")
# print(name)
# print(name[1])
# name.remove(name[2])
# print(name)

# name.append("karthi")
# print(name)

# print(name.pop(2))

# for i in name:
#     print(i)

# name.clear() #it will remove all the items in the list
# print(name)

#------------------------------------------------------------

#Multi dimentional list

# drinks = ["cofee", "Juice", "tea"]
# lunch = ["rice","biriyani","chicken"]
# dinner = ["dosa","idly","poori"]

# food = [drinks,lunch,dinner]

# print(food)
# print(food[1][1])

# num = [1,2,3]
# print(type(num))
# print(num)

# number = num[1]
# print(number)
# print(type(number))

#-------------------------------------------------------------------------

# tuple=()
# Allows duplicates
# Any type of data can be stored
# We cannot modify the tuple items, we canot add or remove
# but we can type cast thr tuple to list
# a=[1,2,3,4,5]
# b=list(a) here the tuple is stored as a list

# student = ("shyam", 25, "Engineer")

# print(student.count)

# if "shyam" in student:
#     print(student)

#------------------------------------------------------------------------

#set={}
# Do not allows duplicate, it will remove the duplicates
# Any type of data can be stored
# We cannot modify the set, but we can add or remove the items
# sets are unordered
# add(), update(), remove(), pop()
# order can be changed at any run time

# utensils = {"fork","spoon","knife"}
# dishes = {"bowl","plate","cup", "knife"}

# print(utensils)

# utensils.update(dishes)
# print(utensils)

# utensils.remove("fork")

# print(utensils)

# dinner_table=utensils.union(dishes)

# print(dinner_table)
# print(utensils.difference(dishes))

#--------------------------------------------------------------------

#Dictionary{}
# Do not allow duplicate, Duplicate value will overwrite exsisting data.
# Any type of data can be stored
# values can be changable
# we can add the list to the dictionary or using update() fun to update the dic

# capitals = {'USA':'Washington',
#             'India': 'New_delhi',
#             'chine' : 'beijing',
#             'russia' : 'moscow'}

# print(capitals['India'])
# print(capitals.get('India'))
# print(capitals.keys())
# print(capitals.values())
# print(capitals.items())

# capitals.update({'germany' : 'berlin'})
# print(capitals.pop('russia'))

# print(capitals)

#---------------------------------------------------------------
#index operator gives access to sequence elements like str, list, tuples

# name = "samynaathan"
# print(name)
# if(name[0].islower()):
#      name = name.capitalize()

# print(name)

# name = name.upper()
# print(name)

# name = name[0::4].upper()
# print(name)
#---------------------------------------------------------------------------

#How to use functions

# def fun(name):
#     print("hello! "+name)

# fun("shyam")
#-------------------------------------------------------------------------------

#funtion to pass the arguments and return

# def calculator(a,b,operation):
#     match (operation):
#         case '+':
#             return a+b
#         case '-':
#             return a-b

# result = calculator(4,5,'-')
# print(result)
#----------------------------------------------------------------------------

#key words of arguments, wthout keyword if you change the oreder of the argument it will reflect to the
#body of the function, but if we use idetifier or keyword we can use anyway

# def fun(f_name,m_name,l_name):
#     print(f_name+" "+m_name+" "+l_name)

#fun("samy","naathan","ganesan") without changing order

#fun("naathan","samy","ganesan") change the order it will reflect affect the funtion body

# fun(l_name="ganesan",m_name="naathan",f_name="samy") #here we r assigning the identidiers so we can use anyway

#-----------------------------------------------------------------------------------------

#nested function calls- function call inside the other function
                        #inner most function call resolved first
                        #returned value is used as argument for the next outer function

# number = float(input("Enter the value: "))
# print(number)
# number = abs(number) #it will change to positive number
# print(number)
# number = round(number) #it will round of to the nearest value
# print(number)

#same thing we r using nested function

# print(round(abs(float(input("Enter the number: ")))))

#--------------------------------------------------------------------------

#scope - the region that the variable is recognised
        # A variable is only available from inside the region is created
        # A global and locally scoped versions of a variable can be created

# name = "samynaathan" #global scope available inside and outside the function

# def fun_name():
#     name = "shyam" #local scope available only inside the function
#     print(name)

# print(name)
# fun_name()   #LEGB L-local, E-enclosing, G-global, B-builtin function

#-------------------------------------------------------------
# args Parameter that will pack all arguments into a tuple
# useful so that a function can accept a varying amount of arguments

# def add (*args): #it is converting all the arguments into tuples, * is matter, name is not a matter
#     sum=0
#     for i in args:
#         sum += i
#     print(type(args))
#     print(args)
#     return sum

# print(add(1,2,3))
#---------------------------------------------------------------

# **kwargs = parameter that will pack all argument into a dictionary
            # useful so that a function can accept a varying amount of keyword arguments

# def fun_name(**kwargs): #it will converts the arguments into dic
#     print(kwargs)
#     print("my name is "+kwargs['first']+kwargs['middle']+' '+kwargs['last'])

# fun_name(first = "samy", middle = "naathan", last = "ganesan")
#----------------

# def fun_name(**keyargs):
#     print('hello',end = ' ')
#     for key,value in keyargs.items():
#         print(value,end=' ')

# fun_name(first = "samy", middle = "naathan", last = "ganesan")

#-----------------------------------------------------------------------------

#str.format() = optional method that gives users
                #more control when displaying content, we have to use dot after ""

# name = "shyam"
# place = "coimbatore"

# print("my name is {}, im from {}".format(name,place)) # method 1
# print("my name is {1}, im from {0}".format(name,place)) #positional arguments #method 2
# print("my name is {name}, im from {place}".format(name='shyam',place='coimbatore')) #method 3

# text = "my name is {} im comming from {}" #method 4
# print(text.format(name,place))

#-----------------------------------

#name = "shyam"

#print("Hello, my name is {}".format(name))
#print("hello my name is {:10} ganesan".format(name)) #give 10 space after the format
#print("hello my name is {:>10} ganesan".format(name)) #give spce before the format

#------------------------------------
#pi = 10000

#print("the value of pi is {:.2f}".format(pi)) #it will print only two digits after point
#print("the value is {:,}".format(pi)) #thsi will add , acoording to the decimal values
#print("the binary value is {:b}".format(pi)) #this will convert binary
#print("the binary value is {:o}".format(pi)) #this will convert octal
#print("the binary value is {:x}".format(pi)) #this will convert to hexa decimal
#---------------------------------------------------------------------------------

#how to use random()

# import random

# x = random.randint(1,10) # this will print the random number bt 1-10
# y = random.random() #this will produce the random number bt 0-1

# mylist = ['stone','papper','scissor']
# z = random.choice(mylist) #here im putting the list into random and it will store the random value into the number z
# print(z)

# new = [1,2,3,4,5,6,7,8,'f','g','r']
# random.shuffle(new)
# print(new)

#------------------------------------------------------------------------
#Exception handling
# Exemption  = Events detected during execution that interrupt the flow of a program

# try:
#         numerator = int(input("Enter the numerator: "))
#         denominator = int(input("Enter the denominator: "))

#         result = numerator/denominator

# except ZeroDivisionError:
#         print("Number cannot be divible by zero! pagal")
# except ValueError:
#         print("Enter ony the numeric values")
# else:
#         print("the result is {}".format(result))
# finally:
#         print("this will always execute")
# except Exception:
#         print("Something went wrong :(")
#--------------------------------------------------------------
# checking the file, file handling, file detection

# import os

# path ="S:\\my_canoe_projects\\Config_files\\Data\\DTC.txt"

# if os.path.exists(path):
#     print("the file is exsists")
#     if os.path.isfile(path):
#         print("yeah that is a file ")
#     elif os.path.isdir(path):
#         print("that is a folder")


# else:
#     print("the file is not ex")
#-----------------------------------------------------------------

# How to read a file, this method doesnt need fclode it will auto close
# try:
#     path = "S:\\my_canoe_projects\\Config_files\\Data\\Vehicle_speed_sampldes.txt"
#     with open(path) as file:
#         print(file.read())

# except FileNotFoundError:
#     print("the file is not exsists")
#--------------------------------------
#or

# f=open("S:\\my_canoe_projects\\Config_files\\Data\\Vehicle_speed_samples.txt",'r')
# str= f.read()
# print(str)
#---------------------------------------------
# How to write something on a file

# data = "hi this is samynaathan g"

# with open("S:\\my_canoe_projects\\Config_files\\Data\\samplefile.txt","w") as file:
#     file.write(data)

#------------------------------------------------------------------

# copyfile() - copies contents of the file
# copy() - copyfile() + permission mode + destination can be directory
# copy2() - copy() + copy metadata (file's creation and modifications time)

# import shutil

# shutil.copyfile("source path","destination file path")  #it will copy the entire file content to the destination file
#-------------------------------------------------------------------------
#move the file from one place to another

# import os
# source = "S:\\my_canoe_projects\\Config_files\\Data\\Vehicle_speed_samples.txt"
# destinatin = "S:\\PPT\\file\\Vehicle_speed_samples.txt"
# try:
#     if(os.path.exists(destinatin)):
#         print("file is already exsists")
#     else:
#         os.replace(source,destinatin)
# except FileNotFoundError:
#     print("file not found")
#---------------------------------------------------------------------------------
# How to remove the files
# import os
# path = "S:\\my_canoe_projects\\Config_files\\Data\\samplefile.txt"
# if(os.path.exists):
#         os.remove("S:\\my_canoe_projects\\Config_files\\Data\\samplefile.txt")

# os.remove(path) #delete a file
# os.rmdir(path) #delete an empty directory
# shutle.rmtree(path) #delete a directory which containing files
#-----------------------------------------------------------------------------

# module = a file containing python code. May contain functions, calssses, etc.
# Used with modular programming, which is to separate into parts

# import messages
# import messages as m
# from messages import helo.bye
# from messages import * (this one is dangerous)

#help("modules")

# import messages  # importing the message module into current program

# messages.hello() # messages is the object, using that we can acccess the messages file containing
# messages.bye()
#--------------------------------
# import messages as msg

# msg.hello() # here msg is the object this is one of the method
# msg.bye()

#-------------------------------
# from messages import hello,bye # this is one method

# hello() # here we no need to use the object
# bye()
#------------------------------
# from messages import* #it is risk to use namming conflict will occur if it have same names

# hello()
# bye()
#---------------------------------------------------------------------------
# rock, paper, scissors game

# import random

# while True:
#         choices = ["rock", "paper", "scissors"]

#         computer = random.choice(choices)
#         player = None

#         while player not in choices:
#                 player = input("rock, paper, scissors?: ").lower()

#                 if player == computer:
#                         print("player: ",player)
#                         print("computer: ",computer)
#                         print("Game tied")
#                 elif player == "rock" and (computer == "paper" or computer == "scissors"):
#                         print("player: ",player)
#                         print("computer: ",computer)
#                         print("player Win")
#                 elif player == "paper" and computer == "rock":
#                         print("player: ",player)
#                         print("computer: ",computer)
#                         print("Player Win")
#                 elif player == "scissors" and computer == "paper":
#                         print("player: ",player)
#                         print("computer: ",computer)
#                         print("Player Win")
#                 else:
#                         print("player: ",player)
#                         print("computer: ",computer)
#                         print("computer Wins")

#         play_again = input("Do you want to play again (yes/no): ").lower()

#         if(play_again != "yes"):
#                 break
# print("bye! :)")

#----------------------------------------------------------------------------------------------
# Quize game

# def new_game():

#         guesses = []
#         correct_guesses  = 0
#         question_num = 1

#         for key in questions:
#              print("-------------------------")
#              print(key)
#              for i in options[question_num-1]:
#                 print(i)

#              guess = input("Enter A,B,C, or D: ").upper()
#              guesses.append(guess)

#              correct_guesses += check_ans (questions.get(key),guess)
#              question_num+= 1

#         display_score(correct_guesses, guesses)

# #-----------------------
# def check_ans(answer, guess):
#     if answer == guess:
#          print("CORRECT")
#          return 1
#     else :
#          print("WRONG")
#          return 0
# #----------------------
# def display_score(correct_guesses, guesses):
#     print("-----------------")
#     print("RESULTS")
#     print("-----------------")
#     print("ANSWERS: ", end="")
#     for i  in questions:
#          print(questions.get(i), end=" ")
#     print()

#     print("Gusses: ", end="")
#     for i  in guesses:
#          print(i, end=" ")
#     print()

#     score = int((correct_guesses)/len(questions)*100)
#     print("your score is: "+str(score)+"%")
# #----------------------
# def play_again():
#     play_again_ah = input("Do you want to play agin yes/no: ").lower()

#     if(play_again_ah== "yes"):
#          return True
#     else:
#          return False
# #----------------------

# questions = {
#     "Who created python?" : "A",
#     "What was the year python created?" : "B",
#     "python is tributed to which comedy group" : "C",
#     "Is the earth round shape" : "A"
# }

# options = [["A. Guido van rossum", "B. Elon musk", "C. Bill gates", "D. Mark zuckerburg"],
#            ["A. 1989", "B. 1991", "C. 2000","D. 2016"],
#            ["A. Lonely Island", "B. Smoosh", "C. Montly python", "D. SNL"],
#            ["A. True", "B. False", "C. Sometimes", "D. whats earth?"] ]

# new_game()

# while play_again():
#      new_game()

# print("Bye bye...:)")

#-----------------------------------------------------------------------------------------------

#object oriented programming in python (oops)

# object = A "bundle" of related atributes(variables) and methods (functions)
#          Ex. Phone, Cup, book
#          you need a "class" to create many objects

# class = (blueprint) used to design the structure and layout of an object

# class Car:
#     def __init__(self, model, year, colour, for_sale):
#         self.model = model
#         self.year = year
#         self.colour = colour
#         self.for_sale = for_sale

# car1 = Car("Mustang", "2024", "red", False)
# car2 = Car("Coevette", "2025", "blue", True)
# car3 = Car("Charger", "2026", "yellow", True)

# print(car1)
# print(car2.model)
# print(car3.year)
# print(car2.colour)
# print(car1.model)
#-----------------------------------------------------------------------------
# Create separate module for class
# from car_module import Car

# car1 = Car("Mustang", "2024", "red", False)
# car2 = Car("Coevette", "2025", "blue", True)
# car3 = Car("Charger", "2026", "yellow", True)

# car1.describe()
# car2.driving()
# car3.stop()
#--------------------------------------------------------------------------
# 2. Instance Variables
# Definition: Unique to each instance of the class.
# Scope: Declared inside the __init__ method or other instance methods using self.
# Usage: Used when you want each instance to have its own value.
# Access: Accessed and modified through the instance.


# class Example:
#     def __init__(self, value):
#         self.instance_var = value  # Instance variable

# # Creating instances with different values
# obj1 = Example("Value1")
# obj2 = Example("Value2")

# print(obj1.instance_var)  # Output: Value1
# print(obj2.instance_var)  # Output: Value2

# # Modifying instance variable
# obj1.instance_var = "NewValue1"
# print(obj1.instance_var)  # Output: NewValue1
# print(obj2.instance_var)  # Output: Value2

#----------------------------------------------------------------------------
# 1. Class Variables
# Definition: Shared by all instances of the class.
# Scope: Declared directly within the class body, outside of any instance methods.
# Usage: Used when you want the value to be the same for all instances of the class.
# Access: Can be accessed using the class name or an instance.

# class Example:
#     class_var = "Shared"  # Class variable

# # Accessing class variable
# print(Example.class_var)  # Output: Shared

# # Accessing via instance
# obj1 = Example()
# obj2 = Example()
# print(obj1.class_var)  # Output: Shared
# print(obj2.class_var)  # Output: Shared

# # Modifying class variable
# Example.class_var = "Modified"
# print(obj1.class_var)  # Output: Modified
# print(obj2.class_var)  # Output: Modified

#--------------------------------------------------------------------

# Class variables = shared among all instances of a class
#                   Defined outside the constructor
#                   Allow you to share data among all objects created from class

#--------------------------------------------------------------
# class student:
#         Year_of_joined = 2024 # class variables
#         no_of_students = 0

#         def __init__(self, name, age):
#                 self.name = name # intsnace variables
#                 self.age = age

#                 student.no_of_students+=1

# student1 = student("shyam", 25)

# print(f"nof of student in the class is {student.no_of_students} and the year joined {student.Year_of_joined} and the name of the student is {student1.name}")
#-------------------------------------------------------------
# Inheriance  = allows a class to inherit the attributes and methods from another class
#               Helps with code reusability and extensibility
#               class child (parent)

# class animals:
#         def __init__(self, name, isalive):
#                 self.name= name
#                 self.isalive = isalive

#         def eat(self):
#                 print(f"{self.name} is eating")
#         def sleep(self):
#                 print(f"{self.name} is sleeping")

# class Cat(animals):
#         pass
# class Dog(animals):
#         pass
# class Mouse(animals):
#         pass

# cat = Cat("pussy", True)
# cat.eat()
# cat.sleep()

#----------------------------------------------------------------------------------------
# Another example
# Parent class

# class Vehicle:
#     def __init__(self, brand, wheels):
#         self.brand = brand
#         self.wheels = wheels

#     def start(self):
#         print(f"{self.brand} is starting...")

#     def stop(self):
#         print(f"{self.brand} is stopping...")

# # Child classes
# class Car(Vehicle):
#     pass

# class Bike(Vehicle):
#     pass

# class Truck(Vehicle):
#     pass

# # Creating objects of child classes
# car = Car("Toyota", 4)
# bike = Bike("Yamaha", 2)
# truck = Truck("Volvo", 6)

# car.start()
# bike.start()
# truck.start()

# car.stop()
# bike.stop()
# truck.stop()

#------------------------------------------------------------------------------------------

# class animals:

#         def __init__(self,name,colour):
#                 self.name = name
#                 self.colour = colour
#         def eating(self):
#                 print(f"the {self.colour} cat {self.name} is eating ")
#         def sleeping(self):
#                 print(f"the {self.colour} cat {self.name} is eating ")

# class Cat(animals):
#         pass
# class Dog(animals):
#         pass

# cat = Cat("pussy","red")

# cat.eating()

#-------------------------------------------------------------------------------------------
# Multiple inheritance = inherit from more than one parent class
#                        C(A,B)
# Multilevel inheritance = inherit from a parent which inherits from another parent
#                          C(B) <- B(A) <- A

# class animals(): # multilevel inheritance
#     def __init__(self, name):
#         self.name = name
#     def eat(self):
#         print(f"{self.name} is eating")
#     def sleep(self):
#         print(f"{self.name} can sleeping")
# class prey(animals): # class animal is parent of this prey class
#     def flee(self):
#         print(f"{self.name} is fleeing")

# class predator(animals): # class animal is parent of this predator class
#     def hunt(self):
#         print(f"{self.name} is hunting")

# class Rabbit(prey):
#     pass

# class Hawk(predator):
#     pass

# class Fish(prey,predator):
#     pass

# rabbit = Rabbit("rythu")
# hawk = Hawk("Tony")
# fish = Fish("nemo")

# rabbit.flee() # here accessing the parent class of prey methods

# # #rabbit.hunt() #it will throw error bcoz parent class ha no such hunt methos in it

# fish.flee() # here im accessing two parent class, multiple inheritance
# fish.hunt()

# rabbit.eat()
# fish.eat()

#----------------------------------------------------------------------------------------------
# Abstract class: A class that cannot instaniated on its own; meant to be subclassed
#                 They can contain abstract methods, which are declared but have no implementaion
#                 Abstract classes benefits
#                 1. Prevents instantiation of the class itself
#                 2. Requires children to use inherited abstract methods

# from abc import ABC, abstractmethod

# class Vehicle(ABC):

#     @abstractmethod
#     def go(slef):
#         pass
#     @abstractmethod
#     def stop(self):
#         pass

# class car(Vehicle):

#     def go(slef):
#         print("you drive the car")

#     def stop(self):
#         print("you stop the car")

# Car=car()
# Car.go()
# Car.stop()
#---------------------------------------------------------------------------

# super() = Function used in a child class to call methods from a parent class (superclass)
#           Allows you to extend the functionality of the inherited methods

# class Shape:
#     def __init__(self, colour, is_filled):
#         self.colour = colour
#         self.is_filled = is_filled

# class Circle(Shape):
#     def __init__(self, colour, is_filled, radius):
#         super().__init__(colour, is_filled)
#         self.radius = radius

# class Square(Shape):
#     def __init__(self, colour, is_filled, width):
#         super().__init__(colour, is_filled)
#         self.width = width

# class Triangle(Shape):
#     def __init__(self, colour, is_filled, width, height):
#         super().__init__(colour, is_filled)
#         self.width = width
#         self.height = height

# circle = Circle("red", True, 24)

# print(f"the {circle.colour} colour is filled {circle.is_filled} and the radius is {circle.radius}")

#-------------------------
# another examples for super()

# In Python, super() is a built-in function that provides a way to call a method from a parent (or superclass) class in a child (or subclass) class.
# It is often used in the context of inheritance to avoid explicitly naming the parent class, which makes the code more maintainable and supports multiple inheritance scenarios.

# Why use super()?
#         Access parent class methods or constructors: It is useful for calling methods (like __init__) of a parent class.
# Supports multiple inheritance: In complex inheritance hierarchies, super() ensures that the correct method in the Method Resolution Order (MRO) is called.
# Reduces dependency on hardcoding parent class names: This makes the code easier to refactor.
# Syntax
#         super([type[, object-or-type]])
# However, the most common use is the simple form:

#Example 1: Basic usage with single inheritance

# class Parent:
#     def __init__(self, name):
#         self.name = name
#         print(f"Parent initialized with name: {self.name}")

# class Child(Parent):
#     def __init__(self, name, age):
#         # Call the Parent's constructor
#         super().__init__(name)
#         self.age = age
#         print(f"Child initialized with name: {self.name}, age: {self.age}")

# # Create an instance of Child
# child = Child("Alice", 10)
# #Output:

# Parent initialized with name: Alice
# Child initialized with name: Alice, age: 10
# Here, super().__init__(name) calls the __init__ method of the Parent class to ensure that the name attribute is initialized properly.

#Example 2: Using super() in methods

# class Parent:
#     def greet(self):
#         print("Hello from Parent!")

# class Child(Parent):
#     def greet(self):
#         # Call the greet method from the Parent class
#         super().greet()
#         print("Hello from Child!")

# # Create an instance of Child
# child = Child()
# child.greet()
# Output:

# Hello from Parent!
# Hello from Child!
# In this example, super().greet() calls the greet() method of the Parent class.
#---------------------------------------------------------------------------------------------

# Polymorphism = greek word that mesan to "have many forms or faces"
#                poly = many
#                morphe = form

#                 two ways to achieve polymorphism
#                 1. Inheritance = An object could be treated of the same type as aparent class
#                 2. "Duck type" = object must have necesssary attributes/methods

# from abc import ABC, abstractmethod

# class Shape():

#     @abstractmethod
#     def area(self):
#         pass

# class Circle(Shape):
#     def __init__(self, radius):
#         self.radius = radius

#     def area(self):
#         return 3.14* self.radius **2

# class Square(Shape):
#     def __init__(self,sides):
#         self.sides = sides

#     def area(self):
#         return self.sides**2

# class Triangle(Shape):
#     def __init__(self,base,height):
#         self.base = base
#         self.height = height

#     def area(self):
#         return (self.base * self.base) /0.5

# Shape =[Circle(4), Square(5), Triangle(6,7)]

# for shape in Shape:
#     print(shape.area())

#------------------------------------------------------------------------------
# ducktyping = Another way to achieve polymorphism besided Inheritance
#              Object must have the minimum necesssary attributes/methods
#              "If it looks like a duck and quacks like a duck, it must be a duck"

# class animals:

#     alive = True

# class cat(animals):
#     def speak(self):
#         print("meow")

# class dog(animals):
#     def speak(self):
#         print("voww")

# class car(animals):
#     def horn(self):  # it will throw error
#         print("Honk!")

# Animals = [cat(), dog(), car()]

# for animal in Animals:
#     animal.speak()
#-----------------------------------------------------------------------

# # Aggregation  = Represents a relationship where one object (the whole)
# #                Contains referances to one or more INDEPENDENT objects (the parts)

# class Library:
#         def __init__(self, name):
#                 self.name = name
#                 self.books = []
#         def add_book(self,book):    #this class contains object of another class
#                 self.books.append(book)
#         def display_books(self):
#                 for book in self.books:
#                         print(f"{book.name}, {book.author}")



# class Book:
#         def __init__(self, name, author):
#                 self.name = name
#                 self.author = author

# library = Library("Indian Public library")

# book1 = Book("Harry porter", "Rowling")
# book2  = Book("xyz", "shyam")
# book3 = Book("abc","meena")

# library.add_book(book1)
# library.add_book(book2)
# library.add_book(book3)

# library.display_books()
#-----------------------------------------------------------------------------------
# Walrus operator :=

# new to pyhton 3.8
# assignment expression aka warlus operator
# assigns values to variables as a part of a larger expression

# foods = list()                                   # normal method
# while True:
#         food = input("what food do youn like ? ")
#         if food == 'quite':
#                 break
#         foods.append(food)
#-----------------------------------------------------------------------
# walrus method

# foods = list()

# while food := input("What food do you like? ") != "quite":
#         foods.append(food)
#_-------------------------------------------------------------------------------
# Assogn function to variables

# def hello():
#         print("hello !")

# print(hello)  # this will print the address

# hi = hello
# print(hi) # hi have the same address of hello

# hi() # if we call with the paranthesis it will call the function and print the value # o/p is hello !

#-------------------------

# say = print

# say("since we assigned print to sat both are havig same address, so now say will acft as print fun")

#--------------------------------------------------------------------------------
# Higher order function  = a function that either:
#                          1. Accepts a function as an arguments
#                          2. returns a function
#                          (In pyhton, functions are also treated as objects)

# def loud(text):
#         return text.upper()
# def quite(text):
#         return text.lower()

# def hello(function):           # it will replace the function as loud
#         text = function("hello") # funciton will change to loud and call the loud function
#         print(text)

# hello(loud)  # o/p HELLO
# hello(quit) # o/p hello
#--------------------------------------------------------------
# lambda function = function written in one line using lambda functions
#                  accepts any number of arguments, but only has one expression
#                  think of it as a shortcut
#                  usefull id needed for a short period of time, throw-away
# lambda parameter : expression

# def double(x):  # normal method
#         return 2*x
# value = double(5)
# print(value)

#---------------
# lambda method

# # double = lambda x: x*2
# # print(double(5))

# # #--------

# # add = lambda x,y : x+y
# # print(add(5,15))

# # #--------

# # name = lambda first_name, second_name : first_name +" " + second_name
# # print("samynaathan","ganesan")

# age_check = lambda age: True if age >= 18 else False
# print(age_check(24)) 
#---------------------------------------------------------------------------

# # sort() function = used with iterables 

# students = ["squidward","sandy","patrick","spongebob"]

# students.sort() # 

# for i in students:
#         print(i)
#------------------------------------------------
# another method

# students = [("squidward","A",60),
#              ("candy","J",40),
#              ("patrick","E",50),
#              ("apongebob","D",60)]
# grade = lambda students : students[1] # mentioning the second column 1st index
# #students.sort(key=grade) #here we are sorting acoording to the second column
# #students.sort(key=grade, reverse=True) # i will convert into reverse order, decending
# students.sorted
# for i in students:
#         print(i)
#---------------------------
# Sort the tuples of tuples this will not affect the original variables or data
# students = (("squidward","A",60),
#              ("candy","J",40),
#              ("patrick","E",50),
#              ("apongebob","D",60))
# grade = lambda students : students[1] # mentioning the second column 1st index
# #students.sort(key=grade) #here we are sorting acoording to the second column
# #students.sort(key=grade, reverse=True) # i will convert into reverse order, decending
# sorted_students = sorted(students,key= grade) # sorting the students tuples into another variables 
# for i in sorted_students:
#         print(i)

#-------------------------------------------------------------------------------

# map() = applies a function to each items in an iterables (list, tuples, etc..)

# map (function, iterable)

# store = [("shirt",20.00),
#          ("pant",30.00),
#          ("jacket",40.00),
#          ("socks",25.00)]

# to_inr = lambda data: (data[0], data[1]*85) # to_inr will have this function or formula

# to_inr = list(map(to_inr,store)) # map fun, will apply the formula to the irerable

# for i in to_inr:
#         print(i)
# for j in store:
#         print(j)
#----------------------------------------------------------------

# filter() = creates a collection of elements from an iterables for which a function returns
# filter(function, iterables)

# friends = [("shyam",27),
#            ("meena",17),
#            ("kathi",26),
#            ("shalini",15),
#            ("divya",12)]

# age = lambda data : data[1] >=18  # it will apply the formula who ever is above 12plus in 2nd column

# drinling_buddies = list(filter(age,friends)) # filter will filter asper the formula, conditions failed data will not store 
#                                              # type casting into list

# print("the drinking buddies among the lists")
# for i in drinling_buddies:
#         print(i)

#--------------------------------------------------------

# reduce() = apply a function to an iterables and reduce it to a single cumulative value
#            performs function on first two elements and repeat the process untill 1 value reamins

# reduce(function, iterables)

# import functools

# letters = ["H", "E", "L", "L", "O"]
# word  = functools.reduce(lambda x,y : x+y, letters)
# print(word)

#-------------------------------
# factorial = [5, 4, 3, 2, 1]
# fact = functools.reduce( lambda x,y : x*y, factorial)
# print(fact)

#----------------------------------------------------------------------------------------------

# list comprehension = a way to create a new list with less syntax 
#                      can mimic certain lamda functions, easier to read
#                      list  = [expression for item in iterable]
#                      list  = [expression for item in iterable if conditional]
#                      list  = [ecpression if/else for item in iterable ]

# students  = [100, 90, 80, 70, 60, 50, 40, 30, 0]

# square = []

# for i in range(1,11):
#     square.append(i*i)

# print(square)

#------------------------------

# square = [ i*i for i in range(1,11)]  # both are same

# print(square)

#-----------------------------------------------------------------------

# students = [100, 80, 60, 40, 43, 32, 28, 90, 12, 23]

# passed_students = list(filter( lambda x : x >= 40,students)) # normal method

# passed_students_new = [i for i in students if i >= 60] # same without using lambda, using list comprehension

# print(passed_students)
# print(passed_students_new)

#----------------------------------------------------------------------

# Dictionary comprehension  = create dic using an expression 
#                            can replace for loops and certain lambda functions 

# 1) dictionary = {key : expression for (key,value) in  iterable}
# 2) dictionary = {key : expression for (key,value) in iterable if conditional}
# 3) dictinary = {key : (if/else) for (key,value) in iterable}
# 4) dictionar = {key : function(value) for (key,value) in iterable}
#-----------------------------------------------------
# 1)
# cities_in_F = {"New work" : 32, "india" : 80, "boston" : 50, "Los_angels": 70}

# cities_in_C = {key: round((Value-32)*(5/9)) for (key,Value) in cities_in_F.items()} # round will make the round values it will truncate the decimal points

# print(cities_in_C)
#-------------------
# 2)
# weather = {"New work" : "snowing", 
#                          "india" : "sunny", 
#                          "boston" : "fogging", 
#                          "Los_angels": "sunny", 
#                          "Atlada" : "snowing" }

# sunny_weather = {key : value for (key,value) in weather.items() if value=="sunny"}
# print(sunny_weather)

#---------------------
# 3)
# cities_in_F = {"New work" : 32, "india" : 80, "boston" : 50, "Los_angels": 70}

# describe_cities = {key : ("WARM" if value  >= 50 else "COLD") for (key,value) in cities_in_F.items()}
# print(describe_cities)
#---------------------

# cities_in_F = {"New work" : 32, "india" : 80, "boston" : 50, "Los_angels": 70}

# def check_weather(weather):
#     if 80 >= weather >=40:
#         return "hot"
#     else:
#         return "warm"

# desc_cities = {key : check_weather(value) for (key,value) in cities_in_F.items()}
# print(desc_cities)
#--------------------------------------------------------------------------------------

# zip(*iterables) = aggregate elements from two or more iterables (list, tuples, sets, etc)
#                   creates a zip objects with paired elements stored in tuples for each elements 

# user_names = ["bro", "dude", "mister"]
# password  = ("p@ssword", "abs123", "guest")

# users  = zip(user_names, password)

# for i in users:
#     print(i)
# print("---------------------------")

# print(type(users)) # here users is in zip type

# users  = dict(zip(user_names, password)) # here im converting(type casting) into list, list of tuples 
# for i in users.values():
#     print(i)
# print(type(users))

#----------------------------------------------------------------------
# if __name__ == '__main__

# y.......
# 1. Module can be run as astandalone program
# 2. Module can be imported and used by other modules 

# python interpretaotr sets "special variables", one of which is __name__
# then pyhton will execute the code founf within __main__
#----------------------------------------------------------------------

# import time

# print(time.ctime(10000))  # convert a time expressed in seconds since epoch toa readable string
# #                           epoch =  when your computer thinks time begam (referance point)
# # 
# print(time.time())     # return current seconds since epoch

# print(time.ctime(time.time())) # it will return the curret time

# time_objects = time.localtime() # this will return detail time
# print(time_objects)
# local_time = time.strftime("%B %d %Y %H:%M:%S", time_objects)
# print(local_time)

#----------------------------------------------------------------------

# thread  = a flow of execution. Like a separate order fo instruction. separate order of instructions
#                               However each thread takes a turn running to achieve concurrency
#                               GIL = (global interpreter lock)
#                               allows only one thread to hold the control of the python interpreter

# cpu bound = program/task spends most of its time waiting for internal events (CPU intensive) use multiprocessing
# io bound = program/task spends most of its time waiting for external events (user input, web scraping) use multiprocessing

# import threading
# import time

# def eat_breakfast():
#     time.sleep(3)
#     print("its time for breakfast")

# def drink_coffe():
#     time.sleep(4)
#     print("time for coffeee")

# def study():
#     time.sleep(5)
#     print("time for study")

# x = threading.Thread(target=eat_breakfast) # assign one thread to the function 
# x.start()    # here im starting the thread

# y = threading.Thread(target=drink_coffe) # assign one thread to the function 
# y.start()    # here im starting the thread

# z = threading.Thread(target=study) # assign one thread to the function 
# z.start()    # here im starting the thread

# # eat_breakfast() # these ar all main threads
# # drink_coffe()
# # study()
# x.join() # it will hols the main threst untill these threads get completed and get syncwith main thred
# y.join()
# z.join()

# print(threading.active_count()) # no of active threads
# print(threading.enumerate())  # main thread
# print(time.perf_counter()) # it will calculate the time for main thread

#---------------------------------------------------------------------------------------------

# daemon thread = a thread that runc in the background, not important for program to run
#                 your program will not wait for daemon threads to complete before exiting
#
#                 ex. background tasks, garbage collection, waiting for input, long running process

# import threading
# import time

# def timer():
#     count = 0
#     while True:
#         time.sleep(1)
#         count += 1
#         print(f"The count is {count} seconds")

# # Create and start the thread
# x = threading.Thread(target=timer, daemon=True)
# x.start()

# # Main program waits for user input
# answer = input("Do you wish to exit? ")
# print("Program exiting.")

#-----------------------------------------------------------------------------------

# Python multiprocessing

# multiprocessing  = running task in parallel on different cpu cores, bypasses GIL used for threads
#                    multiprocessing = better for cpu bound tasks (heavy cpu usage)
#                    multithreading = better for io bound tasks (waiting around)

# Python multiprocessing import process, cpu_count
# -----------------------------------------------------------------------------------
# GUI
# widgets = GUL elemnts: buttons, textboxes, lables, images
# windows  =  serves as a container to hold or contaion these widgets  
# from tkinter import * # this will import everything from the tkinter

# window = Tk() # instantatiate an instansce of a window
# window.geometry("420x420") # this will define the size, we can alter
# window.title("ignition switch GUI") # give tittle to the GUI

# icon = PhotoImage(file= "D:\\shyam\\python_prac\\Ignition_switch.png") # this will convert the image into photo image
# window.iconphoto(True,icon) # this will change the icon to selected image
# window.config(background= '#32a6a8') # this will change the background colour according to the hex value of the hex colour picker


# window.mainloop() # place window on a computer, listen for events 
#---------------------------------------------------------------------------------------------

# from tkinter import *

# ## label = an area widget that holds text and/or an image within a window
# window = Tk()
# window.geometry("420x420")

# photo = PhotoImage(file="Ignition_switch.png")

# label = Label(window, 
#               text="Ignition_switch", 
#               font= ("Times New Roman", 20,"bold" ), 
#               fg='green', 
#               bg='black',
#               image=photo,
#               compound= 'bottom') # Label, we can insert the text to the windows
# #label.pack() # this will pack the string in to the window, by default it will insert top center of the window
# label.place(x=10,y=0) # we can indent the text, using co ordinates


# window.mainloop()

#----------------------------------------------------------------------------
# another methode   --^
# from tkinter import *  # Import tkinter module

# # Create the main window
# window = Tk()
# window.geometry("420x420")

# # Load the image
# try:
#     photo = PhotoImage(file="Ignition_switch.png")
# except Exception as e:
#     print(f"Error loading image: {e}")
#     photo = None

# # Create the label
# label = Label(
#     window, 
#     text="Ignition Switch", 
#     font=("Times New Roman", 20, "bold"), 
#     fg='green', 
#     bg='black',
#     image=photo, 
#     compound='bottom'  # Text below the image
# )

# # Position the label using place (or pack, but not both)
# label.place(x=10, y=0)

# # Run the event loop
# window.mainloop()

#-------------------------------------------------------------------------------------

# buttons  = you click it, then it does stuff

# from tkinter import *
# from PIL import Image, ImageTk  # Import Pillow library
# count = 0
# def click():
#     global count
#     count += 1
#     print("You clicked the button :)",count)

# window = Tk()  # Wake up the window

# # Open the image using Pillow
# original_image = Image.open('adaptive cruisectrl.png')

# # Resize the image
# resized_image = original_image.resize((200, 200))  # Change dimensions as needed

# # Convert to PhotoImage format for tkinter
# photo = ImageTk.PhotoImage(resized_image)

# window.geometry("320x320")
# button = Button(window,
#                 text='click! me',
#                 command=click,
#                 state=ACTIVE,
#                 image=photo,
#                 compound='bottom')  # 'compound' helps combine image and text
# button.pack()

# window.mainloop() 

#----------------------------------------------------------------------------------------------

# entry widget = textbox that accepts a single line of user input

# from tkinter import *

# window = Tk()
# window.geometry("600x250")

# def submit_button():
#     username = entry.get()
#     print(f"hello {username}")

# def delete_button():
#     entry.delete(0,END)

# entry = Entry(window,
#               font = ("Times New Roman", 30))

# entry.pack(side=LEFT)

# submit_button = Button(window,
#                        text= "submit",
#                        font=("Times New Roman",20),
#                        command=submit_button)

# submit_button.pack(side=RIGHT)

# delete_button = Button(window,
#                        text= "delete",
#                        font=("Times New Roman",20),
#                        compound="bottom",
#                        command=delete_button)

# delete_button.pack(side=RIGHT)


# window.mainloop()

#----------------------------------------------------------------------------

# another method

# from tkinter import *

# window = Tk()
# window.geometry("600x250")

# def submit_button_action():
#     username = entry.get()
#     print(f"Hello {username}")

# def delete_button_action():
#     entry.delete(0, END)

# # Configure grid layout
# window.columnconfigure(0, weight=1) # column 0, with 1 spacing
# window.columnconfigure(1, weight=1) # column 1, so grid is having two column

# # Entry widget
# entry = Entry(window,
#               font=("Times New Roman", 30))
# entry.grid(row=0, column=0, padx=20, pady=20, sticky="w") # w is stick with west

# # Submit button
# submit_button = Button(window,
#                        text="Submit",
#                        font=("Times New Roman", 20),
#                        command=submit_button_action)
# submit_button.grid(row=0, column=1, padx=10, pady=5)

# # Delete button
# delete_button = Button(window,
#                        text="Delete",
#                        font=("Times New Roman", 20),
#                        command=delete_button_action)
# delete_button.grid(row=1, column=1, padx=10, pady=5)

# window.mainloop() 

#--------------------------------------------------------------------------------------------
# from tkinter import *

# window = Tk()
# window.geometry("600x300")

# def display():
#     if(x.get()==1):
#          print("you agree!")
#     else:
#         print("you don't agree :(")

# x= IntVar()
# check_button = Checkbutton(text= "pass the string",
#                                   font=("Times New Roman", 20),
#                                   variable= x,
#                                   onvalue= 1,
#                                   offvalue= 0,
#                                   command=display,
#                                   )
# check_button.pack()

# window.mainloop()
#-----------------------------------------------------------

# pattern example for button 

# from tkinter import *
# root = Tk( )
# b=0
# for r in range(6):
#       for c in range(6):
#          b=b+1
#          Button(root, text=str(b),
#             borderwidth=1 ).grid(row=r,column=c)
# root.mainloop()
#---------------------------------------------------------------------

# another method 

# from tkinter import *
# from tkinter import ttk

# window = Tk()
# window.geometry("600x300")

# def display():
#     if(x.get() == 1):
#         print("you agree!")
#     else:
#         print("you don't agree :(")

# x = IntVar()

# # Create a style
# style = ttk.Style()
# style.configure(
#     "Custom.TCheckbutton",
#     font=("Arial", 20),  # Increase font size
#     padding=100         # Add padding around the checkbox
# )

# # Create a checkbox with the custom style
# check_button = ttk.Checkbutton(
#     text="pass the string",
#     variable=x,
#     onvalue=1,
#     offvalue=0,
#     command=display,
#     style="Custom.TCheckbutton"
# )
# check_button.pack()

# window.mainloop()
#-----------------------------------------------------------------------------
# check box canvas example..

# from tkinter import *

# def toggle_checkbox():
#     """Toggle the checkbox state and update the visual representation."""
#     global is_checked
#     is_checked = not is_checked
#     if is_checked:
#         canvas.itemconfig(checkbox_box, fill="green", outline="green")
#     else:
#         canvas.itemconfig(checkbox_box, fill="white", outline="black")
#     display()

# def display():
#     """Display the checkbox state in the console."""
#     if is_checked:
#         print("you agree!")
#     else:
#         print("you don't agree :(")

# # Initial checkbox state
# is_checked = False

# # Create main window
# window = Tk()
# window.geometry("600x300")

# # Create a canvas for the checkbox
# canvas = Canvas(window, width=100, height=100)  # Larger area for the checkbox
# canvas.pack(pady=20)

# # Draw the checkbox
# checkbox_box = canvas.create_rectangle(
#     20, 20, 80, 80,  # Define the square size
#     fill="white",     # Initial fill color
#     outline="black",  # Outline color
#     width=2           # Outline thickness
# )

# # Make the checkbox clickable
# canvas.bind("<Button-1>", lambda event: toggle_checkbox())

# # Add a label for the checkbox
# Label(window, text="Pass the string", font=("Arial", 20)).pack()

# # Run the main loop
# window.mainloop()

#-------------------------------------------------------------------------------

# radio button = similar to checkbox, but you can only select on from a group

# from tkinter import * 

# window = Tk()
# window.geometry("600x300")


# def order():
#     if(x.get()==0):
#         print("You orderded pizza")
#     elif (x.get()==1):
#         print("you orderded hamburger")
#     elif (x.get()==2):
#         print("you orderded hotdog")

# food = ["pizza", "hamburger", "hotdog"]
# x= IntVar()
# for index in range(len(food)):
#     radio_button = Radiobutton(window,
#                                text= food[index], # add texts to the radio button
#                                font=("Times New Roman",30), 
#                                variable= x, # groups radio button together if they share the same variable
#                                value= index, # assign each radio button a differsnt value
#                                padx=25,
#                                command=order)  
#     radio_button.pack(anchor= 'w')
# window.mainloop()
#----------------------------------------------------------------------------
# scale 

# from tkinter import *

# window = Tk()
# window.geometry("500x300")

# def submit_speed():
#     print(f"the captured speed is {scale.get()} km/hr")

# scale = Scale(window,
#               from_ = 0,
#               to = 300,
#               length=200,
#               orient=HORIZONTAL, # orientation of the scale
#               tickinterval= 50, # numeric indicator on the scale 
#               troughcolor= "#69EAFF"
#               )

# button = Button(window,
#                 text="submit",
#                 font= ("Times New Roman", 15),
#                 command=submit_speed,
#                 compound=RIGHT
#                 )


# scale.set(50) # it will make the initial position of the scale as 40
# scale.pack()
# button.pack()
# window.mainloop()
#-------------------------------------------------------------------------------------

# listbox = A list of selectable text items within it's own container

# from tkinter import *

# window = Tk()
# #window.geometry("500x250")

# def listfun():
#     print(listbox.get(listbox.curselection()))

# def add_list():
#     listbox.insert(listbox.size(),entry.get())
#     listbox.config(height=listbox.size())

# def delete_list():
#     listbox.delete(listbox.curselection())
#     listbox.config(height=listbox.size())
    



# listbox = Listbox(window,
#                   bg= "#f7ffde",
#                   font=("Times New Roman", 20),
#                   width= 8,
#                   selectmode='single',
#                   )

# listbox.insert(1,"idly")
# listbox.insert(2,"vada")
# listbox.insert(3,"dosa")
# listbox.insert(4,"pongal")
# listbox.insert(5,"poori")

# listbox.config(height=listbox.size()) # it will automatically adjust the height as per the list
# listbox.pack()
# #--------------

# entry = Entry(window)
# entry.pack()
# #-----------
# add_button = Button(window,
#                     text="add",
#                     font=10,
#                     command=add_list)
# add_button.pack()
# #------------
# button = Button(window,
#                 text="submit",
#                 font= 10,
#                 command=listfun)
# button.pack()
# #------------

# delete_button = Button(window,
#                        text= "delete",
#                        font= 10,
#                        command=delete_list)


# delete_button.pack()

# window.mainloop()

#------------------------------------------------------------------------------

# from tkinter import *
# from tkinter import messagebox   # import the message box from the library

# window = Tk()

# def click():
    
#     print("the button is pressed")
# #     messagebox.showinfo(title="this is an info mes box",
# #                         message= "Warning occured")
# #     messagebox.showerror(title="this is an info mes box",
# #                          message= "Warning occured")
# #     messagebox.showwarning(title="this is an info mes box",
# #                            message= "Warning occured")
#     if messagebox.askokcancel(title= "saving",
#                               message="Do you want to save the file"):
#         print("your file is saved")
#     else:
#         print("your file is not saved")


# button = Button(window,
#                 text= "click me",
#                 command= click)
# # message = messagebox(window)

# button.pack()
# window.mainloop()
#_-----------------------------------------------------------------
# colour chooser

# from tkinter import *
# from tkinter import colorchooser # subclass

# window = Tk()
# window.geometry("500x300")

# def colour():
# #     colours = colorchooser.askcolor()
# #     print(colours)
# #     colourhex = colours[1]
# #     print(colourhex)
# #     window.config(bg=colourhex)
#     window.config(bg=colorchooser.askcolor()[1]) # optimized line
# button = Button(window,
#                 text= "click(colour)",
#                 font= 15,
#                 command= colour)


# button.pack()
# window.mainloop()

#------------------------------------------------------------------------------

# text widget = functions like a text area, you can enter multiple lines of text

# from tkinter import *

# def submit_text():
#     text = text_widget.get("1.0",END)
#     print(text)
 
# #---------------------------------------
# window = Tk()
# #window.geometry("500x300")

# text_widget = Text(window,
#                    bg="light yellow",
#                    font=("Ink Free",25),
#                    height=10,
#                    width=30,
#                    padx=15,
#                    pady=15,
#                    fg= "red")
# text_widget.pack()
# #-----------------

# button  = Button(window, text= "submit", command= submit_text)
# button.pack()


# window.mainloop()

#-----------------------
# another format/method

# from tkinter import *

# def submit_text():
#     # Retrieve text from the text widget
#     text = text_widget.get("1.0", "end-1c")  # "1.0" means start from line 1, character 0
#     print(f"Submitted text: {text}")  # Print to the console or handle the text as needed

# # Create the main window
# window = Tk()
# window.geometry("500x300")
# window.title("Text Submission Example")

# # Create a Text widget for input
# text_widget = Text(window, font=("times new roman", 16), height=10, width=40)
# text_widget.pack(pady=20)

# # Create a submit button
# button = Button(window, text="Submit", command=submit_text, font=("arial", 12))
# button.pack(side=RIGHT, padx=10)

# # Run the application
# window.mainloop()

#------------------------------------------------------------------------------
# file dialog, opening a particular directory

# from tkinter import *
# from tkinter import filedialog

# def openfile():
#     filepath = filedialog.askopenfilename(initialdir= "S:\\my_canoe_projects\\Config_files\\Practice_config",
#                                           title="Open file",
#                                           filetypes= [("CAN files", "*.can"),("All files", "*.*")]) 
#     file = open(filepath,"r")              # initialdir= it will always open this directory
#     print(file.read())
#     file.close()


# Window = Tk()   

# button = Button(Window, text="open", command= openfile)
# button.pack()


# Window.mainloop()
#-------------------------

# another format/method

# from tkinter import *
# from tkinter import filedialog

# def openfile():
#     filepath = filedialog.askopenfilename(
#         initialdir="S:\\my_canoe_projects\\Config_files\\Practice_config",
#         title="Open file",
#         filetypes=[("CAN files", "*.can"), ("All files", "*.*")]
#     )
#     if filepath:  # Check if a file was selected
#         try:
#             with open(filepath, "r") as file:
#                 print(file.read())
#         except Exception as e:
#             print(f"An error occurred: {e}")

# # Create the main window
# Window = Tk()

# # Add a button to open the file dialog
# button = Button(Window, text="Open", command=openfile)
# button.pack()

# # Run the GUI event loop
# Window.mainloop()

#-------------------------------------------------------------------------

# saving a file

# from tkinter import *
# from tkinter import filedialog

# def save_file():
#     file = filedialog.asksaveasfile(initialdir="C:\\Users\\shyam\\OneDrive\\Desktop",
#                                     defaultextension= ".txt",
#                                     filetypes=[("text files", ".txt"),
#                                     ("All files", ".*")] )
#     if file is None: # to avoid, if we simply open and close withou saving anything it will throw error..
#         return
#     Data = str(text.get("1.0",END))

#     file.write(Data)
#     file.close



# window = Tk()

# button = Button(window,
#                 text="Save",
#                 font=10,
#                 command= save_file)
# button.pack()        
# #----------

# text = Text(window,font=("Times new roman",20),
#             height=10, width=30)
# text.pack()

# window.mainloop()

#--------------------------------------------------------------------------------

# from tkinter import *

# window = Tk()

# menubar = Menu(window)
# window.config(menu=menubar)

# filemenu = Menu(menubar)
# menubar.add_cascade(label="File",menu=filemenu)

# window.mainloop()

#--------------------------------------------------------------------
# import cantools
# import cantools.database

# db = cantools.database.load_file("S:\\CANoe_DataBase\\Practice_project_1.dbc")

# for nodes in db.nodes:
#     print(nodes)

# print('messages:')
# for message in db.messages:
#     print(f'--> {message.name}')

# for message in db.messages:
#     print(f'{message.name}:')
#     for signal in message.signals:
#         print(f'--> {signal.name}')

#------------------------------------------------------------------

from tkinter import *


def Canoe_start_fun():
    pass

def Canoe_stop_fun():
    pass

# Create the main window
window = Tk()

# Set the window title
window.title("Application Window")

# Set the size of the window
window.geometry("400x300")  # Width x Height

# Create a headline label inside the window
headline = Label(window, text="My Py_CANoe panel", font=("Arial", 15, "italic"))
headline.pack(pady=20)  # Add some padding around the headline
#----------------------------------------------------------------------------------
# Load the image
start_image = PhotoImage(file="Start_button.png")

# Create a button with the image
start_button = Button(window, image=start_image, height=15, width=15, command=Canoe_start_fun)
start_button.place(x=20, y=80)  # Position the button (adjust x, y as needed)
start_label = Label(window, text="Start", font=("Arial", 7))
start_label.place(x=18, y=100)
#----------------------------------------------------------------------------------
stop_image = PhotoImage(file="Stop_button.png")

# Create a button with the image
stop_button = Button(window, image=stop_image, height=15, width=15, command=Canoe_stop_fun)
stop_button.place(x=40, y=80)  # Position the button (adjust x, y as needed)

stop_label = Label(window, text="Stop", font=("Arial", 7))
stop_label.place(x=38, y=100)
#-------------------------------------------------------------------------------------

scale = Scale(window,
              from_ = 0,
              to = 3000,
              length = 300,
              orient = HORIZONTAL, # orientation of the scale
              troughcolor= "#69EAFF"
              )
scale_label = Label(window, text="Engie_speed_track_bar",font=("Arial", 10))
scale_label.place(x=100,y=100)

scale.place(x= 65,y=60)
# Run the application
window.mainloop()



        















