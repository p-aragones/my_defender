/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_main_menu
*/

#include "main_menu.h"

menu_t *init_main_menu(window_t *window)
{
    menu_t *menu = malloc(sizeof(menu_t));

    if (menu == NULL)
        return (NULL);
    menu->buttons = init_buttons(window);
    menu->background = create_elem(MENU_BACKGROUND, POS_BG, RECT_BG);
    sfSprite_setScale(menu->background->sprite, SCALE_BG);
    if (!menu->buttons || !menu->background)
        return (NULL);
    return (menu);
}