/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include <SFML/Graphics.hpp>

class Button {
    public:
        Button(char *, sf::Vector2f, sf::RenderWindow *);
        ~Button();
        void draw();
        bool is_clicked();
    protected:
    private:
        sf::RenderWindow *app;
        sf::Texture texture;
        sf::Sprite sprite;
};

#endif /* !BUTTON_HPP_ */
