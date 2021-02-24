/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_buttons.c
*/

#include "main_menu.h"

button_t *init_button_fonc(button_t *button, FONC_HOVER, FONC_CLICK)
{
    button->hover_fonc = hover_fonc;
    button->click_fonc = click_fonc;
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

button_t *init_button_texture(button_t * button, char *hover, char *click)
{
    button->hover_texture = sfTexture_createFromFile(hover, NULL);
    button->click_texture = sfTexture_createFromFile(click, NULL);
    if (!button->hover_texture || !button->click_texture)
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
    buttons[0] = init_button_fonc(buttons[0], PLAY_FONC_H, PLAY_FONC_C);
    buttons[0] = init_button_texture(buttons[0], PLAY_HOVER, PLAY_CLICK);
    buttons[1] = init_button_elem(EXIT_INFO);
    buttons[1] = init_button_fonc(buttons[1], EXIT_FONC_H, EXIT_FONC_C);
    buttons[1] = init_button_texture(buttons[1], EXIT_HOVER, EXIT_CLICK);
    buttons[2] = NULL;
    if (!buttons[0])
        return (NULL);
    return (buttons);
}