/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_window
*/

#include "defender.h"

window_t *init_window(void)
{
    window_t *window = malloc(sizeof(window_t));

    if (window == NULL)
        return (NULL);
    window->videoMode.bitsPerPixel = 32;
    window->videoMode.height = Y_WINDOW;
    window->videoMode.width = X_WINDOW;
    window->window = sfRenderWindow_create(window->videoMode,
    "my_defender", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window->window, 60);
    return (window);
}
