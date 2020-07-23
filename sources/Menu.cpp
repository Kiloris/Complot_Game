/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Menu.hpp"

Menu::Menu(sf::RenderWindow *app)
{
    this->app = app;
    this->settings = false;
    if (!this->bg_texture.loadFromFile("resources/img/background/menu.jpg"))
        exit(84);
    this->bg_sprite.setTexture(this->bg_texture);
    this->play_button = new Button("play.png", sf::Vector2f(this->app->getSize().x / 2, 350), this->app);
    this->settings_button = new Button("settings.png", sf::Vector2f(this->app->getSize().x / 2, 550), this->app);
    this->exit_button = new Button("exit.png", sf::Vector2f(this->app->getSize().x / 2, 750), this->app);
    this->low_sound_button = new Button("arrows_left.png", sf::Vector2f(this->app->getSize().x / 3, 200), this->app);
    this->high_sound_button = new Button("arrows_right.png", sf::Vector2f(this->app->getSize().x /1.5, 200), this->app);
    this->menu_button = new Button("menu.png", sf::Vector2f(this->app->getSize().x / 2, 750), this->app);
    for (int i = 0; i != 5; i++) {
        this->list_square.push_back(new Square(sf::Vector2f(600 + (i + 2) * 80, 200), this->app));
        if (i < 3)
            this->list_square.back()->change_to_white();
        else
            this->list_square.back()->change_to_black();
    }
}

Menu::~Menu()
{

}

void Menu::draw()
{
    this->app->draw(this->bg_sprite);
    if (this->settings == false) {
        this->play_button->draw();
        this->settings_button->draw();
        this->exit_button->draw();
    }
    else {
        this->high_sound_button->draw();
        this->low_sound_button->draw();
        this->menu_button->draw();
        for (int i = 0; i != 5; i++)
            this->list_square[i]->draw();
    }
}

void Menu::event_clicked()
{
    if (this->settings == false)
        this->clicked_menu();
    else
        this->clicked_settings();
}

void Menu::event_pressed()
{
    if (this->settings == false)
        this->pressed_menu();
    else
        this->pressed_settings();
}

void Menu::pressed_menu()
{
    if (this->play_button->is_clicked() == true)
        this->play_button->pressed();
    else
        this->play_button->original();
    if (this->settings_button->is_clicked() == true)
        this->settings_button->pressed();
    else
        this->settings_button->original();
    if (this->exit_button->is_clicked() == true)
        this->exit_button->pressed();
    else
        this->exit_button->original();
}

void Menu::pressed_settings()
{
    if (this->menu_button->is_clicked() == true)
        this->menu_button->pressed();
    else
        this->menu_button->original();
    if (this->low_sound_button->is_clicked() == true)
        this->low_sound_button->pressed();
    else
        this->low_sound_button->original();
    if (this->high_sound_button->is_clicked() == true) 
        this->high_sound_button->pressed();
    else
        this->high_sound_button->original();
}

void Menu::clicked_menu()
{
    if (this->play_button->is_clicked() == true)
        return;
    if (this->settings_button->is_clicked() == true)
        this->settings = true;
    if (this->exit_button->is_clicked() == true)
        exit(84);
}

void Menu::clicked_settings()
{
    if (this->menu_button->is_clicked() == true)
        this->settings = false;
    if (this->low_sound_button->is_clicked() == true) {
        for (int i = 0; i != 5; i++) {
            if (this->list_square[i]->get_verif() == true && i+1 != 5) {
                if (this->list_square[i + 1]->get_verif() != true) {
                    this->list_square[i]->change_to_black();
                    break;
                }
            }
            else if (this->list_square[i]->get_verif() == true && i+1 == 5) {
                this->list_square[i]->change_to_black();
                break;
            }
        }
    }
    if (this->high_sound_button->is_clicked() == true) {
        for (int i = 0; i != 5; i++) {
            if (this->list_square[i]->get_verif() == false) {
                this->list_square[i]->change_to_white();
                break;
            }
        }
    }
}
