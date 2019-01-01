#include "Big Platform.h"
BigPlatform::BigPlatform()
{

}

BigPlatform::BigPlatform(LTexture* tex)
{
    this ->texture = tex;

    leftClip2.x = 736;
    leftClip2.y = 230;
    leftClip2.w = 32;
    leftClip2.h = 26;

    rightClip2.x = 832;
    //rightClip2.y = 193;
    rightClip2.y = 230;
    rightClip2.w = 32;
    //rightClip2.h = 62;
    rightClip2.h = 26;

    middleClip.x = 784;
    middleClip.y = 261;
    middleClip.w = 31;
    middleClip.h = 26;

    wideClip.x = 699;
    wideClip.y = 160;
    wideClip.w = 201;
    wideClip.h = 31;

}

void BigPlatform::Render(SDL_Renderer* gRenderer)
{
    texture ->Render(20, 19, gRenderer, &wideClip);
    texture ->Render(57, 50, gRenderer, &leftClip2);

    int i = 82;
    while (i < 150)
    {
        texture ->Render(i, 50, gRenderer, &middleClip);
        i += 24;
    }

    texture ->Render(i, 50, gRenderer, &rightClip2);
}

BigPlatform::~BigPlatform()
{

}
