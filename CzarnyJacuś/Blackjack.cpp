#include "BlackJack.h"

Game::Game() :game(false), chose(0), bet(50)
{

}

void Game::GameInit()
{
	deck.whatDeck();
	player.pickName();
	playerHand.ClearHand();
	dealerHand.ClearHand();
	deck.ShuffleDeck();
	game = true;
}


void Game::gameRunning()
{	
	while(game) {
	GameMenu();
	} 
}
void Game::GameMenu()
{
	if (player.getchips() < 0) {
		std::cout << "\n Not enough chips.";
		game = false;
	}
	system("CLS");
	std::cout << "=====================================================\nWELCOME TO THE BLACKJACK\n=====================================================\n";
	std::cout << "Hey, " << player.getName() << "\n Current balance is: " << player.getchips() << std::endl;
	std::cout << "\n 1: Start playing and deal hand. \n 2: Game Rules. \n 3: Change nickname, etc. \n 4: Reshuffle the deck. \n 5: Stats. \n 6: Buy more chips. \n \"q\" Quit the game. \n-Current bet it: " << getBet() << "\n You can change it by clicking \"c\" ";
	std::cin >> this->chose;
		switch (chose) {
		case '1':
			playerHand.ClearHand();
			dealerHand.ClearHand();
			this->playerHand.DealHand(deck);
			this->dealerHand.DealHand(deck);
			Round();
		
			break;
		case '2':
			system("CLS");
			std::cout << "Game Rules: \n";
			GameRules();
			backToMenu();
			
			break;
		case '3':
			system("CLS");
			player.clearName();
			player.pickName();
			std::cout << player.getName() << " is now your new nickname\n";
			backToMenu();
			
			break;
		case '4':
			system("CLS");
			deck.ShuffleDeck();
			std::cout << "Deck shuffeled.\n";
			backToMenu();
			break;
		case '5':
			system("CLS");
			std::cout << "Name is: "<<player.getName()<< std::endl;
			std::cout << "Balance is: " << player.getchips() << std::endl;
			backToMenu();
			break;
		case '6':
			system("CLS");
			std::cout << "Your balance is: " << player.getchips() << std::endl;
			unsigned int n;
			std::cin >> n;
			player.addChips(n);
			backToMenu();
			break;
		case 'q':
			system("CLS");
			std::cout << "You left the game! ";
			game = false;
			break;
		case 'c':
			system("CLS");
			setBet();
			backToMenu();
			break;
		default:
			system("CLS");
			std::cout << "Error. type an option between 1-6, \"c\" to change bet, \"q\" to leave the game.";
			backToMenu();
		}
}

void Game::backToMenu()
{
	std::cout << "\n\n\n\n";
	std::cout<< "\n Press any button to get back to main menu.";
	char iAmaBadProgrammer;
	std::cin >> iAmaBadProgrammer;
	switch (iAmaBadProgrammer) {
	default:
		GameMenu();
	}
}
void Game::GameRules()
{
	std::cout << "\nThe goal of blackjack is to have a hand total as close to 21 as possible without exceeding it.\n";
	std::cout << "Each player is dealt two cards initially.\n";
	std::cout << "Players can choose to \"hit\" (receive another card) or \"stand\" (not receive any more cards).\n";
	std::cout << "Numbered cards(2 - 10) are worth their face value.Face cards(King, Queen, Jack) are worth 10 points.\n";
	std::cout << "The Ace can be worth either 1 or 11 points, depending on which value benefits the player.\n";
	std::cout << "If the player's hand exceeds 21, they \"bust\" and lose the game.\n";
	std::cout << "After a player have made their decisions, the dealer reveals their facedown card.\n";
	std::cout << "The dealer hits until their hand value reaches 17 or more.\n";
	std::cout<< "If the dealer busts, all remaining players win.\n";
	std::cout << "If the dealer's hand is closer to 21 than a player's hand, the player loses.\n";
	std::cout << "If the player's hand is closer to 21 than the dealer's hand, the player wins.\n";
	std::cout << "If both the playerand the dealer have the same hand value, it's a \"push\", in our game player loses in this situation\n";
	backToMenu();
}
/*void Game::Round(Deck& deck, Hand& playerHand, Hand& dealerHand)
{
	
	bool inRound = true;
	while(inRound)
		if (playerHand.CountHand() < 22) {
			// !!!!!!!!!!!!!!!!!!!!!!!!!
			std::cout << "Your: ";
			playerHand.PrintHand(1);
			std::cout << "\n===========================\n";
			std::cout << "\n 1: Hold your cards and wait for dealer; \n 2: Hit Card; \n 3: Get value of your deck\n 4: Split\n";
			switch (getRch()) {
			case '1':
					if (dealerHand.CountHand() < 17) {
						dealerHand.AddCard(deck);
						std::cout << "Dealer added card to his hand\n";
					}
					else {
						std::cout << "Dealer stands on his hand.";
					}
				gameResult(playerHand, dealerHand);
				inRound = false;
				break;
			case '2':
				playerHand.AddCard(deck);
				Round(deck, playerHand, dealerHand);
				break;
				
			case '3':
				std::cout << "Your hand value is: " << playerHand.CountHand() << std::endl;
				Round(deck, playerHand, dealerHand);
				break;
			case '4':
				std::cout << "dk yet\n";
				break;
			default:
				std::cout << "Choose an option between 1-4: ";
				Round(deck, playerHand, dealerHand);
				break;
			}
		}
		else {
			std::cout << "Unfortunatelly, you lost. Your hand value was above 21." << playerHand.CountHand();
			Round(deck);
			//PlayAgain();
		}
	}
*/
void Game::Round()
{

	bool inRound = true;
	while (inRound) {
		if (playerHand.CountHand() < 22) {
			std::cout << "\n=================================\n";
			std::cout << "Your: ";
			playerHand.PrintHand(1);
			std::cout << "Dealer's: ";
			dealerHand.PrintHand(0);
			std::cout << "And one unknown card. \n";
			std::cout << "\n=================================\n";
			std::cout << "\n 1: Hit Card; 2: Stand on your hand and wait for dealer. \n 3: Get value of your deck\n 4: Split\n";
			switch (getRch()) {

			case '1':
				system("CLS");
				playerHand.AddCard(deck);
				Round();
				break;
			case '2':
				Dealer();
				inRound = false;
				break;
			case '3':
				system("CLS");
				std::cout << "Your hand value is: " << playerHand.CountHand() << std::endl;
				Round();
				break;
			case '4':
				system("CLS");
				std::cout << "you have decided to split cards" << std::endl;
			default:
				system("CLS");
				std::cout << "Choose an option between 1-4: ";
				Round();
				break;
			}
		}
		else {
			system("CLS");
			player.addChips(-bet);
			std::cout << "Unfortunatelly, you lost. Your hand value was above 21.\n" << playerHand.CountHand();
			playerHand.PrintHand(1);
			std::cout << "Your balance now is: " << player.getchips();
			backToMenu();
		}
	}
}
void Game::Dealer()
{
	system("CLS");
		if (dealerHand.CountHand() < 17) {
			dealerHand.AddCard(deck);
			std::cout << "Dealer added card to his hand\n";
			Dealer();
		}
		else {
			std::cout << "Dealer stands on his hand.";
			gameResult();
		}

}
//void Game::gameResult(Hand& playerHand, Hand& dealerHand)
//{
//	std::cout << "\n------------------------------------------------\n";
//	std::cout << "ALL HAVE BEEN DONE. THIS WAS OUR ROUND\n";
//
//	if (playerHand.CountHand() > dealerHand.CountHand() || dealerHand.CountHand() > 21) {
//		std::cout << "Your ";
//		playerHand.PrintHand(1);
//		std::cout << "\n Which is " << playerHand.CountHand() << " points...";
//		dealerHand.PrintHand(1);
//		std::cout << "\n Which is " << dealerHand.CountHand() << " points...\n============================";
//
//		player.setChips(bet);
//		std::cout << "Congrats on winning! " << bet << " added to your balance, now your balance is: " << player.getchips() << std::endl;
//		PlayAgain();
//	}
//	
//
//	else {
//		
//		std::cout << "Sorry, that you have lost, your hand ";
//		playerHand.PrintHand(1);
//		std::cout << "Dealers  ";
//		dealerHand.PrintHand(1);
//		std::cout << "Which is: " << dealerHand.CountHand() << " points of value\n Your balance is now: " << player.getchips() << std::endl;
//		PlayAgain();
//	}
//	
//}
void Game::gameResult()
{
	std::cout << "\n------------------------------------------------\n";
	if (playerHand.CountHand() > dealerHand.CountHand() || dealerHand.CountHand() > 21) {
			std::cout << "Your ";
			playerHand.PrintHand(1);
			std::cout << "\n Which is " << playerHand.CountHand() << " points...\n Dealer's hand is: ";
			dealerHand.PrintHand(1);
			std::cout << "\n Which is " << dealerHand.CountHand() << " points...\n============================\n";
	
			player.addChips(bet);
			std::cout << "Congrats on winning! " << bet << " added to your balance, now your balance is: " << player.getchips()  << std::endl;
			backToMenu();
	}
	else if (playerHand.CountHand() == dealerHand.CountHand()) {
		player.addChips(-bet);
		std::cout << "Your ";
		playerHand.PrintHand(1);
		std::cout << "\n Which is " << playerHand.CountHand() << " points...";
		dealerHand.PrintHand(1); 
		std::cout << "\n Which is " << dealerHand.CountHand() << " points...\n============================";

		std::cout << "It is a draw, your chips have been lost. Now your balance is:  \n" << player.getchips();
		backToMenu();
	}
	
	else {
		player.addChips(-bet);
		std::cout << "Sorry, that you have lost, your hand ";
		playerHand.PrintHand(1);
		std::cout << "Dealers  ";
		dealerHand.PrintHand(1);
		std::cout << "Which is: " << dealerHand.CountHand() << " points of value\n Your balance is now: " << player.getchips() << std::endl;
		backToMenu();
	}
}

int Game::getBet()
{
	return this->bet;
}
void Game::setBet()
{
	system("CLS");
	std::cout << "\n You can change your bet in a range 1-" << player.getchips()/4 << " (maximum bet is your chips/2)"<< std::endl;
	std::cin >> bet;
	if (bet > player.getchips()/4) {
		setBet();
	}
	else {
		backToMenu();
	}
}
//Hand Game::updateHand(Hand& hand, char c)
//{
//	switch (c) {
//	case 'C':
//		hand.CountHand();
//		return hand;
//	case 'P':
//		hand.PrintHand(1);
//		return hand;
//	case 'D':
//		hand.DealHand(deck);
//		return hand;
//	case 'A':
//		hand.AddCard(deck);
//		return hand;
//	} //ïîçîðíà øòóêà àëå öå ºäèíå øî ÿ ì³ã ïðèäóìàòè
//}
char Game::getRch()
{
	std::cin >> this->rch;
	return rch;
}
