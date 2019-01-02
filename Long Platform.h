#ifndef LONG_PLATFORM_H_INCLUDED
#define LONG_PLATFORM_H_INCLUDED
#include "LTexture.h"
#include "GameObjects.h"

class LongPlatform : public GameObjects
{
private:
    LTexture* texture;
    SDL_Rect rightClip;
    SDL_Rect leftClip;
    SDL_Rect rightClip2;
    SDL_Rect leftClip2;

public:
    LongPlatform();
    LongPlatform(LTexture*);
    ~LongPlatform();
    void Render(SDL_Renderer*);
};

#endif // LONG_PLATFORM_H_INCLUDED
