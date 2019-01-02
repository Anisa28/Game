#ifndef WATER_LONG_PLATFORM_H_INCLUDED
#define WATER_LONG_PLATFORM_H_INCLUDED
#include "LTexture.h"
#include "GameObjects.h"

class WaterLongPlatform : public GameObjects
{
private:
    LTexture* texture;
    SDL_Rect rightClip;
    SDL_Rect leftClip;
    SDL_Rect middleClip;
    SDL_Rect shortLeftClip;
    SDL_Rect topClip;

public:
    WaterLongPlatform();
    WaterLongPlatform(LTexture*);
    ~WaterLongPlatform();
    void Render(SDL_Renderer*);

};

#endif // WATER_LONG_PLATFORM_H_INCLUDED
