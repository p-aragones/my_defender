/*
** EPITECH PROJECT, 2021
** defender
** File description:
** defender
*/

#include "defender.h"

int defender(void)
{
    window_t *window = init_window(window);

    if (window == NULL)
        return (84);
    while (sfRenderWindow_isOpen(window->window)) {
        main_menu(window);
    }
    return (0);
}