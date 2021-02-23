/*
** EPITECH PROJECT, 2021
** main_menu
** File description:
** main_menu
*/

#include "defender.h"

int main_menu(window_t *window)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed ||
        window->event.key.code == sfKeyEscape)
            sfRenderWindow_close(window->window);
    }
    return (0);
}