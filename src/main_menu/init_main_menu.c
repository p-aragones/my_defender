/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_main_menu
*/

#include "main_menu.h"

button_t **init_buttons(button_t **buttons)
{
    buttons = malloc(sizeof(button_t *) * N_BUTTONS);

    buttons[0]->elem = create_elem(PLAY_BTN, POS_PLAY, RECT_PLAY);
    buttons[1] = NULL;
    return (buttons);
}

menu_t *init_main_menu(menu_t *menu)
{
    menu = malloc(sizeof(menu_t));

    if (menu == NULL)
        return (NULL);
    menu->elem = create_elem(MENU_BACKGROUND, POS_BG, RECT_BG);
    if (!menu->elem)
        return (NULL);
    menu->buttons = init_buttons(menu->buttons);
    if (!menu->buttons)
        return (NULL);
    return (menu);
}