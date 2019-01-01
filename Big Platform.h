#ifndef BIG_PLATFORM_H_INCLUDED
#define BIG_PLATFORM_H_INCLUDED
#include "LTexture.h"
#include "GameObjects.h"

class BigPlatform : public GameObjects
{
private:
    LTexture* texture;
    SDL_Rect rightClip;
    SDL_Rect leftClip;
    SDL_Rect leftClip2;
    SDL_Rect rightClip2;
    SDL_Rect middleClip;
    SDL_Rect wideClip;

public:
    BigPlatform();
    BigPlatform(LTexture*);
    ~BigPlatform();
    void Render(SDL_Renderer*);
};

#endif // BIG_PLATFORM_H_INCLUDED
