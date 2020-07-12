/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Core.hpp"

Core::Core()
{
    app = new sf::RenderWindow(sf::VideoMode(800, 600, 32), "Complot Game");
}

Core::~Core()
{
    app->clear();
    app->display();
}

int Core::loop()
{
    while (app->isOpen()) {
        sf::Event event;
        while (app->pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                app->close();
        }
    }
    return (0);
}