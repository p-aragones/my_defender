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

tower_t *init_tower(char *path, sfVector2f pos, sfIntRect rect)
{
    tower_t *tower = malloc(sizeof(tower_t));

    if (!tower)
        return (NULL);
    tower->elem = create_elem(path, pos, rect);
    tower->power = 10;
    tower->speed = 10;
    sfSprite_setScale(tower->elem->sprite, SCALE_TOWER);
    return (tower);
}

tower_t **init_towers(void)
{
    tower_t **towers = malloc(sizeof(tower_t *) * NUM_TOWERS);

    if (!towers)
        return (NULL);
    towers[0] = init_tower(PATH_TOWER_ONE, POS_TOWER_1, RECT_TOWER_1);
    towers[1] = init_tower(PATH_TOWER_TWO, POS_TOWER_2, RECT_TOWER_2);
    towers[2] = init_tower(PATH_TOWER_THREE, POS_TOWER_3, RECT_TOWER_3);
    towers[3] = init_tower(PATH_TOWER_FOUR, POS_TOWER_4, RECT_TOWER_4);
    towers[4] = NULL;
    if (!check_towers(towers))
        return (NULL);
    return (towers);
}