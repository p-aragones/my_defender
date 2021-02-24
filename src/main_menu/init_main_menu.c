/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_main_menu
*/

#include "main_menu.h"

button_t *init_button(char *path, sfVector2f pos, sfIntRect rect, char *hover)
{
    button_t *button = malloc(sizeof(button_t));

    if (!button)
        return (NULL);
    button->elem = create_elem(path, pos, rect);
    button->hover_sprite = sfTexture_createFromFile(hover, NULL);
    if (!button->elem || !button->hover_sprite)
        return (NULL);
    return (button);
}

button_t **init_buttons(void)
{
    button_t **buttons = malloc(sizeof(button_t *) * N_BUTTONS);

    if (!buttons)
        return (NULL);
    buttons[0] = init_button(PLAY_INFO, PLAY_HOVER);
    buttons[1] = init_button(EXIT_INFO, EXIT_HOVER);
    buttons[2] = NULL;
    return (buttons);
}

menu_t *init_main_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));

    if (menu == NULL)
        return (NULL);
    menu->buttons = init_buttons();
    menu->elem = create_elem(MENU_BACKGROUND, POS_BG, RECT_BG);
    if (!menu->buttons || !menu->elem)
        return (NULL);
    return (menu);
}