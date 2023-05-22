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
	const char* CardRank()const;
	// test
	/*void CardinText();*/

	/*const char* cardFaceS();*/
	Rank getRank() const;
	Suit getSuit() const;
};

