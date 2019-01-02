#include "Water Rectangle Platform.h"

WaterRectanglePlatform::WaterRectanglePlatform()
{

}

WaterRectanglePlatform::WaterRectanglePlatform(LTexture* tex)
{
    this ->texture = tex;

    rightClip.x = 832;
    rightClip.y = 193;
    rightClip.w = 32;
    rightClip.h = 62;

    leftClip.x = 736;
    leftClip.y = 193;
    leftClip.w = 32;
    leftClip.h = 62;

    middleClip.x = 784;
    middleClip.y = 225;
    middleClip.w = 31;
    middleClip.h = 62;

    topClip.x = 699;
    topClip.y = 160;
    topClip.w = 201;
    topClip.h = 21;
}

WaterRectanglePlatform::~WaterRectanglePlatform()
{

}

void WaterRectanglePlatform::Render(SDL_Renderer* gRenderer)
{
    texture ->Render(195 + 57, 425, gRenderer, &topClip);
    texture ->Render(195, 425, gRenderer, &topClip);

    texture ->Render(200, 445, gRenderer, &leftClip);
    texture ->Render(200, 500, gRenderer, &leftClip);


    int i = 31;
    while (i < 200)
    {
        texture ->Render(200 + i, 445, gRenderer, &middleClip);
        texture ->Render(200 + i, 500, gRenderer, &middleClip);
        i += 31;
    }

    texture ->Render(200 + i, 445, gRenderer, &rightClip);
    texture ->Render(200 + i, 500, gRenderer, &rightClip);



}
