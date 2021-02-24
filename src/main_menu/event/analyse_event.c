/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** analyse_event.c
*/

#include "main_menu.h"
#include "tools.h"
#include <stdbool.h>

int analyse_event(window_t *window, sfEvent event, button_t **buttons)
{
    int x = 0;

    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
        while (buttons[x]) {
            if (sfIntRect_contains(&buttons[x]->elem->rect,
            get_x_mouse(window->window), get_y_mouse(window->window)) == sfTrue)
                return (lunch_button(window, buttons[x], event));
            else if (sfSprite_getTexture(buttons[x]->elem->sprite)
            == buttons[x]->hover_texture)
                sfSprite_setTexture(buttons[x]->elem->sprite,
                buttons[x]->elem->texture, sfFalse);
            x++;
        }
    }
    return (0);
}