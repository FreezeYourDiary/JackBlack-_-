#include "Player.h"

Player::Player()
{
}

std::string Player::pickName()
{
    std::cout << "Hey, Pick your name(just type it below -_0): ";
    std::cin >> this->name;
    return name;
}

std::string Player::getName()
{
    return name;
}

void Player::DealHandToPlayer(Deck& deck, Hand& hand)
{
    this->hand.DealHand(deck);
}

int Player::countValue()
{
    return 0;
}

void Player::hitCard()
{
}
