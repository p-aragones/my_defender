/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_waves
*/

#include "game.h"

wave_t **init_waves(wave_t **waves)
{
    int wave = 0;

    waves = malloc(sizeof(wave_t) * (N_WAVES + 1));

    if (!waves)
        return (NULL);
    while (wave < N_WAVES) {
        waves[wave] = malloc(sizeof(wave_t));
        if (waves[wave] == NULL)
            return (NULL);
        waves[wave]->wave = wave + 1;
        waves[wave]->n_enemies = wave * 2 + 1;
        waves[wave] = init_enemies(waves[wave]);
        wave++;
    }
    waves[wave - 1] = NULL;
    return (waves);
}