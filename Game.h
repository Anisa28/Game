#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_mixer.h"
#include <stdio.h>
#include "LTexture.h"
#include "Player.h"
#include "GameObjects.h"
#include "Water.h"
#include "Small Platform.h"
#include "Big Platform.h"
#include "Mini Platform.h"
#include "Long Platform.h"
#include "Water Rectangle Platform.h"
#include "Water Long Platform.h"

class Game
{
private:

    SDL_Window* window = nullptr;
    SDL_Surface* gScreenSurface = nullptr;
    SDL_Renderer* gRenderer = nullptr;

    LTexture playerTexture;
    LTexture objectTexture;

    Player* player;
    GameObjects** obj;

    int frames;

public:
    Game();
    Game(const char*, int, int, int, int, bool);
    ~Game();
    void Init();
    void HandleEvents();
    void Render();
    void Update();
    void LoadMedia();
    void Clear();

    bool isRunning;

};

#endif // GAME_H_INCLUDED
