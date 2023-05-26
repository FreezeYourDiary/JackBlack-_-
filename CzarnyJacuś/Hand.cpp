#include "Hand.h"

Hand::Hand():maxSize(2), AceCount(0)
{
}

bool Hand::DealHand(Deck& deck) /*,std::vector<Card>& hand*/

{	
	
	if (deck.getSize() < 2 * maxSize) {
		return false;
		}
	for (int c = 0; c < maxSize; c++) {
		hand.push_back(deck.getCurrentCard(deck,c));
		/*hand.push_back(deck.getCard());*/
	}
	for (int c = 0; c < maxSize; c++) {
		deck.Erase();
	}
	
	return true;
	
} //дійшов до висновку, що коли це було в одній петлі, карта з індексом 0 додавалась до масиву Hand і стриралась з масиву Deck, воно автоматом підсувало нову
// карту на індекс тої шо стерся. ?

void Hand::PrintHand(bool visible) 
{
	std::cout << " hand is: ";
	if (visible) {
		for (int i = 0; i < maxSize ; i++) {
			this->hand[i].ShowCard();
		}
	}
	else {
		this->hand[0].ShowCard();
	}
}

int Hand::CountHand()

{
	valueOfHand = 0;
	AceCount = 0;
	for (int i = 0; i < maxSize; i++) {
		if (hand[i].getValue() == 1) {
			valueOfHand += hand[i].getValue() + 10;
			AceCount++;
		}
		else {
			valueOfHand += hand[i].getValue();
		}
		
	}
	while (valueOfHand > 21 && AceCount > 0) {
		valueOfHand -= 10;
		AceCount--;
	}
	return valueOfHand;
	
}

Card Hand::AddCard(Deck& deck)
{	
	hand.push_back(deck.getCard());
	deck.Erase();
	maxSize++;
	
	return hand.back();
}

int Hand::setSize(int maxSize)
{
	this->maxSize = maxSize;
	return maxSize;
}

void Hand::ClearHand()
{
	hand.clear();
	setSize(2);
}




