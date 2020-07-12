/*
** COMPLOT PROJECT
** AUTHOR:
** Zacharie ABIDAT
*/

#include "../include/Core.hpp"

int main(int ac, char **av)
{
    Core core;
    core.loop();
    core.~Core();
    return (0);
}