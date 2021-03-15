/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_game
*/

#include "game.h"

game_t *init_game(window_t *window)
{
    game_t *game = malloc(sizeof(game_t));

    if (game == NULL)
        return (NULL);
    game->buttons = init_buttons_game(window);
    game->elem = create_elem(GAME_BG, POS_BG, RECT_BG);
    game->waves = init_waves(game->waves);
    sfSprite_setScale(game->elem->sprite, SCALE_BG);
    if (!game->buttons || !game->elem || !game->waves)
        return (NULL);
    return (game);
}