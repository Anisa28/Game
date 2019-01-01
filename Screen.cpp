#include "Screen.h"

Screen::Screen()
{
    isActive = false;
    //screen_button = NULL;
    //screen_words = NULL;
    //texture = NULL;
}

Screen::~Screen()
{
    /*if (screen_button != NULL)
    {
        delete[] screen_button;
        screen_button = NULL;
    }*/
    //std::cout << "Screen destroyed" << std::endl;
}

/*void Screen::MouseMotionEvents(int x, int y)
{
    for (int i = 0; i < GetButtons(); i++)
    {
        if (x >= screen_button[i].GetPositions().x && x <= (screen_button[i].GetPositions().x + screen_button[i].GetPositions().w) && y >= screen_button[i].GetPositions().y && y <= (screen_button[i].GetPositions().y + screen_button[i].GetPositions().h))
        {
            screen_button[i].ChangeState("Hover");
        }
        else
        {
            screen_button[i].ChangeState("Default");
        }
    }
}

int Screen::MouseClickEvents(int x, int y)
{
    int i = -1;
    for (int i = 0; i < GetButtons(); i++)
    {
        if (x >= screen_button[i].GetPositions().x && x <= (screen_button[i].GetPositions().x + screen_button[i].GetPositions().w) && y >= screen_button[i].GetPositions().y && y <= (screen_button[i].GetPositions().y + screen_button[i].GetPositions().h))
        {
            screen_button[i].ChangeState("Clicked");
            return i;
        }
        else
        {
            screen_button[i].ChangeState("Default");
        }
    }
    return i;
}

bool Screen::GetActive()
{
    return isActive;
}

void Screen::SetActive(bool active)
{
    this -> isActive = active;
}

int Screen::GetButtons()
{
    int i = 0;
    while (i < buttonCount)
    {
        i++;
    }
    return i;
}

void Screen::SetClicks(int counter)
{

}*/
