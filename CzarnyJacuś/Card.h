#pragma once
#include "Header.h"
#include <iostream>

class Card
{
	Rank rank;
	Suit suit;
	int value;
	
	
	/*std::vector<const char*> cardFace;*/
public:
	
	Card();
	~Card();
	Card(Rank rank, Suit suit);

	void ShowCard() const;	
	int getValue() const;
	
	// test
	// const char* CardRank()const;
	// void PrintCard() const;

	/*Rank getRank() const;
	Suit getSuit() const;*/
};

