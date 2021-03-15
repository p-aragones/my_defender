/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_towers.c
*/

#include "game.h"

int check_towers(tower_t **towers)
{
    int x = 0;

    while (x != 4) {
        if (!towers[x])
            return (0);
        x++;
    }
    return (1);
}

tower_t *init_tower_elem(char *path, sfVector2f pos, sfIntRect rect)
{
    tower_t *tower = malloc(sizeof(tower_t));

    if (!tower)
        return (NULL);
    tower->elem = create_elem(path, pos, rect);
    sfSprite_setScale(tower->elem->sprite, SCALE_TOWER);
    return (tower);
}

void init_tower_info(tower_t *tower, int power, int speed, int price)
{
    tower->power = power;
    tower->speed = speed;
    tower->price = price;
}

tower_t **init_towers(void)
{
    tower_t **towers = malloc(sizeof(tower_t *) * NUM_TOWERS);

    if (!towers)
        return (NULL);
    towers[0] = init_tower_elem(TOWER_1_ELEM);
    init_tower_info(towers[0], TOWER_1_INFO);
    towers[1] = init_tower_elem(TOWER_2_ELEM);
    init_tower_info(towers[1], TOWER_2_INFO);
    towers[2] = init_tower_elem(TOWER_3_ELEM);
    init_tower_info(towers[2], TOWER_3_INFO);
    towers[3] = init_tower_elem(TOWER_4_ELEM);
    init_tower_info(towers[3], TOWER_4_INFO);
    towers[4] = NULL;
    if (!check_towers(towers))
        return (NULL);
    return (towers);
}