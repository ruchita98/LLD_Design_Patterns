#ifndef HP_DESKTOP_BUILDER_H
#define HP_DESKTOP_BUILDER_H

#include "DesktopBuilder.h"
using namespace std;

// concrete builder class
class HpDesktopBuilder: public DesktopBuilder {
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