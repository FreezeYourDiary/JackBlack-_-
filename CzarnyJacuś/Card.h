#pragma once
#include "Header.h"
#include <iostream>
using std::string;
class Card
{
	Rank rank;
	Suit suit;
	int value;
	
	string name;
	
public:
	
	Card();
	~Card();
	Card(Rank rank, Suit suit);

	void ShowCard() const;	
	int getValue() const;
	
	Rank getRank() const;
	// test
	// const char* CardRank()const;
	// void PrintCard() const;

	/*Rank getRank() const;
	Suit getSuit() const;*/
};

