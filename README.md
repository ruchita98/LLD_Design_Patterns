
# LLD_Design_Patterns  
This repo contains sample design pattern codes for LLD design in CPP  

Each module is compatible to run on visual studio code for mac IDE  

## Observer pattern  
It's behavioral design pattern, basically a publisher - subscriber model  
Usecase is to notify when   
1. User logged in into multiple devices, we need to send update to all the logged in devices
2. In a group, everyone of the members should be notified about any msg.

## Singleton pattern  
It's creational design pattern, when only one instance of the object should be maintained throughout lifetime of our program  .
best example could be Logger module  .
note: when creating the singleton object need to make it thread safe, else multiple thread accessing it concurrently can result in creating several instances, breaking our design pattern Goal.  

## Abstract factory  design pattern  
It is one of the creational design patterns  
When you don't want client to be bothered about the implementation details of any object, abstract out the object creation in the factory and client will just get the object from factory.  

best example: when u have a client code base that has both mac and windows related code, based on your os type you create specific UI elements(Button/ Textbox)  

![image](https://github.com/ruchita98/LLD_Design_Patterns/assets/28603713/b4afba1d-bd99-4ae3-9a07-c0376d502344)



## builder design pattern  
This is one of the creational design pattern.  
Used when:  
1. you need to build complex object  
2. when building that object needs lots of configuration  

In the UML diagram below  :  
1. Product (Desktop in our code) needs lots of configuration of different components like monitor, keyboard etc.)   
2. Builder is inferface (in code DesktopBuilder)  
3. Concrete builders (in code DellDesktopBuilder and HpDesktopBuilder) build their own type of Desktop object and all this implementation is abstracted out in the Builder (in code DesktopBuilder) inferface  
4.  Finally Director(in code DesktopDirector) is the head which takes as parameter different concrete builders and command them to build the final product  
5.  Client (in code Client) needs to just talk to Director to build any Product  

   <img width="918" alt="Screenshot 2023-10-22 at 12 15 42 PM" src="https://github.com/ruchita98/LLD_Design_Patterns/assets/28603713/c7e972de-d092-401f-a54a-c9d9effef64c">


## Adapter design pattern  

This structural design pattern is used when 2 modules are incompatible to work with each other, we fit in this Adapter in between to make it work.  
Client should be oblivious about ADAPTER so we inherit ADATPER from Target(that directly interacts with client, DataAnalyticsTool in our code) .

Note: in some languages one class can inherit from only one class, multiple inheritance not supported, so we didn't inherit Adapter from Adaptee, rather passed Adaptee to Adapter module via composition (passed as parameter in initialization time), this is called Object Adapter pattern  .

<img width="1020" alt="Screenshot 2023-10-22 at 5 57 24 PM" src="https://github.com/ruchita98/LLD_Design_Patterns/assets/28603713/805d7aec-0ba4-459c-943e-ef871029845a">


<img width="1290" alt="Screenshot 2023-10-22 at 6 34 35 PM" src="https://github.com/ruchita98/LLD_Design_Patterns/assets/28603713/09425ad8-c4db-4f51-9a5e-4f249ca55728">

## Facade Design pattern

## Strategy Design pattern

## Decorator Design pattern

## visitor design pattern
