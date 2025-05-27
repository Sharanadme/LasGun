#pragma once

class OutputHandler {
public:
    void Barrelled1HIGH();
    void Barrelled2HIGH();
    void FireSolenoidHIGH();
    void FlashUVHIGH();

    void Barrelled1LOW();
    void Barrelled2LOW();
    void FireSolenoidLOW();
    void FlashUVLOW();
};
