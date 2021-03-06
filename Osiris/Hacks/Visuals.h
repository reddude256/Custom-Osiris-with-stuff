#pragma once

struct HitMarkerInfo {
    float hitMarkerExpTime;
    int hitMarkerDmg;
};

enum class FrameStage;
class GameEvent;


namespace Visuals
{
    void playerModel(FrameStage stage) noexcept;
    void nightMode() noexcept;
    void modifySmoke(FrameStage stage) noexcept;
    void thirdperson() noexcept;
    void removeVisualRecoil(FrameStage stage) noexcept;
    void removeBlur(FrameStage stage) noexcept;
    void updateBrightness() noexcept;
    void removeGrass(FrameStage stage) noexcept;
    void remove3dSky() noexcept;
    void removeShadows() noexcept;
    void noZoom() noexcept;
    void applyScreenEffects() noexcept;
    void hitEffect(GameEvent* event = nullptr) noexcept;
    void hitMarker(GameEvent* event = nullptr) noexcept;
    void hitMarkerDamageIndicator(GameEvent* = nullptr) noexcept;
    void disablePostProcessing(FrameStage stage) noexcept;
    void reduceFlashEffect() noexcept;
    bool removeHands(const char* modelName) noexcept;
    bool removeSleeves(const char* modelName) noexcept;
    bool removeWeapons(const char* modelName) noexcept;
    void skybox(FrameStage stage) noexcept;
    void bulletBeams(GameEvent* event) noexcept;
    void aaLines() noexcept;
    void PenetrationCrosshair() noexcept;
}
