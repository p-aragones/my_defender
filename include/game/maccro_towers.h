/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** maccro_towers.h
*/

#ifndef MACCRO_TOWERS_H
#define MACCRO_TOWERS_H

#define NUM_TOWERS 5

#define SCALE_TOWER (sfVector2f){2.2, 2.2}

#define PATH_TOWER_ONE "resources/sprites/twrs/1.png"
#define PATH_TOWER_TWO "resources/sprites/twrs/2.png"
#define PATH_TOWER_THREE "resources/sprites/twrs/3.png"
#define PATH_TOWER_FOUR "resources/sprites/twrs/4.png"

#define POS_TOWER_1 (sfVector2f){1500, 1080 - (43 * 2.2) - 55}
#define POS_TOWER_2 (sfVector2f){1600, 1080 - (46 * 2.2) - 55}
#define POS_TOWER_3 (sfVector2f){1700, 1080 - (46 * 2.2) - 55}
#define POS_TOWER_4 (sfVector2f){1800, 1080 - (48 * 2.2) - 55}

#define RECT_TOWER_1 (sfIntRect){0, 0, 23, 43}
#define RECT_TOWER_2 (sfIntRect){0, 0, 24, 46}
#define RECT_TOWER_3 (sfIntRect){0, 0, 22, 46}
#define RECT_TOWER_4 (sfIntRect){0, 0, 33, 48}

#endif