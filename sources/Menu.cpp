/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Menu.hpp"

Menu::Menu(sf::RenderWindow *app)
{
    this->app = app;
    if (!this->bg_texture.loadFromFile("resources/img/background/menu.jpg"))
        exit(84);
    this->bg_sprite.setTexture(this->bg_texture);
    this->play_button = new Button("resources/img/button/play.png", sf::Vector2f(950, 350), this->app);
    this->settings_button = new Button("resources/img/button/exemple_button.png", sf::Vector2f(950, 650), this->app);
    this->exit_button = new Button("resources/img/button/exit.png", sf::Vector2f(950, 850), this->app);
}

Menu::~Menu()
{

}

void Menu::draw()
{
    this->app->draw(this->bg_sprite);
    this->play_button->draw();
    this->settings_button->draw();
    this->exit_button->draw();
}

void Menu::event()
{
    if (this->play_button->is_clicked() == true) {
        
    }
    if (this->settings_button->is_clicked() == true) {
        
    }
    if (this->exit_button->is_clicked() == true) {
        exit(84);
    }
}
