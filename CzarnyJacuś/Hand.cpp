#include "Hand.h"
//bool Deal(Deck& deck, std::vector<Card> hand1, std::vector<Card> hand2, int n)
//{
//	if (deck.cards.size() < 2 * n) {
//		return false;
//	}
//
//	for (int c = 0; c < n; c++) {
//		hand1.push_back(deck.cards[c]);
//		deck.cards.erase(deck.cards.begin());
//		hand2.push_back(deck.cards[c]);
//		deck.cards.erase(deck.cards.begin());
//	}
//	return true;
//}
//
//void PrintHand(const std::vector<Card> hand) {
//	for (Card c : hand) {
//		c.ShowCard();
//	}
//}


bool Hand::DealHand(Deck& deck, std::vector<Card> hand)
{
	if (deck.getSize() < 2 * maxSize) {
		return false;
		}
	for (int c = 0; c < maxSize; c++) {
		hand.push_back(deck.getCurrentCard(deck, c));
		deck.Erase();
	}return true;
	
}

//void Hand::PrintHand(const std::vector<Card> hand)
//{
//	std::cout << "\n Your hand is: ";
//	for (int i = 0; i < maxSize; i++) {
//		
//	}
//}

int Hand::CountHand(const std::vector<Card> hand)
{
	for (int i = 0; i < maxSize; i++) {
		this->valueOfHand += hand[i].getValue();
	}
	return valueOfHand;
}
