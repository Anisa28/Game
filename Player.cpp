#include "Player.h"
Player::Player()
{

}

Player::~Player()
{

}

Player::Player(LTexture* playerTexture)
{
    frame = 0;
    spriteIndex = 0;
    walking = false;
    flip = false;
    this -> playerTexture = playerTexture;
    int posX = 0;

    for (int i = 0; i < 6; i++)
    {
        playerRect[i].x = posX;
        playerRect[i].y = 710;
        playerRect[i].w = 65;
        playerRect[i].h = 70;
        posX += 65;
    }

    this->destRect.w = this->playerRect[0].w;
    this->destRect.h = this->playerRect[0].h;
    this->destRect.y = 100;
    this->destRect.x = 100;


}

void Player::Render(SDL_Renderer* gRenderer)
{
    SDL_Rect* currentClip = &playerRect[frame/6];
    //this -> playerTexture -> Render((800 - currentClip -> w)/2, (600 - currentClip -> h)/2, gRenderer, currentClip);
    if (flip)
    {
        this -> playerTexture -> Render(&playerRect[spriteIndex], &destRect, 0.0, nullptr, SDL_FLIP_HORIZONTAL, gRenderer);
    }
    else
    {
        this -> playerTexture -> Render(&playerRect[spriteIndex], &destRect, 0.0, nullptr, SDL_FLIP_NONE, gRenderer);
    }

    /*if (walking)
    {
        this -> playerTexture -> Render((800 - currentClip -> w)/2, (600 - currentClip -> h)/2, gRenderer, currentClip);
    }
    else
    {
        this -> playerTexture -> Render(&playerRect[spriteIndex], &destRect, 0.0, nullptr, SDL_FLIP_NONE, gRenderer);
    }*/
    frame++;
    /*if (frame %6 == 0)
    {
        //frame = 0;
        //ChangeSprite();
    }*/
}

void Player::HandleEvents(SDL_Event& e)
{

    if (e.type == SDL_KEYDOWN)
    {
        switch (e.key.keysym.sym )
        {
            case SDLK_RIGHT:
                flip = false;
                ChangeSprite();
                destRect.x += 2;
                break;
            case SDLK_LEFT:
                flip = true;
                ChangeSprite();
                destRect.x -= 2;
                break;
        }
    }
}

void Player::ChangeSprite()
{
    if (spriteIndex < numFrames - 1)
    {
        spriteIndex++;
    }
    else
    {
        spriteIndex = 0;
    }
}
