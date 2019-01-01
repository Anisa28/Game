#ifndef SMALL_PLATFORM_H_INCLUDED
#define SMALL_PLATFORM_H_INCLUDED
#include "LTexture.h"
#include "GameObjects.h"

class SmallPlatform : public GameObjects
{
private:
    LTexture* texture;
    SDL_Rect rightClip;
    SDL_Rect leftClip;

public:
    SmallPlatform();
    SmallPlatform(LTexture*);
    ~SmallPlatform();
    void Render(SDL_Renderer*);

};
#endif // SMALL_PLATFORM_H_INCLUDED
