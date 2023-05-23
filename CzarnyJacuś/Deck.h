#pragma once
#include "Card.h"
#include "Header.h"
#include <vector>
#include <cstdlib>

class Deck
{
	std::vector<Card> cards;
	

public:
	

	void FillDeck(int n);
	void ShuffleDeck();
	void PrintDeck()const;
// теж для в подальшому для Hand.cpp, бо маю колоду std::vector<Card> cards в private: і не маю до неї доступу з інших функцій
	Card getCurrentCard(Deck& deck, int n);
	void Erase();
	int getSize();

	void whatDeck();

	Card getCard();

	//void PrintDeckInWords(Rank& r, Suit& s);
};


