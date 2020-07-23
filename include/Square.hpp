/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#ifndef SQUARE_HPP_
#define SQUARE_HPP_

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics/Font.hpp>

class Square {
    public:
        Square(sf::Vector2f, sf::RenderWindow *);
        ~Square();
        void draw();
        void change_to_white();
        void change_to_black();
        bool get_verif();
    protected:
    private:
        bool verif;
        sf::Texture texture;
        sf::Sprite sprite;
        sf::RenderWindow *app;
};

#endif /* !SQUARE_HPP_ */
