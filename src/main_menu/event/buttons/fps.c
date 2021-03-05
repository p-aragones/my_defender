/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** fps.c
*/

#include "main_menu.h"

int fps_click(window_t *window, menu_t *menu, struct button_s *button)
{
    if (click(window, menu, button) == 84)
        return (84);
    if (menu->fps == 30) {
        menu->fps = 60;
        sfRenderWindow_setFramerateLimit(window->window, 60);
    } else if (menu->fps == 60) {
        menu->fps = 90;
        sfRenderWindow_setFramerateLimit(window->window, 90);
    } else {
        menu->fps = 30;
        sfRenderWindow_setFramerateLimit(window->window, 30);
    }
    return (0);
}