#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "LTexture.h"

class Player
{
private:
    LTexture* playerTexture;
    SDL_Rect playerRect[6];
    SDL_Rect destRect;
    int frame;
    int posX, posY;
    int spriteIndex;
    const int numFrames = 6;
    bool walking;
    bool flip;

public:
    Player();
    ~Player();
    Player(LTexture*);
    void HandleEvents(SDL_Event&);
    void Render(SDL_Renderer*);
    void ChangeSprite();
};

#endif // PLAYER_H_INCLUDED
