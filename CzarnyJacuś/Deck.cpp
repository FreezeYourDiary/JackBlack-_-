#include "Deck.h"


void Deck::FillDeck(int n)

{
	for (int i = n; i > 0; i--) {
		for (int r = (int)Rank::ACE; r <= (int)Rank::KING; r++) {
			for (int s = (int)Suit::CLUBS; s <= (int)Suit::SPADES; s++) {
				Card card((Rank)r, (Suit)s);
				cards.push_back(card);
			}
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

void Deck::whatDeck()

{
	std::cout << "On which deck you want to play,type 1 if you want standart deck with 52 Cards, 2 if doubled, 4 if you want to play with 208 card deck: ?\n";
	
	char n;
	std::cin >> n;
	switch (n) {
	case '1':
		FillDeck(1);
		break;
	case '2':
		FillDeck(2);
		break;
	case '4':
		FillDeck(4);
		break;
	default:
		std::cout << "Enter number from 1,2 or 4: ";
		whatDeck();
		break;
	}
}

Card Deck::getCard()
{
	return cards.front();
}







