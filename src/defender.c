/*
** EPITECH PROJECT, 2021
** defender
** File description:
** defender
*/

#include "defender.h"

int defender(void)
{
    window_t *window = init_window();

    if (!window)
        return (84);
    while (sfRenderWindow_isOpen(window->window)) {
        if (main_menu(window) == 1)
            return (0);
    }
    return (0);
}