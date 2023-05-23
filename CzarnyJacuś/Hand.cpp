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
	
} //дійшов до висновку, що коли це було в одній петлі, карта з індексом 0 додавалась до масиву Hand і стриралась з масиву Deck, воно автоматом підсувало нову
// карту на індекс тої шо стерся. ?

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

//знаю що це поганий приклад програмування


// старе розв'язання, в ідеалі зробити його працюючим


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
