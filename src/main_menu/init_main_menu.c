/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_main_menu
*/

#include "main_menu.h"

menu_t *init_main_menu(menu_t *menu)
{
    menu->background_s = sfSprite_create();
    menu->background_t = sfTexture_createFromFile("../resources/sprites/\
    background/main_menu_background.png", NULL);
    return (menu);
}