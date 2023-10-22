#ifndef DESKTOP_DIRECTOR_H
#define DESKTOP_DIRECTOR_H

#include "DesktopBuilder.h"
using namespace std;

class DesktopDirector {
private:
    DesktopBuilder* desktopBuilder;
public:
    DesktopDirector(DesktopBuilder* pDesktopBuilder);

    Desktop* getDesktop();

    Desktop* BuildDesktop();
};

#endif