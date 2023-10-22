#ifndef DELL_DESKTOP_BUILDER_H
#define DELL_DESKTOP_BUILDER_H

#include "DesktopBuilder.h"
using namespace std;

// concrete builder class
class DellDesktopBuilder: public DesktopBuilder {
    public:
        void buildMonitor();
        void buildKeyboard();
        void buildMouse();
        void buildSpeaker();
        void buildRam();
        void buildProcessor();
        void buildMotherboard();
};

#endif