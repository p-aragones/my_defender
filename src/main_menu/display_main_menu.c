/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** display_main_menu.c
*/

#include "main_menu.h"

int display_main_menu(window_t *window, menu_t *menu)
{
    int x = 0;

    display(window->window, menu->elem);
    while (menu->buttons[x]) {
        display(window->window, menu->buttons[x]->elem);
        x++;
    }
    return (0);
}