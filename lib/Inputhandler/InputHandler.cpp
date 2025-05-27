#include "InputHandler.h"
#include "PinManager.h"

bool InputHandler::isTriggerPressed() {
    // Fix: use the correct method as defined in the library
    return PinManager::expander.DigitalReadBlip(PinManager::BTN_TRIG_PIN) == LOW; 
}

bool InputHandler::isPowerPressed() {
    return PinManager::expander.DigitalReadBlip(PinManager::BTN_PWR_PIN) == LOW;
}

bool InputHandler::isModePressed() {
    return PinManager::expander.DigitalReadBlip(PinManager::BTN_MODE_PIN) == LOW;
}

bool InputHandler::isMagInserted() {
    return PinManager::expander.DigitalReadBlip(PinManager::BTN_MAG_PIN) == LOW;
}

