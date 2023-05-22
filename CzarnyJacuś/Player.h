#pragma once
#include "Hand.h"
#include "Deck.h"
#include <iostream>
class Player
{
	Hand hand;
	int points;
	const char* playerName;
public:
	void pickName(const char* Name);
	void DealHandToPlayer(Deck& deck, Hand& hand);
	int countValue();
	void hitCard();
	
};

