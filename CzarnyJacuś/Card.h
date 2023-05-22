#pragma once
#include "Header.h"
#include <iostream>

class Card
{
	Rank rank;
	Suit suit;
	int value;
	const char* cardNameR;
	const char* cardNameS;
	
public:
	
	Card();
	~Card();
	Card(Rank rank, Suit suit);

	
	void ShowCard() const;
	
	int getValue() const;

	void CardinText();
	// test
	Rank getRank() const;
	Suit getSuit() const;
};

