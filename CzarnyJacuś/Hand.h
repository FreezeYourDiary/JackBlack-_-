#pragma once
#include "Deck.h"
#include "Card.h"
#include <iostream>
#include "Header.h"
#include <vector>
class Hand
{
	const int maxSize = 2;
	int valueOfHand = 0;

	std::vector<Card> hand;
	
public:
	bool DealHand(Deck& deck) /*std::vector<Card>& hand*/;
	void PrintHand()const;
	int CountHand();

	bool AddCard(Deck& deck, char yorn);
};


