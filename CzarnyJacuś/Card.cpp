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
	// ����������� ������� ����� (���� ��� � enum Rank � Suit), JACK, QUEEN, KING ��������� ������� 10 �� � ���������, ���� ������ �� int ��������� � 1 �� 10
	

}

void Card::ShowCard() const
{
	std::cout << this->rank << " of " << this->suit << std::endl;
}
//������� ��� ������ �� ��������� ������ ���� ���� �������� ����� � ����


int Card::getValue() const
{
	return this->value;
}

void Card::CardinText()
{
	switch (rank) {
	case ACE:
		this->cardNameR = "ACE";
		break;
	case TWO:
		this->cardNameR = "TWO";
		break;
	case THREE:
		this->cardNameR = "THREE";
		break;
	case FOUR:
		this->cardNameR = "FOUR";
		break;
	case FIVE:
		this->cardNameR = "FIVE";
		break;
	case SIX:
		this->cardNameR = "SIX";
		break;
	case SEVEN:
		this->cardNameR = "SEVEN";
		break;
	case EIGHT:
		this->cardNameR = "EIGHT";
		break;
	case NINE:
		this->cardNameR = "NINE";
		break;
	case TEN:
		this->cardNameR = "TEN";
		break;
	case JACK:
		this->cardNameR = "JACK";
		break;
	case QUEEN:
		this->cardNameR = "QUEEN";
		break;
	case KING:
		this->cardNameR = "KING";
		break;
	default:
		std::cout << "\n How you got this error?";
	}
	switch (suit) {
	case CLUBS:
		this->cardNameS = "CLUBS";
	case HEARTS:
		this->cardNameS = "HEARTS";
	case DIAMONDS:
		this->cardNameS = "DIAMONDS";
	case SPADES:
		this->cardNameS = "SPADES";
	}

	std::cout<<cardNameR <<"
}



// ������ ��� �����

Rank Card::getRank() const
{
	return this->rank;
}

Suit Card::getSuit() const
{
	return this->suit;
}
