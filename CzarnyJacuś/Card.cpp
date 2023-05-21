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

// ������ ��� �����

Rank Card::ShowRank() const
{
	return this->rank;
}

Suit Card::ShowSuit() const
{
	return this->suit;
}
