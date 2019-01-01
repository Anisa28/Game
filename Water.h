#ifndef WATER_H_INCLUDED
#define WATER_H_INCLUDED
#include "GameObjects.h"

class Water : public GameObjects
{
private:
    LTexture* waterTexture;
    SDL_Rect spriteClip;


public:
    Water();
    Water(LTexture*);
    ~Water();
    void Render(SDL_Renderer*);

};

#endif // WATER_H_INCLUDED
