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