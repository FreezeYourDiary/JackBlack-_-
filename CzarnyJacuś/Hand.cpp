#include "Hand.h"

bool Hand::DealHand(Deck& deck) /*,std::vector<Card>& hand*/
{
	if (deck.getSize() < 2 * maxSize) {
		return false;
		}
	for (int c = 0; c < maxSize; c++) {
		hand.push_back(deck.getCurrentCard(deck, c));
		deck.Erase();
	}return true;
	
}

void Hand::PrintHand() const
{
	std::cout << "\n Your hand is: ";
	for (int i = 0; i < maxSize; i++) {
	this->hand[i].ShowCard();
	}
}

int Hand::CountHand()
{
	for (int i = 0; i < maxSize; i++) {
		this->valueOfHand += hand[i].getValue();
	}
	return valueOfHand;
}

//знаю що це поганий приклад програмування


// старе розв'язання, в ідеалі зробити його працюючим

//bool Hand::DealHand(Deck& deck, std::vector<Card> hand)
//{
//	if (deck.getSize() < 2 * maxSize) {
//		return false;
//	}
//	for (int c = 0; c < maxSize; c++) {
//		hand.push_back(deck.getCurrentCard(deck, c));
//		deck.Erase();
//	}return true;
//
//}
//
////void Hand::PrintHand(const std::vector<Card> hand)
////{
////	std::cout << "\n Your hand is: ";
////	for (int i = 0; i < maxSize; i++) {
////		
////	}
////}
//
//int Hand::CountHand(const std::vector<Card> hand)
//{
//	for (int i = 0; i < maxSize; i++) {
//		this->valueOfHand += hand[i].getValue();
//	}
//	return valueOfHand;
//}


bool Hand::AddCard(Deck& deck, char yorn)
{	
	int c = 2;
	switch (yorn) {
	case 'y':
	hand.push_back(deck.getCurrentCard(deck, c));
	deck.Erase();
	std::cout << "\t Card added!\n";

	return true;
	break;

	default:
	std::cout << "\t Card not added!\n";
	break;
	return false;
	}
	
	
}