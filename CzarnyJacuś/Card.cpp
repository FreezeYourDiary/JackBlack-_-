#include "Card.h"



Card::Card()
{
}

Card::~Card()
{
	
}

Card::Card(Rank rank, Suit suit) :rank(rank), suit(suit), value(0), visibility(1)
{
	if (rank > 10) {
		this->value = 10;
	}
	else
	{
		this->value = rank;
	}
	// ����������� ������� ����� (���� ��� � enum Rank � Suit), JACK, QUEEN, KING ��������� ������� 10 �� � ���������, ���� ������ �� int ��������� � 1 �� 10
	
	/*switch (rank) {
		case ACE:
			this->name = "ACE";
		case TWO:
			this->name = "TWO";
		case THREE:
			this->name = "THREE";
		case FOUR:
			this->name = "FOUR";
		case FIVE:
			this->name = "FIVE";
		case SIX:
			this->name = "SIX";
		case SEVEN:
			this->name = "SEVEN";
		case EIGHT:
			this->name = "EIGHT";
		case NINE:
			this->name = "NINE";
		case TEN:
			this->name = "TEN";
		case JACK:
			this->name = "JACK";
		case QUEEN:
			this->name = "QUEEN";
		case KING:
			this->name = "KING";

		default:
			this->name = nullptr;
			
		}
	
	switch (suit) {
		case CLUBS:
			this->color = "CLUBS";
		case HEARTS:
			this->color = "HEARTS";
		case DIAMONDS:
			this->color = "DIAMONDS";
		case SPADES:
			this->color = "SPADES";
		default:
			
			this->color = nullptr;
		}*/

}

void Card::ShowCard() const
{
	if(visibility)
	std::cout << this->rank << " of " << this->suit << std::endl;
}
//������� ��� ������ �� ��������� ������ ���� ���� �������� ����� � ����


int Card::getValue() const
{
	if (visibility)
	return this->value;
}

void Card::setVisibility(bool vis)
{
	this->visibility = vis;
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

// ������ ��� �����

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
