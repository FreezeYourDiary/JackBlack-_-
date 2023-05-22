#include <iostream>
#include "Card.h"
#include "Header.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"

int main() {


	Deck deck;

	deck.FillDeck(4);
	std::cout << "\n------------------------------\n";
	deck.ShuffleDeck();
	std::cout << deck.getSize();



	/*Hand myHand;
	Hand myHand2;
	myHand.DealHand(deck);
	myHand2.DealHand(deck);*/
	

}

