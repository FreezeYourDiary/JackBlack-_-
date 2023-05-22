#pragma once
#include "Header.h"
#include <iostream>

class Card
{
	Rank rank;
	Suit suit;
	int value;
public:
	
	Card();
	~Card();
	Card(Rank rank, Suit suit);
	
	void ShowCard() const;
	int getValue() const;

	// test
	//Rank ShowRank() const;
	//Suit ShowSuit() const;
};

