/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_enemies
*/

#include "game.h"
#include "lib.h"

wave_t *init_enemy_snake(wave_t *waves)
{
    int enemy = 0;

    while (enemy < waves->n_enemies) {
        waves->enemies[enemy] = malloc(sizeof(enemy_t));
        if (waves->enemies[enemy] == NULL)
            return (NULL);
        waves->enemies[enemy]->damage = 2;
        waves->enemies[enemy]->health = 7;
        waves->enemies[enemy]->speed = 2;
        waves->enemies[enemy]->pos = SNAKE_POS;
        waves->enemies[enemy]->pos.x += 100 * enemy;
        waves->enemies[enemy]->elem = create_elem(SNAKE,
        waves->enemies[enemy]->pos, SNAKE_RECT);
        enemy++;
    }
    waves->enemies[enemy] = NULL;
    return (waves);
}

wave_t *init_enemy_hyena(wave_t *waves)
{
    int enemy = 0;

    while (enemy < waves->n_enemies) {
        waves->enemies[enemy] = malloc(sizeof(enemy_t));
        if (waves->enemies[enemy] == NULL)
            return (NULL);
        waves->enemies[enemy]->damage = 1;
        waves->enemies[enemy]->health = 15;
        waves->enemies[enemy]->speed = 4;
        waves->enemies[enemy]->pos = HYENA_POS;
        waves->enemies[enemy]->pos.x += 100 * enemy;
        waves->enemies[enemy]->elem = create_elem(HYENA,
        waves->enemies[enemy]->pos, HYENA_RECT);
        enemy++;
    }
    waves->enemies[enemy] = NULL;
    return (waves);
}

wave_t *init_enemy_vulture(wave_t *waves)
{
    int enemy = 0;

    while (enemy < waves->n_enemies) {
        waves->enemies[enemy] = malloc(sizeof(enemy_t));
        if (waves->enemies[enemy] == NULL)
            return (NULL);
        waves->enemies[enemy]->damage = 1;
        waves->enemies[enemy]->health = 1;
        waves->enemies[enemy]->speed = 10;
        waves->enemies[enemy]->pos = VULTURE_POS;
        waves->enemies[enemy]->pos.x += 100 * enemy;
        waves->enemies[enemy]->elem = create_elem(VULTURE,
        waves->enemies[enemy]->pos, VULTURE_RECT);
        enemy++;
    }
    waves->enemies[enemy] = NULL;
    return (waves);
}

wave_t *init_enemies(wave_t *waves)
{
    waves->enemies = malloc(sizeof(enemy_t *) * (waves->n_enemies + 1));

    if (!waves->enemies)
        return (NULL);
    if (waves->wave == 5 || waves->wave == N_WAVES - 1)
        init_enemy_vulture(waves);
    else if (waves->wave % 2 != 0)
        init_enemy_snake(waves);
    else
        init_enemy_hyena(waves);
    return (waves);
}