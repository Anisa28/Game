#include "GameObjects.h"
GameObjects::GameObjects()
{

}

GameObjects::GameObjects(LTexture* waterTexture)
{
    this -> objTexture = waterTexture;
}

LTexture* GameObjects::GetTexture()
{
    return objTexture;
}

GameObjects::~GameObjects()
{

}
