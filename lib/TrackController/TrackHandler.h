#pragma once

class TrackHandler {
public:
    bool Trkpoweron();
    bool Trkpoweroff();
    bool TrkIdleLoop();
    bool TrkMaginsert();
    bool TrkMagempty();
    bool TrkShotsingle();
    bool TrkShotauto();
    bool TrkCooldown();
};