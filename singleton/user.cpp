#include <iostream>
#include <thread>
#include "logger.hpp"
using namespace std;

void createLoggerForUser1()
{
    Logger* logger1 = Logger::getLogger();
    logger1 -> Log("this is msg from user 1");
}

void createLoggerForUser2()
{
    Logger* logger2 = Logger::getLogger();
    logger2 -> Log("this is msg from user 2");
}

int main()
{
    thread thread1(createLoggerForUser1);
    thread thread2(createLoggerForUser2);

    thread1.join();
    thread2.join();

    return 0;
}