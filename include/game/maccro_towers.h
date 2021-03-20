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

#define POS_TOWER_1 (sfVector2f){650, 1080 - (43 * 2.2) - 90}
#define POS_TOWER_2 (sfVector2f){850, 1080 - (46 * 2.2) - 90}
#define POS_TOWER_3 (sfVector2f){1050, 1080 - (46 * 2.2) - 90}
#define POS_TOWER_4 (sfVector2f){1250, 1080 - (48 * 2.2) - 90}

#define RECT_TOWER_1 (sfIntRect){0, 0, 23, 43}
#define RECT_TOWER_2 (sfIntRect){0, 0, 24, 46}
#define RECT_TOWER_3 (sfIntRect){0, 0, 22, 46}
#define RECT_TOWER_4 (sfIntRect){0, 0, 33, 48}

#define TOWER_1_ELEM PATH_TOWER_ONE, POS_TOWER_1, RECT_TOWER_1
#define TOWER_2_ELEM PATH_TOWER_TWO, POS_TOWER_2, RECT_TOWER_2
#define TOWER_3_ELEM PATH_TOWER_THREE, POS_TOWER_3, RECT_TOWER_3
#define TOWER_4_ELEM PATH_TOWER_FOUR, POS_TOWER_4, RECT_TOWER_4

#define SIZE_PRICE 100

// [power, speed, price]

#define TOWER_1_INFO 5, 1, 1
#define TOWER_2_INFO 10, 2, 5
#define TOWER_3_INFO 30, 3, 10
#define TOWER_4_INFO 40, 4, 20
#endif