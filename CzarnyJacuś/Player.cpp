#include "Player.h"

void Player::pickName(const char* Name)
{

    this->playerName = Name;
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
