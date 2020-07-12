/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#ifndef CORE_HPP_
#define CORE_HPP_

#include <iostream>
#include <cstdlib>
#include "Thread.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics/Font.hpp>

class Core {
    public:
        Core();
        ~Core();
        int loop();
    protected:
    private:
        sf::RenderWindow *app;
};

#endif /* !CORE_HPP_ */
