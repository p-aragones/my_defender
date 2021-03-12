/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** display_main_menu.c
*/

#include "game.h"

int display_game(window_t *window, game_t *game)
{
    int x = 0;

    display(window->window, game->elem);
    while (game->buttons[x]) {
        display(window->window, game->buttons[x]->elem);
        x++;
    }
    draw_enemies(game->waves[0], window->window);
    return (0);
}