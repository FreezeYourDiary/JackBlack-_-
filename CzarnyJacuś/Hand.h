#pragma once
#include "Deck.h"
#include "Card.h"
#include <iostream>
#include "Header.h"
#include <vector>
class Hand
{
	const int maxSize;
	int valueOfHand;
	std::vector<Card> hand;
	int temptest;
public:
	Hand();
	bool DealHand(Deck& deck) /*std::vector<Card>& hand*/;
	void PrintHand()const;
	int CountHand();

	bool AddCard(Deck& deck);

	void ClearHand();
};


