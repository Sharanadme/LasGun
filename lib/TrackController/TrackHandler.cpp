#include "TrackHandler.h"
#include "PinManager.h"
#include <Arduino.h>

bool TrackHandler::Trkpoweron() {
    Serial.println("Started Play Tracks ON");

    PinManager::expander.DigitalWrite(PinManager::TRK_POWER_ON, HIGH);
    delay(500);
    PinManager::expander.DigitalWrite(PinManager::TRK_POWER_ON, LOW);

    return true;
}

bool TrackHandler::Trkpoweroff() {
    Serial.println("Started Play Tracks OFF");

    PinManager::expander.DigitalWrite(PinManager::TRK_POWER_OFF, HIGH);
    delay(500);
    PinManager::expander.DigitalWrite(PinManager::TRK_POWER_OFF, LOW);

    return true;
}

bool TrackHandler::TrkIdleLoop() {
    Serial.println("Started Play Tracks IDLE LOOP");

    PinManager::expander.DigitalWrite(PinManager::TRK_IDLE_LOOP, HIGH);
    delay(500);
    PinManager::expander.DigitalWrite(PinManager::TRK_IDLE_LOOP, LOW);

    return true;
}

bool TrackHandler::TrkMaginsert() {
    Serial.println("Started Play Tracks IDLE LOOP");

    PinManager::expander.DigitalWrite(PinManager::TRK_MAG_INSERT, HIGH);
    delay(500);
    PinManager::expander.DigitalWrite(PinManager::TRK_MAG_INSERT, LOW);

    return true;
}

bool TrackHandler::TrkMagempty() {
    Serial.println("Started Play Tracks IDLE LOOP");

    PinManager::expander.DigitalWrite(PinManager::TRK_MAG_EMPTY, HIGH);
    delay(500);
    PinManager::expander.DigitalWrite(PinManager::TRK_MAG_EMPTY, LOW);

    return true;
}

bool TrackHandler::TrkShotsingle() {
    Serial.println("Started Play Tracks IDLE LOOP");

    PinManager::expander.DigitalWrite(PinManager::TRK_SHOT_SINGLE, HIGH);
    delay(500);
    PinManager::expander.DigitalWrite(PinManager::TRK_SHOT_SINGLE, LOW);

    return true;
}

bool TrackHandler::TrkShotauto() {
    Serial.println("Started Play Tracks IDLE LOOP");

    PinManager::expander.DigitalWrite(PinManager::TRK_SHOT_AUTO, HIGH);
    delay(500);
    PinManager::expander.DigitalWrite(PinManager::TRK_SHOT_AUTO, LOW);

    return true;
}

bool TrackHandler::TrkCooldown() {
    Serial.println("Started Play Tracks IDLE LOOP");

    PinManager::expander.DigitalWrite(PinManager::TRK_COOLDOWN, HIGH);
    delay(500);
    PinManager::expander.DigitalWrite(PinManager::TRK_COOLDOWN, LOW);

    return true;
}


