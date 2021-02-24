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
    menu_t *menu = init_main_menu(window);
    clock_struct_t *clock = init_clock();

    if (!menu || !clock)
        return (84);
    while (1) {
        sfRenderWindow_clear(window->window, sfBlack);
        if (analyse_event(window, event, menu->buttons, menu) == 0) {
            display_main_menu(window, menu);
            clock_loop(clock);
            sfRenderWindow_display(window->window);
        }
        else
            return (1);
    }
    return (0);
}