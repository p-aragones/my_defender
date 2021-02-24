/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** play.c
*/

#include "main_menu.h"

int play_click(window_t *window, button_t *button)
{
    (void)window;
    (void)button;
    return (0);
}

int play_hover(window_t *window, button_t *button)
{
    (void)window;
    sfSprite_setTexture(button->elem->sprite, button->hover_texture, sfTrue);
    return (0);
}