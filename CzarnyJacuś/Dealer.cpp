#include "Dealer.h"
//#include "Dealer.h"
//
void Dealer::Logic(Deck& deck, Hand& hand)
{
	while (hand.CountHand() < 22) {

	if (hand.CountHand() <= 16) {
		hand.AddCard(deck);
		std::cout << "Dealer decides to hit.\n";
	}
	else {
		std::cout << "Dealer decides to hold";
	}

	}
}

void Dealer::ShowDealersHand(Hand& hand)
{
	std::cout << "\n Dealers hand is: ";
	hand.PrintHand(0);
	
}

