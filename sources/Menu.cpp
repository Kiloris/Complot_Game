/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Menu.hpp"

Menu::Menu(sf::RenderWindow *app)
{
    this->app = app;
    if (!this->bg_texture.loadFromFile("resources/img/background/menu.jpg"))
        exit(84);
    this->bg_sprite.setTexture(this->bg_texture);
}

Menu::~Menu()
{

}

void Menu::draw()
{
    app->draw(this->bg_sprite);
}
