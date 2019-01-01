#include "Small Platform.h"
SmallPlatform::SmallPlatform()
{

}

SmallPlatform::SmallPlatform(LTexture* tex)
{
    this -> texture = tex;

    leftClip.x = 700;
    leftClip.y = 160;
    leftClip.w = 40;
    leftClip.h = 192 - 160;

    rightClip.x = 860;
    rightClip.y = 160;
    rightClip.w = 40;
    rightClip.h = 192-160;
}

SmallPlatform::~SmallPlatform()
{

}

void SmallPlatform::Render(SDL_Renderer* gRenderer)
{
    texture ->Render(200, 200, gRenderer, &leftClip);
    texture ->Render(230, 200, gRenderer, &rightClip);

}
