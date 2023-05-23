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
	//дописати логіку до цієї що якшо рука роздана то її не можна роздати ще раз поки не очиститься
	void ClearHand();


};


