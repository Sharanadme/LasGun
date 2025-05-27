#include "OutputHandler.h"
#include "PinManager.h"
#include <Arduino.h>

void OutputHandler::Barrelled1HIGH() {
    Serial.println("Muzzle LED Flash");
    // On Barrel LED1
    digitalWrite(PinManager::PIN_BARREL_LED1, HIGH);
}

void OutputHandler::Barrelled2HIGH() {
    Serial.println("Barrel LED Glow");
    // Glow Barrel LED2
    digitalWrite(PinManager::PIN_BARREL_LED2, HIGH);
}

void OutputHandler::FireSolenoidHIGH() {
    Serial.println("Firing Solenoid!");
    // Fire On Solonoid
    digitalWrite(PinManager::PIN_SOLENOID, HIGH);  
}

void OutputHandler::FlashUVHIGH() {
    Serial.println("Flashing UV LED");
    // Flash On UV LED
    digitalWrite(PinManager::PIN_UV_LED, HIGH);  
}

void OutputHandler::Barrelled1LOW() {
    Serial.println("Muzzle LED Flash");
    // Off Barrel LED1
    digitalWrite(PinManager::PIN_BARREL_LED1, LOW);
}

void OutputHandler::Barrelled2LOW() {
    Serial.println("Barrel LED Glow");
    // Barrel LED2 Off
    digitalWrite(PinManager::PIN_BARREL_LED2, LOW);
}

void OutputHandler::FireSolenoidLOW() {
    Serial.println("Firing Solenoid!");
    // Solonoid Off
    digitalWrite(PinManager::PIN_SOLENOID, LOW);
}

void OutputHandler::FlashUVLOW() {
    Serial.println("Flashing UV LED");
    // Turn Off UV LED
    digitalWrite(PinManager::PIN_UV_LED, LOW);
}
