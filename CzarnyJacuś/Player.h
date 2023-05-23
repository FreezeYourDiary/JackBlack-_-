#pragma once
#include "Hand.h"
#include "Deck.h"
#include <iostream>
class Player
{
	Hand hand;
	int points;
	std::string name;
public:
	std::string pickName();
	std::string getName();
	void DealHandToPlayer(Deck& deck, Hand& hand);
	int countValue();
	void hitCard();
	
};

