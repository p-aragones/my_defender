/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** draw_enemies
*/

#include "game.h"
#include "lib.h"

void draw_enemies(wave_t *wave, sfRenderWindow *window, clock_struct_t *clock)
{
    int i = 0;

    clock->time = sfClock_getElapsedTime(clock->clock);
    clock->seconds = clock->time.microseconds / 1000000.0;
    if (clock->seconds >= 0.1) {
        move_rect(&wave->enemies[0]->elem->rect, 48, 192);
        sfClock_restart(clock->clock);
    }
    while (i < wave->n_enemies) {
        sfSprite_setTextureRect(wave->enemies[i]->elem->sprite,
        wave->enemies[0]->elem->rect);
        sfRenderWindow_drawSprite(window, wave->enemies[i]->elem->sprite,
        sfFalse);
        wave->enemies[i]->elem->pos.x -= wave->enemies[i]->speed;
        sfSprite_setPosition(wave->enemies[i]->elem->sprite,
        wave->enemies[i]->elem->pos);
        i++;
    }
}