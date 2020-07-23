/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Button.hpp"

Button::Button(const char *path, sf::Vector2f pos, sf::RenderWindow *app)
{
    this->app = app;
    if (!this->texture.loadFromFile(path))
        exit(84);
    this->sprite.setTexture(this->texture);
    pos.x = pos.x - this->sprite.getGlobalBounds().width / 2;
    this->sprite.setPosition(pos);
}

Button::~Button()
{

}

void Button::draw()
{
    this->app->draw(this->sprite);
}

bool Button::is_clicked()
{
    float mouseX = sf::Mouse::getPosition(*this->app).x;
    float mouseY = sf::Mouse::getPosition(*this->app).y;

    float btnPosX = this->sprite.getPosition().x;
    float btnPosY = this->sprite.getPosition().y;

    float btnPosWidth = btnPosX + this->sprite.getLocalBounds().width;
    float btnPosHeight = btnPosY + this->sprite.getLocalBounds().height;

    if (mouseX < btnPosWidth && mouseX > btnPosX && mouseY < btnPosHeight && mouseY > btnPosY)
        return true;
    return false;
}
