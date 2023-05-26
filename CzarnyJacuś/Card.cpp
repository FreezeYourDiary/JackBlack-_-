#include "Card.h"



Card::Card()
{
}

Card::~Card()
{
	
}

Card::Card(Rank rank, Suit suit) :rank(rank), suit(suit), value(0)
{
	if (rank > 10) {
		this->value = 10;
	}
	else
	{
		this->value = rank;
	}
	// конструктор створює карту (бере дані з enum Rank і Suit), JACK, QUEEN, KING отримують вартості 10 як в блекджеку, інші просто як int починаючи з 1 до 10
	
	switch (rank) {
		case ACE:
			this->name = "ACE";
			break;
		case TWO:
			this->name = "TWO";
			break;
		case THREE:
			this->name = "THREE";
			break;
		case FOUR:
			this->name = "FOUR";
			break;
		case FIVE:
			this->name = "FIVE";
			break;
		case SIX:
			this->name = "SIX";
			break;
		case SEVEN:
			this->name = "SEVEN";
			break;
		case EIGHT:
			this->name = "EIGHT";
			break;
		case NINE:
			this->name = "NINE";
			break;
		case TEN:
			this->name = "TEN";
			break;
		case JACK:
			this->name = "JACK";
			break;
		case QUEEN:
			this->name = "QUEEN";
			break;
		case KING:
			this->name = "KING";
			break;
		default:
			this->name = nullptr;
			break;
		}
	
	switch (suit) {
		case CLUBS:
			this->name.append(" of CLUBS");
			break;
		case HEARTS:
			this->name.append(" of HEARTS");
			break;
		case DIAMONDS:
			this->name.append(" of DIAMONDS");
			break;
		case SPADES:
			this->name.append(" of SPADES");
			break;
		default:
			this->name = nullptr;
			break;
		}

}

void Card::ShowCard() const
{
	
		std::cout << this->name << "\n";
}



int Card::getValue() const
{
	
	return this->value;
}

Rank Card::getRank() const
{
	return rank;
}




//const char* Card::CardRank() const
//{
//	return Ranked(rank);
//}
//
//const char* Card::CardSuit() const
//{
//	return Suited(suit);
//}
//void Card::ShowCardInText()
//{
//	std::cout << this->cardNameR << " of " << this->cardNameS << std::endl;
//}
//const char* Card::cardFaceS()
//{
//	cardFace[0] = cardNameR;
//	cardFace[1] = cardNameS;
//	for (int i =0;i<2;i++){
//		return cardFace[i];
//	}
//}

// зробив для теста

//void Card::PrintCard() const
//{
//	std::cout << this->name << " of " << this->color;
//}
//
//Rank Card::getRank() const
//{
//	return this->rank;
//}
//
//Suit Card::getSuit() const
//{
//	return this->suit;
//}
