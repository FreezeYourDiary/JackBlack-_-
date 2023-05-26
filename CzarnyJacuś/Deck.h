#pragma once
#include "Card.h"
#include "Header.h"
#include <vector>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
class Deck
{
	std::vector<Card> cards;
	

public:
	

	void FillDeck(int n);
	void ShuffleDeck();
	void PrintDeck()const;
// ��� ��� � ���������� ��� Hand.cpp, �� ��� ������ std::vector<Card> cards � private: � �� ��� �� �� ������� � ����� �������
	Card getCurrentCard(Deck& deck, int n);
	void Erase();
	int getSize();

	void whatDeck();

	Card getCard();

	//void PrintDeckInWords(Rank& r, Suit& s);
};


