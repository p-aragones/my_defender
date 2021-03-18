/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** display_pause.c
*/

#include "pause.h"

void display_pause(window_t *window, menu_t *menu)
{
    int x = 0;

    display(window->window, menu->elem);
    while (menu->buttons[x]) {
        display(window->window, menu->buttons[x]->elem);
        x++;
    }
    sfRenderWindow_drawText(window->window, window->fps->text, NULL);
}