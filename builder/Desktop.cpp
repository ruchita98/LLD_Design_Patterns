#include "Desktop.h"
#include <iostream>
#include <string>
using namespace std;


void Desktop::setMonitor(string pMonitor) {
    monitor = pMonitor;
}

void Desktop::setKeyboard(string pkeyboard) {
    keyboard = pkeyboard;
}

void Desktop::setMouse(string pMouse) {
    mouse = pMouse;
}

void Desktop::setSpeaker(string pSpeaker) {
    speaker = pSpeaker;
}

void Desktop::setRam(string pRam) {
    ram = pRam;
}

void Desktop::setProcessor(string pProcessor) {
    processor = pProcessor;
}

void Desktop::setMotherboard(string pMotherboard) {
    motherboard = pMotherboard;
}

void Desktop::showSpecs() {
    cout << "-----------------------------------------" << endl;
    cout << "Monitor : " << monitor << endl;
    cout << "Keyboard : " << keyboard << endl;
    cout << "Mouse : " << mouse << endl;
    cout << "Speaker : " << speaker << endl;
    cout << "Ram : " << ram << endl;
    cout << "Processor : " << processor << endl;
    cout << "Motherboard : " << motherboard << endl;
}
