/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** draw_enemies
*/

#include "game.h"

void draw_enemies(wave_t *wave, sfRenderWindow *window)
{
    int i = 0;

    while (wave->enemies[i]) {
        sfSprite_setTextureRect(wave->enemies[i]->elem->sprite, SNAKE_RECT);
        sfRenderWindow_drawSprite(window, wave->enemies[i]->elem->sprite,
        sfFalse);
        i++;
    }

}