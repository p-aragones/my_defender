/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** game
*/

#include "game.h"

int game(window_t *window)
{
    sfEvent event;
    game_t *game = init_game(window);
    clock_struct_t *clock = init_clock();
    int wave = 0;

    if (!game || !clock)
        return (84);
    while (sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        if (analyse_event_game(window, event, game, wave) == 0) {
            display_game(window, game, clock, wave);
            sfRenderWindow_display(window->window);
            if (game->waves[wave]->enemies_left == 0)
                wave++;
        }
        else
            return (1);
    }
    return (0);
}