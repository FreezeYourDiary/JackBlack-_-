#pragma once
#include "Card.h"
#include "Header.h"
#include <vector>
#include <cstdlib>

class Deck
{
	std::vector<Card> cards;
	std::string card_name;
	int maxDeckSize = 52;

public:
	

	void FillDeck();

	void ShuffleDeck();

	void PrintDeck()const;
// ��� ��� � ���������� ��� Hand.cpp, �� ��� ������ std::vector<Card> cards � private: � �� ��� �� �� ������� � ����� �������
	Card getCurrentCard(Deck& deck, int n);
	
	void Erase();

	int getSize();

	Card getCard();

	//void PrintDeckInWords(Rank& r, Suit& s);
};


