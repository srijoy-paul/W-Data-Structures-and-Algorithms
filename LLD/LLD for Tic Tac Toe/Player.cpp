#include "Player.hpp"

Player::Player(std::string name, char playerSymbol)
{
    this->name = name;
    this->symbol = playerSymbol;
}
std::string Player::getName()
{
    return this->name;
}
char Player::getSymbol()
{
    return this->symbol;
}