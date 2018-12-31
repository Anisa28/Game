#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
#include "Game.h"

using namespace std;

Game* game = nullptr;

int main( int argc, char* args[] )
{
    game = new Game("My Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    game -> Init();
    game -> LoadMedia();

    while (game -> isRunning)
    {
        game -> HandleEvents();
        game -> Render();
        game ->Update();
    }
    game ->Clear();
    cout << "Hello world!" << endl;
    return 0;
}
