/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** exit.c
*/

#include "main_menu.h"

int exit_click(window_t *window, button_t *button)
{
    (void)window;
    sfSprite_setTexture(button->elem->sprite, button->click_texture, sfTrue);
    return (0);
}

int exit_hover(window_t *window, button_t *button)
{
    (void)window;
    sfSprite_setTexture(button->elem->sprite, button->hover_texture, sfTrue);
    return (0);
}