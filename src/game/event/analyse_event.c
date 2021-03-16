/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** analyse_event.c
*/

#include "game.h"

int launch_action(window_t *window, sfEvent event, game_t *game)
{
    int x = 0;

    while (game->buttons[x]) {
        if (event.type == sfEvtMouseButtonPressed &&
        mouse_hover(window->window, game->buttons[x]->elem->pos) == 1)
            return (game->buttons[x]->click_fonc_g(window,
            game, NULL));
        x++;
    }
    return (-1);
}

void check_enemies_pos(game_t *game, int wave)
{
    int i = 0;

    while (i < game->waves[wave]->n_enemies) {
        if (game->waves[wave]->enemies[i]->elem->pos.x <= 400 &&
        game->waves[wave]->enemies[i]->elem->pos.x > 0) {
            game->waves[wave]->enemies[i]->elem->pos.x = -200;
            game->health->health -= game->waves[wave]->enemies[i]->damage;
            sfText_setString(game->health->text, my_its(game->health->health));
            game->money->money += 1;
            game->waves[wave]->enemies_left -= 1;
            sfText_setString(game->money->text, my_its(game->money->money));
        }
        i++;
    }
}

int analyse_event_game(window_t *window, sfEvent event, game_t *game, int wave)
{
    check_enemies_pos(game, wave);
    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
        if (launch_action(window, event, game) == 84)
            return (84);
    }
    return (0);
}