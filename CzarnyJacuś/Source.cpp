#include <iostream>
#include "Card.h"
#include "Header.h"
#include "Deck.h"
#include "Hand.h"





int main() {
	

	Deck deck;
	
	deck.FillDeck();
	deck.PrintDeck();
	std::cout << "\n------------------------------\n";
	deck.ShuffleDeck();
	deck.PrintDeck();

	
	Hand myHand;
	std::vector <Card> hand1;


	std::cout << "\n------------------------------\n";
	myHand.DealHand(deck, hand1);
	deck.PrintDeck();

	myHand.CountHand(hand1);
}

