/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** free_game
*/

#include "game.h"

void free_health(health_t *health)
{
    sfFont_destroy(health->font);
    sfTexture_destroy(health->texture);
    sfSprite_destroy(health->sprite);
    sfText_destroy(health->text);
    free (health);
}

void free_money(money_t *money)
{
    sfFont_destroy(money->font);
    sfTexture_destroy(money->texture);
    sfSprite_destroy(money->sprite);
    sfText_destroy(money->text);
    free (money);
}

void free_sound(sound_t *sound)
{
    sfSound_destroy(sound->oof);
    sfSound_destroy(sound->place);
    free (sound);
}

void free_game(game_t *game)
{
    free_elem(game->elem);
    free_health(game->health);
    free_money(game->money);
    free_elem(game->select);
    free_sound(game->sound);
    free (game);
}