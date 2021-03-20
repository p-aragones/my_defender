/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** display_main_menu.c
*/

#include "game.h"

void display_towers(game_t *game, window_t *window)
{
    list_t *temp = game->towers->first;

    while (temp) {
        display(window->window, temp->tower->elem);
        temp = temp->next;
    }
}

int display_game(window_t *window, game_t *game, clock_struct_t *clock,
int wave)
{
    int x = 0;

    sfRenderWindow_clear(window->window, sfBlack);
    display(window->window, game->elem);
    while (game->towers_buttons[x]) {
        display(window->window, game->towers_buttons[x]->elem);
        sfRenderWindow_drawText(window->window,
        game->towers_buttons[x]->money, NULL);
        x++;
    }
    draw_enemies(game->waves[wave], window->window, clock);
    display_towers(game, window);
    display(window->window, game->select);
    sfRenderWindow_drawText(window->window, game->health->text, NULL);
    sfRenderWindow_drawText(window->window, game->money->text, NULL);
    sfRenderWindow_drawSprite(window->window, game->health->sprite, NULL);
    sfRenderWindow_drawSprite(window->window, game->money->sprite, NULL);
    sfRenderWindow_display(window->window);
    return (0);
}