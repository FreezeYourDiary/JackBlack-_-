#include <iostream>
#include "Card.h"
#include "Header.h"
#include "Deck.h"
#include "Hand.h"





int main() {


	Deck deck;

	deck.FillDeck();
	// deck.PrintDeck();
	std::cout << "\n------------------------------\n";
	deck.ShuffleDeck();
	deck.PrintDeck();


	Hand myHand;
	Hand myHand2;
	std::cout << "\n------------------------------\n";
	myHand.DealHand(deck);
	myHand2.DealHand(deck);
	
	myHand.AddCard(deck);
	myHand.PrintHand();
	myHand2.AddCard(deck);
	myHand2.PrintHand();
}

