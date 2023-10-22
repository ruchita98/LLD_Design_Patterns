#ifndef DESKTOP_HPP
#define DESKTOP_HPP

#include <string>
using namespace std;

// Product
class Desktop {

    string monitor;
    string keyboard;
    string mouse;
    string speaker;
    string ram;
    string processor;
    string motherboard;

    public:
    void setMonitor(string pMonitor);
    void setKeyboard(string pkeyboard);
    void setMouse(string pMouse);
    void setSpeaker(string pSpeaker);
    void setRam(string pRam);
    void setProcessor(string pProcessor);
    void setMotherboard(string pMotherboard);
    void showSpecs();
};

#endif