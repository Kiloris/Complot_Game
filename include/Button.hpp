/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Button {
    public:
        Button(std::string, sf::Vector2f, sf::RenderWindow *);
        ~Button();
        void draw();
        bool is_clicked();
        void pressed();
        void original();
    protected:
    private:
        std::string name;
        sf::RenderWindow *app;
        sf::Texture texture;
        sf::Sprite sprite;
};

#endif /* !BUTTON_HPP_ */
