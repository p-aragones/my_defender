/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** display_main_menu.c
*/

#include "game.h"

int display_game(window_t *window, game_t *game, clock_struct_t *clock)
{
    int x = 0;

    (void)clock;
    display(window->window, game->elem);
    while (game->buttons[x]) {
        display(window->window, game->buttons[x]->elem);
        x++;
    }
    x = 0;
    while (game->towers[x]) {
        display(window->window, game->towers[x]->elem);
        x++;
    }
    sfRenderWindow_drawText(window->window, game->health->text, NULL);
    draw_enemies(game->waves[0], window->window, clock);
    return (0);
}