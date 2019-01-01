#ifndef SCREENS_H_INCLUDED
#define SCREENS_H_INCLUDED
#include "LTexture.h"

class Screen
{
public:
    Screen();
    virtual ~Screen();
    virtual void Render(SDL_Renderer*) = 0;
    //void MouseMotionEvents(int, int);
    //int MouseClickEvents(int, int);
    //Button* screen_button;
    //int GetButtons();
    //bool GetActive();
    //void SetActive(bool);
    //virtual void SetClicks(int);

protected:
    //Word* screen_words;
    int buttonCount;

private:
    //SDL_Texture* texture;
    bool isActive;

};

#endif // SCREENS_H_INCLUDED
