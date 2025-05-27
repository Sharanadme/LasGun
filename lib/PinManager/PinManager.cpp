#include "PinManager.h"

ADMETCA6424A PinManager::expander;

// TCA Input Pins
const uint8_t PinManager::BTN_MAG_PIN     = 3;
const uint8_t PinManager::BTN_MODE_PIN    = 4;
const uint8_t PinManager::BTN_PWR_PIN     = 6;
const uint8_t PinManager::BTN_TRIG_PIN    = 7;


// TCA Output Track Control Pins
const uint8_t PinManager::TRK_POWER_ON    = 8;
const uint8_t PinManager::TRK_POWER_OFF   = 9;
const uint8_t PinManager::TRK_IDLE_LOOP   = 10;
const uint8_t PinManager::TRK_MAG_INSERT  = 11;
const uint8_t PinManager::TRK_MAG_EMPTY   = 12;
const uint8_t PinManager::TRK_SHOT_SINGLE = 13;
const uint8_t PinManager::TRK_SHOT_AUTO   = 14;
const uint8_t PinManager::TRK_COOLDOWN    = 15;

// ESP32 Output Pins
const uint8_t PinManager::PIN_PUMP        = 14;
const uint8_t PinManager::PIN_BARREL_LED1 = 16;
const uint8_t PinManager::PIN_BARREL_LED2 = 17;
const uint8_t PinManager::PIN_HEATER      = 18;
const uint8_t PinManager::PIN_UV_LED      = 19;
const uint8_t PinManager::PIN_PSW         = 23;
const uint8_t PinManager::PIN_SOLENOID    = 12;


void PinManager::setup() {
    Wire.begin(4, 13);
    expander.begin();
    
    // Set up TCA Input Pins
    expander.pinMode(BTN_MAG_PIN, INPUT);
    expander.pinMode(BTN_MODE_PIN, INPUT);
    expander.pinMode(BTN_PWR_PIN, INPUT);
    expander.pinMode(BTN_TRIG_PIN, INPUT);
    


    // Set up TCA Output Track Pins
    for (uint8_t pin = 8; pin <= 23; pin++) {
        expander.pinMode(pin, OUTPUT);
        expander.DigitalWrite(pin, HIGH);
    }

    // Set up ESP32 Output Pins
    pinMode(PIN_PUMP, OUTPUT);
    pinMode(PIN_BARREL_LED1, OUTPUT);
    pinMode(PIN_BARREL_LED2, OUTPUT);
    pinMode(PIN_HEATER, OUTPUT);
    pinMode(PIN_UV_LED, OUTPUT);
    pinMode(PIN_PSW, OUTPUT);
    pinMode(PIN_SOLENOID, OUTPUT);

    digitalWrite(PIN_PSW, HIGH); // Default state
}
