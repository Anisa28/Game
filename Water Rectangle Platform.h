#ifndef WATER_RECTANGLE_PLATFORM_H_INCLUDED
#define WATER_RECTANGLE_PLATFORM_H_INCLUDED
#include "LTexture.h"
#include "GameObjects.h"

class WaterRectanglePlatform : public GameObjects
{
private:
    LTexture* texture;
    SDL_Rect rightClip;
    SDL_Rect leftClip;
    SDL_Rect middleClip;
    SDL_Rect topClip;

public:
    WaterRectanglePlatform();
    WaterRectanglePlatform(LTexture*);
    ~WaterRectanglePlatform();
    void Render(SDL_Renderer*);
};

#endif // WATER_RECTANGLE_PLATFORM_H_INCLUDED
