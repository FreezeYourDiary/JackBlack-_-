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
	myHand.PrintHand();
	char wybor;
	std::cin >> wybor;
	myHand.AddCard(deck, wybor);
	myHand.PrintHand();
	///*myHand.AddCard(deck,2);
	//std::cout<<myHand.CountHand();
	//myHand.PrintHand();*/
	//char wybor;
	//std::cin >> wybor;
	//myHand.AddCard(deck,wybor);
	//myHand.PrintHand();
	//std::cout << "====================";
	//deck.PrintDeck();

	//

}

