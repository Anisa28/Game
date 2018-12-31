#include "LTexture.h"

using namespace std;

LTexture::LTexture()
{
    texture = nullptr;
    width = 0;
    height = 0;
}

LTexture::~LTexture()
{
    Free();
}

bool LTexture::LoadFromFile( std::string path, SDL_Renderer* gRenderer)
{
    //Get rid of preexisting texture
    Free();
    //cout<<path<<endl;
    //The final texture
    SDL_Texture* newTexture = nullptr;

    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
    if( loadedSurface == nullptr )
    {
        printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
    }
    else
    {
        //Color key image
        //SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0xFF, 0xFF, 0xFF ) );

        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
        if( newTexture == nullptr )
        {
            printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );

        }
        else
        {
            //Get image dimensions
            width = loadedSurface->w;
            height = loadedSurface->h;
        }

        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }

    //Return success
    texture = newTexture;
    return texture != nullptr;
}

void LTexture::Free()
{
    //Free texture if it exists
    if( texture != nullptr )
    {
        SDL_DestroyTexture( texture );
        texture = nullptr;
        width = 0;
        height = 0;
    }
}


void LTexture::Render( SDL_Rect* src, SDL_Rect* dest, double angle, SDL_Point* center, SDL_RendererFlip flip, SDL_Renderer* gRenderer )
{
    SDL_RenderCopyEx( gRenderer, texture, src, dest, angle, center, flip );
}

void LTexture::Render(int x, int y, SDL_Renderer* gRenderer, SDL_Rect* src, SDL_RendererFlip flip, double angle, SDL_Point* center, float scale)
{
	SDL_Rect dest = { x, y, width, height };

	if (src != NULL)
	{
		dest.w = src->w;
		dest.h = src->h;
	}
	dest.w *= scale;
	dest.h *= scale;


//	if (debug == true)
//	{
//		SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
//		SDL_RenderDrawRect(gRenderer, &dest);
//	}
	SDL_RenderCopyEx(gRenderer, texture, src, &dest, angle, center, flip);
}

void LTexture::setAlpha(Uint8 alpha)
{
    SDL_SetTextureAlphaMod(texture, alpha);
}

void LTexture::setBlendMode(SDL_BlendMode blending)
{
    SDL_SetTextureBlendMode(texture, blending);
}
