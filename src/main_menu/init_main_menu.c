/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_main_menu
*/

#include "main_menu.h"

button_t *init_button_fonc(button_t *button, char *hover, char *click)
{
    button->hover_fonc = &play_hover;
    button->click_fonc = &play_click;
    button->hover_texture = sfTexture_createFromFile(hover, NULL);
    button->click_texture = sfTexture_createFromFile(click, NULL);
    if (!button->hover_texture || !button->click_texture)
        return (NULL);
    return (button);
}

button_t *init_button_elem(char *path, sfVector2f pos,
sfIntRect rect, sfVector2i size)
{
    button_t *button = malloc(sizeof(button_t));

    if (!button)
        return (NULL);
    button->elem = create_elem(path, pos, rect);
    sfSprite_setScale(button->elem->sprite, SCALE_BTN);
    button->size = size;
    if (!button->elem)
        return (NULL);
    return (button);
}

button_t **init_buttons(window_t *window)
{
    button_t **buttons = malloc(sizeof(button_t *) * N_BUTTONS);

    if (!buttons)
        return (NULL);
    (void)window;
    buttons[0] = init_button_elem(PLAY_INFO);
    buttons[0] = init_button_fonc(buttons[0], PLAY_HOVER, PLAY_CLICK);
    buttons[1] = init_button_elem(EXIT_INFO);
    buttons[1] = init_button_fonc(buttons[1], EXIT_HOVER, EXIT_CLICK);
    buttons[2] = NULL;
    if (!buttons[0])
        return (NULL);
    return (buttons);
}

menu_t *init_main_menu(window_t *window)
{
    menu_t *menu = malloc(sizeof(menu_t));

    if (menu == NULL)
        return (NULL);
    menu->buttons = init_buttons(window);
    menu->elem = create_elem(MENU_BACKGROUND, POS_BG, RECT_BG);
    sfSprite_setScale(menu->elem->sprite, SCALE_BG);
    if (!menu->buttons || !menu->elem)
        return (NULL);
    return (menu);
}