/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_game
*/

#include "game.h"

void init_structs(game_t *game, window_t *window) {
    game->buttons = init_buttons_game(window);
    game->waves = init_waves(game->waves);
    game->towers_buttons = init_towers_buttons();
    game->towers = init_towers_struct();
    game->elem = create_elem(GAME_BG, POS_BG, RECT_BG);
    game->health = init_health();
    game->money = init_money();
    game->select = create_elem(SELECT, POS_SELECT, RECT_SELECT);
    game->sound = init_sound();
}

game_t *init_game(window_t *window)
{
    game_t *game = malloc(sizeof(game_t));

    (void)window;
    if (game == NULL)
        return (NULL);
    init_structs(game, window);
    sfSprite_setScale(game->elem->sprite, SCALE_BG);
    sfSprite_setScale(game->select->sprite, SCALE_SELECT);
    game->tower_selected = -1;
    if (!game->buttons || !game->towers_buttons ||
    !game->towers || !game->elem)
        return (NULL);
    return (game);
}