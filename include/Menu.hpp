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
#include "Button.hpp"

class Menu {
    public:
        Menu(sf::RenderWindow *);
        ~Menu();
        void draw();
        void event();
    protected:
    private:
        sf::RenderWindow *app;
        sf::Texture bg_texture;
        sf::Sprite bg_sprite;
        Button *play_button;
        Button *settings_button;
        Button *exit_button;
};

#endif /* !MENU_HPP_ */
