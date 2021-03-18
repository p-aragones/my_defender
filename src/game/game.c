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
    clock_struct_t *clock_sprite = init_clock();
    clock_struct_t *clock_movement = init_clock();
    int wave = 0;
    int in_game = 0;

    if (!game || !clock_sprite)
        return (84);
    while (!in_game && sfRenderWindow_isOpen(window->window)) {
        in_game = analyse_event_game(window, event, game, wave);
        if (in_game != 0)
            return (in_game);
        clock_loop(clock_movement, game->waves[wave]);
        display_game(window, game, clock_sprite, wave);
        if (game->waves[wave]->enemies_left == 0)
            wave++;
    }
    return (1);
}