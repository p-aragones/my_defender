/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** analyse_event.c
*/

#include "game.h"

void place_tower(game_t *game, window_t *window)
{
    int x = game->tower_selected;

    (void)window;
    if (x >= 0 && game->money->money >= game->towers_buttons[x]->price) {
        game->money->money -= game->towers_buttons[x]->price;
        sfText_setString(game->money->text, my_its(game->money->money));
    }
}

int launch_action(window_t *window, sfEvent event, game_t *game)
{
    int x = 0;
    int pos = get_y_mouse(window->window);

    while (game->towers_buttons[x]) {
        if (event.type == sfEvtMouseButtonPressed &&
        mouse_hover(window->window, game->towers_buttons[x]->elem->pos) == 1) {
            game->select->pos = game->towers_buttons[x]->elem->pos;
            game->select->pos.x -= 10;
            game->select->pos.y -= 10;
            game->tower_selected = x;
            return (0);
        }
        x++;
    }
    if (event.type == sfEvtMouseButtonPressed && (pos < 650 || pos > 800)) {
        place_tower(game, window);
        return (0);
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
            sfSound_play(game->sound->oof);
        }
        i++;
    }
    if (game->money->money >= 100)
        game->money->money = 99;
}

int analyse_event_game(window_t *window, sfEvent event, game_t *game, int wave)
{
    check_enemies_pos(game, wave);
    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
        if (event.key.code == sfKeyEscape)
            pause_menu(window);
        if (launch_action(window, event, game) == 84)
            return (84);
    }
    if (wave == N_WAVES || game->health->health <= 0)
        return (1);
    return (0);
}