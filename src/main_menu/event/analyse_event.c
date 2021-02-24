/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** analyse_event.c
*/

#include "main_menu.h"
#include "tools.h"
#include <stdbool.h>

int analyse_event(window_t *window, sfEvent event,
button_t **buttons, menu_t *menu)
{
    int x = 0;

    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
            sfRenderWindow_close(window->window);
        while (buttons[x]) {
            if (mouse_hover(window->window, buttons[x]) == 1 &&
            event.type == sfEvtMouseButtonPressed)
                return (buttons[x]->click_fonc(window, menu, buttons[x]));
            x++;
        }
    }
    x = 0;
    while (buttons[x]) {
        if (mouse_hover(window->window, buttons[x]) == 1)
            buttons[x]->hover_fonc(buttons[x]);
        x++;
    }
    return (0);
}