/*
** EPITECH PROJECT, 2021
** main_menu
** File description:
** main_menu
*/

#include "main_menu.h"

int main_menu(window_t *window)
{
    sfEvent event;
    menu_t *menu = init_main_menu();
    clock_struct_t *clock = init_clock();
    int in_menu = 0;

    if (!menu || !clock)
        return (84);
    while (!in_menu && sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        in_menu = analyse_event(window, event, menu->buttons, menu);
        if (in_menu)
            return (in_menu);
        display_main_menu(window, menu);
        clock_loop(clock);
        sfRenderWindow_display(window->window);
    }
    return (0);
}