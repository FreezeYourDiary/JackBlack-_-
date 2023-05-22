#include "Game.h"

Game::Game() :game(true), chose(0)
{

}

void Game::gameRunning()
{
	std::cout << "==============================================\n" << "Some BlackJack here, please, pick your name below, just type it)";
	
	std::cout << "Hey, " << "\n\t Here is your options: \n1: Get your Hand: \n2: Hit card: \n3:Quit game: ";

	
	Deck deck;
	deck.FillDeck(2);
	deck.ShuffleDeck();
	Hand hand;
	while (game) {
		std::cin >> this->chose;
		switch (chose) {
		case '1':
			
			//потім дописати reset гри і шоб не можна було роздати руку поки в грі
			hand.DealHand(deck);
			hand.PrintHand();
			break;
		case '2':
			std::cout << "in progress";
			break;
		case '3':
			game = false;
		default:
			std::cout << "some error: ";
			game = false;
		}
		
	}
}