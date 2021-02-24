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
    int x = 0;

    if (!menu)
        return (84);
    analyse_event(window, event, menu->buttons);
    display(window->window, menu->elem);
    while (menu->buttons[x]) {
        display(window->window, menu->buttons[x]->elem);
        x++;
    }
    return (0);
}