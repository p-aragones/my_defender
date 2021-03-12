/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_enemies
*/

#include "game.h"

wave_t *init_enemies(wave_t *waves)
{
    int enemy = 0;
    waves->enemies = malloc(sizeof(enemy_t *) * (waves->n_enemies + 1));

    if (!waves->enemies)
        return (NULL);
    while (enemy < waves->n_enemies) {
        waves->enemies[enemy] = malloc(sizeof(enemy_t));
        if (waves->enemies[enemy] == NULL)
            return (NULL);
        waves->enemies[enemy]->elem = create_elem(SNAKE,
        SNAKE_POS, SNAKE_RECT);
        waves->enemies[enemy]->damage = 2;
        waves->enemies[enemy]->health = 10;
        waves->enemies[enemy]->speed = 4;
        waves->enemies[enemy]->pos = SNAKE_POS;
        enemy++;
    }
    waves->enemies[enemy] = NULL;
    return (waves);
}