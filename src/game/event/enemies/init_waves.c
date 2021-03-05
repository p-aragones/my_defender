/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_waves
*/

#include "game.h"

wave_t **init_waves(wave_t **waves)
{
    int wave = 1;

    waves = malloc(sizeof(wave_t) * (N_WAVES + 1));

    if (!waves)
        return (NULL);
    while (wave <= N_WAVES) {
        waves[wave - 1]->wave = wave;
        waves[wave - 1]->n_enemies = wave * 2;
        waves[wave - 1]->enemies = init_enemies(waves[wave - 1]);
        wave++;
    }
    waves[wave - 1] = NULL;
}