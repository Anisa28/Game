#ifndef GAMEOBJECTS_H_INCLUDED
#define GAMEOBJECTS_H_INCLUDED
#include "LTexture.h"
#include "Globals.h"

class GameObjects
{
private:
    LTexture* objTexture;

public:
    GameObjects();
    GameObjects(LTexture*);
    ~GameObjects();
    virtual void Render(SDL_Renderer*) = 0;
    LTexture* GetTexture();

};

#endif // GAMEOBJECTS_H_INCLUDED
