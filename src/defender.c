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
    clock_struct_t *clock = init_clock();

    if (!window || !clock)
        return (84);
    while (sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        main_menu(window);
        clock_loop(clock);
        sfRenderWindow_display(window->window);
    }
    return (0);
}