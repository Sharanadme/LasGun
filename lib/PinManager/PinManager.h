#pragma once

#include <ADMETCA6424A.h>
#include <Arduino.h>
#include <Wire.h>

class PinManager {
public:

    // === TCA Inputs ===
    static const uint8_t BTN_TRIG_PIN;
    static const uint8_t BTN_MAG_PIN;
    static const uint8_t BTN_MODE_PIN;
    static const uint8_t BTN_PWR_PIN;

    
    // TCA Output Track GPIOs
    static const uint8_t TRK_POWER_ON;
    static const uint8_t TRK_POWER_OFF;
    static const uint8_t TRK_IDLE_LOOP;
    static const uint8_t TRK_MAG_INSERT;
    static const uint8_t TRK_MAG_EMPTY;
    static const uint8_t TRK_SHOT_SINGLE;
    static const uint8_t TRK_SHOT_AUTO;
    static const uint8_t TRK_COOLDOWN;
    
    // === ESP32 Output Pins ===
    static const uint8_t PIN_PUMP;
    static const uint8_t PIN_BARREL_LED1;
    static const uint8_t PIN_BARREL_LED2;
    static const uint8_t PIN_HEATER;
    static const uint8_t PIN_UV_LED;
    static const uint8_t PIN_PSW;
    static const uint8_t PIN_SOLENOID;

    
    static void setup();
    static ADMETCA6424A expander;
};
