/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** create_elem
*/

#include "defender.h"

elem_t *create_elem(char *path, sfVector2f pos, sfIntRect rect)
{
    elem_t *elem = malloc(sizeof(elem_t));

    if (elem == NULL)
        return (NULL);
    elem->sprite = sfSprite_create();
    elem->texture = sfTexture_createFromFile(path, NULL);
    elem->pos = pos;
    elem->rect = rect;
    if (!elem->texture || !elem->sprite)
        return (NULL);
    sfSprite_setTexture(elem->sprite, elem->texture, sfTrue);
    return (elem);
}