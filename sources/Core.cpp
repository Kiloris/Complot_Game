/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Core.hpp"

Core::Core()
{
    this->app = new sf::RenderWindow(sf::VideoMode(1920, 1080, 32), "Complot Game");
    this->menu = new Menu(this->app);
}

Core::~Core()
{
    this->app->clear();
    this->app->display();
}

int Core::loop()
{
    while (this->app->isOpen()) {
        sf::Event event;
        while (this->app->pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                this->app->close();
        }
        this->menu->draw();
        this->app->display();
    }
    return (0);
}