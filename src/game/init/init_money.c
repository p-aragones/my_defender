/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_money
*/

#include "game.h"

money_t *init_money(void)
{
    money_t *money = malloc(sizeof(money_t));

    if (!money)
        return (NULL);
    money->font = sfFont_createFromFile(FONT);
    money->text = sfText_create();
    money->sprite = sfSprite_create();
    money->texture = sfTexture_createFromFile(COIN, NULL);
    sfSprite_setTexture(money->sprite, money->texture, sfFalse);
    sfSprite_setScale(money->sprite, SCALE_COIN);
    sfSprite_setPosition(money->sprite, COIN_POS);
    money->money = 1;
    if (!money->font || !money->text)
        return (NULL);
    sfText_setString(money->text, my_its(money->money));
    sfText_setFont(money->text, money->font);
    sfText_setCharacterSize(money->text, FONT_SIZE_MONEY);
    sfText_setPosition(money->text, POS_MONEY_TEXT);
    return (money);
}