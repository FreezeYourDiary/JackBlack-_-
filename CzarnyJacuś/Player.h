#pragma once
#include "Hand.h"
#include "Deck.h"
#include <iostream>
#include "Dealer.h"
#include <string>
class Player
{
	std::string name;
	char ch;
	unsigned int chips;
	
public:
	
	Player();
	std::string pickName();
	std::string getName();
	void clearName();
	
	/*void Round(Deck& deck, Hand& hand);*/
	int getchips();
	int addChips(int n);
	
	

};

