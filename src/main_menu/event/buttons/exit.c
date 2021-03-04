/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** exit.c
*/

#include "main_menu.h"

int exit_click(window_t *window, menu_t *menu, button_t *button)
{
    sfSprite_setTexture(button->elem->sprite, button->click_texture, sfTrue);
    display_main_menu(window, menu);
    sfRenderWindow_display(window->window);
    if (waiting_button() == 84)
        return (84);
    free_main_menu(menu);
    sfRenderWindow_close(window->window);
    free(window);
    return (1);
}