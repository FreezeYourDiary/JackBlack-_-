#include "Hand.h"

Hand::Hand():maxSize(2),valueOfHand(0),temptest(0),hand(NULL)
{
}

bool Hand::DealHand(Deck& deck) /*,std::vector<Card>& hand*/

{	
	
	if (deck.getSize() < 2 * maxSize) {
		return false;
		}
	for (int c = 0; c < maxSize; c++) {
		hand.push_back(deck.getCurrentCard(deck, c));
		/*hand.push_back(deck.getCard());*/
	}
	for (int c = 0; c < maxSize; c++) {
		deck.Erase();
	}
	
	return true;
	
} //����� �� ��������, �� ���� �� ���� � ���� ����, ����� � �������� 0 ���������� �� ������ Hand � ���������� � ������ Deck, ���� ��������� �������� ����
// ����� �� ������ �� �� ������. ?

void Hand::PrintHand() const
{
	std::cout << "\n Your hand is: ";
	
	for (int i = 0; i < maxSize+temptest; i++) {
		this->hand[i].ShowCard();
	}
}

int Hand::CountHand()
{
	for (int i = 0; i < maxSize; i++) {
		this->valueOfHand += hand[i].getValue();
	}
	return valueOfHand;
}

//���� �� �� ������� ������� �������������


// ����� ����'������, � ����� ������� ���� ���������


bool Hand::AddCard(Deck& deck)
{	
	hand.push_back(deck.getCard());
	deck.Erase();
	temptest++;
	return true;
}

void Hand::ClearHand()
{
	hand.clear();
}
