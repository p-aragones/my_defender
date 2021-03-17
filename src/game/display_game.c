/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** display_main_menu.c
*/

#include "game.h"

int display_game(window_t *window, game_t *game, clock_struct_t *clock,
int wave)
{
    int x = 0;

    (void)clock;
    display(window->window, game->elem);
    while (game->towers_buttons[x]) {
        display(window->window, game->towers_buttons[x]->elem);
        sfRenderWindow_drawText(window->window,
        game->towers_buttons[x]->money, NULL);
        x++;
    }
    sfRenderWindow_drawText(window->window, game->health->text, NULL);
    sfRenderWindow_drawText(window->window, game->money->text, NULL);
    sfRenderWindow_drawSprite(window->window, game->health->sprite, NULL);
    sfRenderWindow_drawSprite(window->window, game->money->sprite, NULL);
    display(window->window, game->select);
    draw_enemies(game->waves[wave], window->window, clock);
    return (0);
}