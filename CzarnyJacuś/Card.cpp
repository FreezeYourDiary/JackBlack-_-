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

const char* Card::CardRank() const
{
	return Ranked(rank);
}

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

Rank Card::getRank() const
{
	return this->rank;
}

Suit Card::getSuit() const
{
	return this->suit;
}
