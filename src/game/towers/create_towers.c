/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** create_towers
*/

#include "game.h"

void create_tower_one(game_t *game, sfVector2i pos)
{
    tower_t *new_tower = malloc(sizeof(tower_t));

    new_tower = init_tower_elem(TOWER_1_ELEM);
    init_tower_info(new_tower, TOWER_1_INFO);
    new_tower->elem->pos.x = pos.x - 12;
    new_tower->elem->pos.y = pos.y - 80;
    game->towers = add_start(game->towers, new_tower);
}

void create_tower_two(game_t *game, sfVector2i pos)
{
    tower_t *new_tower = malloc(sizeof(tower_t));

    new_tower = init_tower_elem(TOWER_2_ELEM);
    init_tower_info(new_tower, TOWER_2_INFO);
    new_tower->elem->pos.x = pos.x - 12;
    new_tower->elem->pos.y = pos.y - 80;
    game->towers = add_start(game->towers, new_tower);
}

void create_tower_three(game_t *game, sfVector2i pos)
{
    tower_t *new_tower = malloc(sizeof(tower_t));

    new_tower = init_tower_elem(TOWER_3_ELEM);
    init_tower_info(new_tower, TOWER_3_INFO);
    new_tower->elem->pos.x = pos.x - 12;
    new_tower->elem->pos.y = pos.y - 80;
    game->towers = add_start(game->towers, new_tower);
}

void create_tower_four(game_t *game, sfVector2i pos)
{
    tower_t *new_tower = malloc(sizeof(tower_t));

    new_tower = init_tower_elem(TOWER_4_ELEM);
    init_tower_info(new_tower, TOWER_4_INFO);
    new_tower->elem->pos.x = pos.x - 12;
    new_tower->elem->pos.y = pos.y - 80;
    game->towers = add_start(game->towers, new_tower);
}

void create_tower(int x, game_t *game, sfVector2i pos)
{
    if (x == 0)
        create_tower_one(game, pos);
    if (x == 1)
        create_tower_two(game, pos);
    if (x == 2)
        create_tower_three(game, pos);
    if (x == 3)
        create_tower_four(game, pos);
}