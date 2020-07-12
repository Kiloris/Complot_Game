/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/


#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <iostream>

class Player {
    public:
        Player();
        ~Player();
        void set_name(std::string);
        std::string get_name();
    protected:
    private:
        std::string name;

};

#endif /* !PLAYER_HPP_ */
