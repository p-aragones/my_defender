/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** lunch_button.c
*/

#include "main_menu.h"

int lunch_button(window_t *window, button_t *button, sfEvent *event)
{
    if (sfSprite_getTexture(button->elem->sprite) != button->hover_sprite)
        sfSprite_setTexture(button->elem->sprite,
        button->hover_sprite, sfFalse);
    return (0);
}