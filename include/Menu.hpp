/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#ifndef MENU_HPP_
#define MENU_HPP_

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics/Font.hpp>

class Menu {
    public:
        Menu(sf::RenderWindow *);
        ~Menu();
        void draw();
    protected:
    private:
        sf::RenderWindow *app;
        sf::Texture bg_texture;
        sf::Sprite bg_sprite;
};

#endif /* !MENU_HPP_ */
