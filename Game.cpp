#include "Game.h"

Game::Game(const char* title, int xpos, int ypos, int width, int height, bool fullscrn)
{
    isRunning = false;
    frames = 0;

    if (fullscrn)
    {
        fullscrn = SDL_WINDOW_FULLSCREEN;
    }
    if( SDL_Init( SDL_INIT_VIDEO | SDL_INIT_AUDIO ) < 0 )
    {
        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
        isRunning = false;
    }
    else
    {
        //Create window
        window = SDL_CreateWindow( "Paasbaan-e-Zafar", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_ALWAYS_ON_TOP);
        if( window == nullptr )
        {
            printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );

        }
        else
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface( window );

            //Create renderer for window
            gRenderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
            if( gRenderer == nullptr )
            {
                printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
            }
            else
            {
                //Initialize renderer color
                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF,0xFF );

                //Initialize PNG loading
                int imgFlags = IMG_INIT_PNG;
                if( !( IMG_Init( imgFlags ) & imgFlags ) )
                {
                    printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
                }
            }
        }
    }
}

void Game::Init()
{
    isRunning = true;
    player = new Player(&playerTexture);
    obj = new GameObjects*[1];
    obj[0] = new Water(&objectTexture);
}

void Game::LoadMedia()
{
    if (!playerTexture.LoadFromFile("Player.png", gRenderer))
    {
        printf( "Failed to load player texture!\n" );
    }
    if (!objectTexture.LoadFromFile("Platform Tiles.png", gRenderer))
    {
        printf( "Failed to load platform texture!\n" );
    }
}

void Game::HandleEvents()
{
    SDL_Event event;
    int x, y;
    SDL_GetMouseState( &x, &y );

    while (SDL_PollEvent(&event) != 0)
    {
        if (event.type == SDL_QUIT)
        {
            isRunning = false;
            break;
        }
        player->HandleEvents(event);
    }
}

void Game::Render()
{
    frames++;
    SDL_RenderClear(gRenderer);
    player ->Render(gRenderer);
    obj[0] ->Render(gRenderer);
}

void Game::Update()
{
    SDL_RenderPresent(gRenderer);
}

void Game::Clear()
{
    player = nullptr;
    delete player;
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(gRenderer);
    Mix_Quit();
    IMG_Quit();
    SDL_Quit();
    std::cout << "Game screen is now cleared and memory is deallocated" << std::endl;
}

