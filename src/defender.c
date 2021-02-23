/*
** EPITECH PROJECT, 2021
** defender
** File description:
** defender
*/

#include "defender.h"

window_t *init_window(window_t *window)
{
    window = malloc(sizeof(window_t));

    if (window == NULL)
        return (NULL);
    window->videoMode.bitsPerPixel = 32;
    window->videoMode.height = 1080;
    window->videoMode.width = 1920;
    window->window = sfRenderWindow_create(window->videoMode,
    "my_defender", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(window->window, 60);
}

int defender(void)
{
    window_t *window = init_window(window);

    if (window == NULL)
        return (84);
    while (sfRenderWindow_isOpen(window->window)) {
        main_menu(window);
    }
}