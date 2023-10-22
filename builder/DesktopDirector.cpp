#include "DesktopDirector.h"

DesktopDirector::DesktopDirector(DesktopBuilder* pDesktopBuilder) {
    desktopBuilder = pDesktopBuilder;
}

Desktop* DesktopDirector::getDesktop() {
    return desktopBuilder -> getDesktop();
}

Desktop* DesktopDirector::BuildDesktop() {
    desktopBuilder -> buildMonitor();
    desktopBuilder -> buildKeyboard();
    desktopBuilder -> buildMotherboard();
    desktopBuilder -> buildMouse();
    desktopBuilder -> buildProcessor();
    desktopBuilder -> buildRam();
    desktopBuilder -> buildSpeaker();
    return desktopBuilder -> getDesktop();
}
