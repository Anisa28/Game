#include "Long Platform.h"

LongPlatform::LongPlatform()
{

}

LongPlatform::LongPlatform(LTexture* tex)
{
    this -> texture = tex;

    rightClip.x = 832;
    rightClip.y = 193;
    rightClip.w = 32;
    rightClip.h = 62;

    leftClip.x = 736;
    leftClip.y = 193;
    leftClip.w = 32;
    leftClip.h = 62;

    leftClip2.x = 700;
    leftClip2.y = 160;
    leftClip2.w = 36;
    leftClip2.h = 25;

    rightClip2.x = 864;
    rightClip2.y = 160;
    rightClip2.w = 36;
    rightClip2.h = 25;

}

LongPlatform::~LongPlatform()
{

}

void LongPlatform::Render(SDL_Renderer* gRenderer)
{
    int y = 500;
    int x = 100;
    texture -> Render((x + rightClip.w), y, gRenderer, &rightClip);
    texture -> Render(x, y, gRenderer, &leftClip);
    texture -> Render((x + rightClip.w), (y - 25), gRenderer, &rightClip2);
    texture -> Render((x - 4), (y - 25), gRenderer, &leftClip2);
}
