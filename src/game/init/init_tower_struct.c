/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_tower_struct.c
*/

#include "game.h"
#include "list.h"

control_t *init_towers_struct(void)
{
    control_t *towers = malloc(sizeof(control_t));

    if (!towers)
        return (NULL);
    towers->size = 0;
    towers->first = NULL;
    towers->last = NULL;
    return (towers);
}