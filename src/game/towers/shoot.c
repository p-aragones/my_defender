/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** shoot
*/

#include "game.h"

int check_range(tower_t *tower, enemy_t *enemy)
{
    int x = tower->elem->pos.x - enemy->elem->pos.x;
    int y = tower->elem->pos.y - enemy->elem->pos.y;

    if (x < 0)
        x = x * -1;
    if (y < 0)
        y = y * -1;
    if (x <= tower->range && y <= tower->range)
        return (1);
    return (0);
}

void check_killed(game_t *game, int wave, int i)
{
    if (game->waves[wave]->enemies[i]->health <= 0) {
        game->waves[wave]->enemies[i]->elem->pos.x = -200;
        game->money->money += 1;
        if (game->money->money >= 100)
            game->money->money = 99;
        sfText_setString(game->money->text, my_its(game->money->money));
        game->waves[wave]->enemies_left -= 1;
    }
}

int shoot_enemy(game_t *game, tower_t *tower, int wave, int dmg)
{
    int i = 0;

    while (game->waves[wave]->enemies[i]) {
        if (game->waves[wave]->enemies[i]->health > 0 &&
        game->waves[wave]->enemies[i]->elem->pos.x > 0 &&
        game->waves[wave]->enemies[i]->elem->pos.x < 1850 &&
        check_range(tower, game->waves[wave]->enemies[i]) == 1) {
            game->waves[wave]->enemies[i]->health -= dmg;
            check_killed(game, wave, i);
            return (0);
        }
        i++;
    }
    return (0);
}

void shoot(game_t *game, int wave)
{
    list_t *temp = game->towers->first;

    while (temp) {
        temp->tower->clock->time = sfClock_getElapsedTime(
        temp->tower->clock->clock);
        temp->tower->clock->seconds = temp->tower->clock->time.microseconds
        / 1000000;
        if (temp->tower->clock->seconds >= temp->tower->speed) {
            shoot_enemy(game, temp->tower, wave, temp->tower->power);
            sfClock_restart(temp->tower->clock->clock);
        }
        temp = temp->next;
    }
}