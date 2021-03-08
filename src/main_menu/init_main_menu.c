/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_main_menu
*/

#include "main_menu.h"

menu_t *init_main_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));

    if (menu == NULL)
        return (NULL);
    menu->buttons = init_buttons();
    menu->elem = create_elem(MENU_BACKGROUND, POS_BG, RECT_BG);
    sfSprite_setScale(menu->elem->sprite, SCALE_BG);
    menu->fps = 60;
    menu->music = sfMusic_createFromFile(MUSIC);
    sfMusic_play(menu->music);
    sfMusic_setLoop(menu->music, sfTrue);
    if (!menu->buttons || !menu->elem || !menu->music)
        return (NULL);
    return (menu);
}