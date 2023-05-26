#pragma once
#include "Deck.h"
#include "Card.h"
#include <iostream>
#include "Header.h"
#include <vector>
class Hand
{
	int maxSize;
	int valueOfHand;
	std::vector<Card> hand;
	bool visible;
	int AceCount;
public:
	Hand();
	bool DealHand(Deck& deck) /*std::vector<Card>& hand*/;
	void PrintHand(bool visible);
	int CountHand();
	int setSize(int maxSize);

	bool Split(Hand& hand);
	Card getCard(Hand& hand, int n);

	Card AddCard(Deck& deck);
	//дописати логіку до цієї що якшо рука роздана то її не можна роздати ще раз поки не очиститься
	void ClearHand();
	

};


