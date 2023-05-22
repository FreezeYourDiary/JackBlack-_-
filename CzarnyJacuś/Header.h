#pragma once
#include <vector>
#include "Card.h"

enum Rank
{
	ACE = 1,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING
};

enum  Suit
{
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES
};


const char* Ranked(Rank rank)
{
	switch (rank) {
	case ACE:
		return "ACE";
		
	case TWO:
		return "TWO";
		
	case THREE:
		return "THREE";
		
	case FOUR:
		return "FOUR";
		
	case FIVE:
		return "FIVE";
		
	case SIX:
		return "SIX";
		
	case SEVEN:
		return "SEVEN";
		
	case EIGHT:
		return "EIGHT";
		
	case NINE:
		return "NINE";
		
	case TEN:
		return "TEN";
		
	case JACK:
		return "JACK";
		
	case QUEEN:
		return "QUEEN";
		
	case KING:
		return "KING";
		
	default:
		return "\n How you got this error?";
	}
}

const char* Suited(Suit suit) {
	switch (suit) {
	case CLUBS:
		return "CLUBS";
	case HEARTS:
		return "HEARTS";
	case DIAMONDS:
		return "DIAMONDS";
	case SPADES:
		return "SPADES";
	default:
		return "WTF HOW?";
	}

}