/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/


#include "../include/Player.hpp"

Player::Player()
{

}

Player::~Player()
{

}

std::string Player::get_name()
{
    return this->name;
}

void Player::set_name(std::string name)
{
    this->name = name;
}