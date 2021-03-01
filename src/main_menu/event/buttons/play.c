/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** play.c
*/

#include "main_menu.h"

int play_click(window_t *window, menu_t *menu, button_t *button)
{
    (void)window;
    (void)menu;
    sfSprite_setTexture(button->elem->sprite, button->click_texture, sfTrue);
    game(window);
    return (0);
}

int play_hover(button_t *button)
{
    sfSprite_setTexture(button->elem->sprite, button->hover_texture, sfTrue);
    return (0);
}