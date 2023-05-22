#pragma once
#include "Card.h"
#include "Header.h"
#include <vector>
#include <cstdlib>

class Deck
{
	std::vector<Card> cards;
	std::string card_name;
	int maxDeckSize = 52;

public:
	

	void FillDeck();

	void ShuffleDeck();

	void PrintDeck()const;
// теж для в подальшому для Hand.cpp, бо маю колоду std::vector<Card> cards в private: і не маю до неї доступу з інших функцій
	Card getCurrentCard(Deck& deck, int n);
	
	void Erase();

	int getSize();

	Card getCard();

	//void PrintDeckInWords(Rank& r, Suit& s);
};


