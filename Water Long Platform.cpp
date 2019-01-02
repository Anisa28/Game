#include "Water Long Platform.h"

WaterLongPlatform::WaterLongPlatform()
{

}

WaterLongPlatform::WaterLongPlatform(LTexture* tex)
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

    /*middleClip.x = 784;
    middleClip.y = 225;
    middleClip.w = 37;
    middleClip.h = 55;*/
    middleClip.x = 784;
    middleClip.y = 225;
    middleClip.w = 37;
    middleClip.h = 62;

    shortLeftClip.x = 736;
    shortLeftClip.y = 225;
    shortLeftClip.w = 32;
    shortLeftClip.h = 30;

    topClip.x = 699;
    topClip.y = 160;
    topClip.w = 201;
    topClip.h = 21;
}

WaterLongPlatform::~WaterLongPlatform()
{

}

void WaterLongPlatform::Render(SDL_Renderer* gRenderer)
{
    int x = 600, y = 450;

    texture ->Render((x - shortLeftClip.w) - 5, y, gRenderer, &topClip);

    int i = rightClip.w, j = 31;
    while (j < 150)
    {
        texture ->Render(((x - shortLeftClip.w) + j), (y + topClip.h), gRenderer, &middleClip);
        j += 31;
    }
    while (i < 100)
    {
        texture ->Render(x + i, (y + 70), gRenderer, &middleClip);
        i += rightClip.w;
    }

    texture ->Render((x - shortLeftClip.w), (y + topClip.h), gRenderer, &shortLeftClip);
    texture -> Render((x - 27) + j, (y + topClip.h), gRenderer, &rightClip);
    texture -> Render(x, (y + topClip.h + shortLeftClip.h), gRenderer, &leftClip);

    texture -> Render((x + i), (y + 70), gRenderer, &rightClip);
    texture -> Render(x, (y + 70), gRenderer, &leftClip);
}
