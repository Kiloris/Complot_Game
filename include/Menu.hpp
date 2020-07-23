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
#include "Square.hpp"
#include <iostream>
#include <cstdlib>

class Menu {
    public:
        Menu(sf::RenderWindow *);
        ~Menu();
        void draw();
        void event_clicked();
        void event_pressed();
        void clicked_settings();
        void clicked_menu();
        void pressed_settings();
        void pressed_menu();
        bool get_verif();
        void set_verif(bool);
    protected:
    private:
        sf::RenderWindow *app;
        sf::Texture bg_texture;
        sf::Sprite bg_sprite;
        Button *play_button;
        Button *settings_button;
        Button *exit_button;
        Button *low_sound_button;
        Button *high_sound_button;
        Button *menu_button;
        std::vector<Square *> list_square;
        bool settings;
        bool verif;
};

#endif /* !MENU_HPP_ */
