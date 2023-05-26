#pragma once
#include "Player.h"
#include <iostream>
#include "Hand.h"
#include "Deck.h"
#include "Dealer.h"
#include <stdlib.h>

class Game
{
private:
    Deck deck;
    Player player;
    Hand playerHand;
    Hand dealerHand;
    bool game;
    char chose;
    char rch;
    int bet;
   
public:
    Game();
    void GameInit();
    void GameMenu();
    void backToMenu();
    void GameRules();

    void gameRunning();
    /*void Round(Deck& deck, Hand& playerHand, Hand& dealerHand);*/
    void Round();
    void Dealer();
 /*   Hand Logic();*/
    /*void gameResult(Hand& playerHand, Hand& dealerHand);*/
    void gameResult();
  /*  Hand updateHand(Hand& hand, char c);*/
    int getBet();
    void setBet(); 
    char getRch();

};

