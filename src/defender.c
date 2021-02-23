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
    sfEvent event;

    if (window == NULL)
        return (84);
    while (sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        main_menu(window);
        sfRenderWindow_display(window->window);
    }
    return (0);
}