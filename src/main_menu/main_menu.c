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

    if (!menu)
        return (84);
    display(window->window, menu->elem);
    analyse_event(window, event, menu->buttons);
    return (0);
}