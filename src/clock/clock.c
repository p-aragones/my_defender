/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** clock.c
*/

#include "defender.h"

clock_struct_t *init_clock(void)
{
    clock_struct_t *clock = malloc(sizeof(clock_struct_t));

    if (clock == NULL)
        return (NULL);
    clock->clock = sfClock_create();
    return (clock);
}

clock_struct_t *refresh_clock(clock_struct_t *clock)
{
    clock->time = sfClock_getElapsedTime(clock->clock);
    clock->seconds = clock->time.microseconds / 5000;
    return (clock);
}

void clock_loop(clock_struct_t *clock)
{
    clock = refresh_clock(clock);
    if (clock->seconds > 0.10)
        sfClock_restart(clock->clock);
}