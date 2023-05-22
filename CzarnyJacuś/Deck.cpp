#include "Deck.h"

void Deck::FillDeck()
{
	for (int r = (int)Rank::ACE; r <= (int)Rank::KING; r++) {
		for (int s = (int)Suit::CLUBS; s <= (int)Suit::SPADES; s++) {
			Card card((Rank)r, (Suit)s);
			cards.push_back(card);
		}
	}
}

void Deck::ShuffleDeck()
{
	Deck shuffeled;

	while (!cards.empty()) {
		size_t index = rand() % cards.size();
		shuffeled.cards.push_back(cards[index]);
		cards.erase(cards.begin() + index);
	}
	cards = shuffeled.cards;

}

 void Deck::PrintDeck() const
 {
	 std::cout << "Current Deck situation: ";
 	for (Card c : cards) {
 		c.ShowCard();
 	}
 }

Card Deck::getCurrentCard(Deck& deck, int n)
{
	return cards[n];
}

void Deck::Erase()
{
	cards.erase(cards.begin());
}

int Deck::getSize()
{
	return cards.size();
}

Card Deck::getCard()
{
	return cards.front();
}






