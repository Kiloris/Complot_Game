/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Square.hpp"

Square::Square(sf::Vector2f pos, sf::RenderWindow *app)
{
    this->app = app;
    this->sprite.setPosition(pos);
}

Square::~Square()
{

}

bool Square::get_verif()
{
    return this->verif;
}

void Square::draw()
{
    this->app->draw(this->sprite);
}

void Square::change_to_black()
{
    this->verif = false;
    if (!this->texture.loadFromFile("resources/img/button/pressed/square.png"))
        exit(84);
    this->sprite.setTexture(this->texture);
}

void Square::change_to_white()
{
    this->verif = true;
    if (!this->texture.loadFromFile("resources/img/button/original/square.png"))
        exit(84);
    this->sprite.setTexture(this->texture);
}