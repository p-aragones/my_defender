/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** mouse_hover
*/

#include "tools.h"

int mouse_hover(sfRenderWindow *window, button_t *button)
{
    int mouse_x = get_x_mouse(window);
    int mouse_y = get_y_mouse(window);

    if (mouse_x >= button->elem->pos.x && mouse_x <=
    button->elem->pos.x + 49 && mouse_y >= button->elem->pos.y
    && mouse_y <= button->elem->pos.y + 20)
        return (1);
    return (0);
}