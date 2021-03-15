/*
** EPITECH PROJECT, 2020
** move_rect
** File description:
** move rect to only display one sprite
*/

#include "game.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value) {
        rect->left = 0;
    }
}
