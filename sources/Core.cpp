/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Core.hpp"

Core::Core()
{
    // std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();
    // this->app = new sf::RenderWindow(modes[0], "Complot Game", sf::Style::Fullscreen);
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
    sf::Event event;

    while (this->app->isOpen()) {
        while (this->app->pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                this->app->close();
            if (event.type == sf::Event::MouseButtonPressed)
                this->menu->event();
        }
        this->menu->draw();
        this->app->display();
    }
    return (0);
}