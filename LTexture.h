#ifndef LTEXTURE_H_INCLUDED
#define LTEXTURE_H_INCLUDED
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>

class LTexture
{
private:
    SDL_Texture* texture;
    int width;
    int height;

public:
    LTexture();
    ~LTexture();
    bool LoadFromFile( std::string path, SDL_Renderer* gRenderer );
    void Free();    //Deallocates texture
    void Render( SDL_Rect* src = nullptr, SDL_Rect* dest = nullptr, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE, SDL_Renderer* gRenderer = NULL);
    void Render( int x, int y, SDL_Renderer* gRenderer, SDL_Rect* src = nullptr, SDL_RendererFlip flip = SDL_FLIP_NONE, double angle = 0.0, SDL_Point* center = nullptr, float scale = 1 );
    void setAlpha(Uint8);
    void setBlendMode(SDL_BlendMode);
};


#endif // LTEXTURE_H_INCLUDED
