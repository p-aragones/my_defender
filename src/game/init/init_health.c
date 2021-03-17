/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_health
*/

#include "game.h"

health_t *init_health(void)
{
    health_t *health = malloc(sizeof(health_t));

    if (!health)
        return (NULL);
    health->font = sfFont_createFromFile(FONT);
    health->text = sfText_create();
    health->sprite = sfSprite_create();
    health->texture = sfTexture_createFromFile(HEART, NULL);
    sfSprite_setTexture(health->sprite, health->texture, sfFalse);
    sfSprite_setScale(health->sprite, SCALE_HEART);
    sfSprite_setPosition(health->sprite, HEART_POS);
    health->health = 100;
    if (!health->font || !health->text)
        return (NULL);
    sfText_setString(health->text, "100");
    sfText_setFont(health->text, health->font);
    sfText_setCharacterSize(health->text, FONT_SIZE_HEALTH);
    sfText_setPosition(health->text, POS_HEALTH_TEXT);
    return (health);
}