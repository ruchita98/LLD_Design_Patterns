# LLD_Design_Patterns
This repo contains sample design pattern codes for LLD design

Each module is compatible to run on visual studio code for mac IDE

## Observer pattern  
It's basically a publisher - subscriber model  
Usecase is to notify when   
1. User logged in into multiple devices, we need to send update to all the logged in devices
2. In a group, everyone of the members should be notified about any msg.

## Singleton pattern  
When only one instance of the object should be maintained throughout lifetime of our program  
one example could be Logger module  
note: when creating the singleton object need to make it thread safe, else multiple thread accessing it concurrently can result in creating several instances, breaking our design pattern Goal.  

## Abstract factory  design pattern  
It part of creational design part  
When you don't want client to be bothered about the implementation details of any object, abstract out the object creation in the factory and client will just get the object from factory.  

best example: when u have a client code base that has both mac and windows related code, based on your os type you create specific UI elements(Button/ Textbox)  

![image](https://github.com/ruchita98/LLD_Design_Patterns/assets/28603713/b4afba1d-bd99-4ae3-9a07-c0376d502344)



## builder design pattern

