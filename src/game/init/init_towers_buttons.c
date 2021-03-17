/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_towers_buttons.c
*/

#include "game.h"

int check_towers_buttons(tower_t **towers_buttons)
{
    int x = 0;

    while (x != 4) {
        if (!towers_buttons[x])
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
    sfVector2f pos = tower->elem->pos;

    pos.y -= 50;
    pos.x -= 50;
    tower->power = power;
    tower->speed = speed;
    tower->price = price;
    tower->money = sfText_create();
    sfText_setString(tower->money, my_its(price));
    sfText_setFont(tower->money, sfFont_createFromFile(FONT));
    sfText_setCharacterSize(tower->money, SIZE_PRICE);
    sfText_setPosition(tower->money, pos);
}

tower_t **init_towers_buttons(void)
{
    tower_t **towers_buttons = malloc(sizeof(tower_t *) * NUM_TOWERS);

    if (!towers_buttons)
        return (NULL);
    towers_buttons[0] = init_tower_elem(TOWER_1_ELEM);
    init_tower_info(towers_buttons[0], TOWER_1_INFO);
    towers_buttons[1] = init_tower_elem(TOWER_2_ELEM);
    init_tower_info(towers_buttons[1], TOWER_2_INFO);
    towers_buttons[2] = init_tower_elem(TOWER_3_ELEM);
    init_tower_info(towers_buttons[2], TOWER_3_INFO);
    towers_buttons[3] = init_tower_elem(TOWER_4_ELEM);
    init_tower_info(towers_buttons[3], TOWER_4_INFO);
    towers_buttons[4] = NULL;
    if (!check_towers_buttons(towers_buttons))
        return (NULL);
    return (towers_buttons);
}