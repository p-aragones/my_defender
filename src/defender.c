/*
** EPITECH PROJECT, 2021
** defender
** File description:
** defender
*/

#include "defender.h"
#include "pause.h"

int defender(void)
{
    window_t *window = init_window();

    if (!window)
        return (84);
    return (main_menu(window));
}