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

int analyse_event_game(window_t *window, sfEvent event, game_t *game)
{
    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
        if (launch_action(window, event, game) == 84)
            return (84);
    }
    return (0);
}