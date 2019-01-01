#include "Water.h"
Water::Water()
{

}
Water::Water(LTexture* tex)
{
    this -> waterTexture = tex;
    spriteClip.x = 672;
    spriteClip.y = 384;
    spriteClip.w = 63;
    spriteClip.h = 63;
}

Water::~Water()
{

}

void Water::Render(SDL_Renderer* gRenderer)
{
    int i = 0;
    while (i < SCREEN_WIDTH)
    {
        waterTexture -> Render(i, (SCREEN_HEIGHT - spriteClip.h), gRenderer, &spriteClip);
        i += 63;
    }

}
