#include <iostream>
#include "Card.h"
#include "Header.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"

int main() {


	Deck deck;

	deck.FillDeck();
	// deck.PrintDeck();
	std::cout << "\n------------------------------\n";
	deck.ShuffleDeck();
	deck.PrintDeck();
	

	
}

