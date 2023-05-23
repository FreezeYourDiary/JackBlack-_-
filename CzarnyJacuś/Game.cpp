#include "Game.h"

Game::Game() :game(true), chose(0)
{

}

void Game::gameRunning()
{	
	Deck deck;
	deck.whatDeck();
	Player player;
	player.pickName();
	Hand hand;
	while (game) {
		
		std::cout <<"HEY, " << player.getName() << "\n1: start playing and deal hand\n 2:idk:\n 3:quit \n";
		std::cin >> this->chose;
		switch (chose) {
		case '1':
			deck.ShuffleDeck();
			hand.DealHand(deck);
			hand.AddCard(deck);
			hand.PrintHand();
			std::cout<<hand.CountHand();
			break;
		case '2':
			std::cout << "in progress";
			break;
		case '3':
			std::cout << "You left the game ";
			game = false;
			break;
		default:
			std::cout << "some error";
			game = false;
		}
		
	}
}