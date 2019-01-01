#ifndef GAMEPLAY_SCREEN_H_INCLUDED
#define GAMEPLAY_SCREEN_H_INCLUDED
#include "Screen.h"

class GameplayScreen : public Screen
{
private:

public:
    GameplayScreen();
    ~GameplayScreen();
    void Render(SDL_Renderer*);

};

#endif // GAMEPLAY_SCREEN_H_INCLUDED
