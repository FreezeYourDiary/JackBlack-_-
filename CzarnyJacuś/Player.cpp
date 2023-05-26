#include "Player.h"




Player::Player(): chips(1000), ch(0), name(" ")
{
}

std::string Player::pickName()
{
    std::cout << "Hey, Pick your name(just type it below ): ";
    std::cin >> this->name;
    return name;
}

std::string Player::getName()
{
    return name;
}

void Player::clearName()
{
    name.clear();
}

int Player::getchips()
{
    return chips;
}


int Player::addChips(int n) {
    chips += n;
    return chips;
}
