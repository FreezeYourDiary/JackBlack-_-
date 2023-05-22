#pragma once
#include "Player.h"
#include <iostream>
#include "Hand.h"
#include "Deck.h"
class Game
{
private:
    bool game;
    char chose;
public:
    Game();
    void gameRunning();
};

