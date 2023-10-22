#include<iostream>
#include"logger.hpp"
using namespace std;
int Logger::ctr = 0;
Logger* Logger::loggerInstance = nullptr;
mutex Logger::mtx;

Logger::Logger()
{
    ctr++;
    cout<< "New instance created, number of instance is " << ctr << endl;
}

Logger* Logger::getLogger()
{
    if(loggerInstance == nullptr)
    {
        mtx.lock();
        if(loggerInstance == nullptr)
        {
            loggerInstance = new Logger();
        } 
        mtx.unlock();
    }

    return loggerInstance;
}

void Logger::Log(string msg)
{
    cout << msg << endl;
}