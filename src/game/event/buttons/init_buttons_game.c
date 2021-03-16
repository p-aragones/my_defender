/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_buttons_game
*/

#include "game.h"

button_game_t *init_button_fonc_g(button_game_t *button,
FONC_HOVER_GAME, FONC_CLICK_GAME)
{
    button->hover_fonc_g = hover_fonc_g;
    button->click_fonc_g = click_fonc_g;
    return (button);
}

button_game_t *init_button_elem_g(char *path, sfVector2f pos,
sfIntRect rect, sfVector2i size)
{
    button_game_t *button = malloc(sizeof(button_game_t));

    if (!button)
        return (NULL);
    button->elem = create_elem(path, pos, rect);
    sfSprite_setScale(button->elem->sprite, SCALE_BTN);
    button->size = size;
    if (!button->elem)
        return (NULL);
    return (button);
}

button_game_t *init_button_texture_g(button_game_t * button,
char *hover, char *click)
{
    button->hover_texture = sfTexture_createFromFile(hover, NULL);
    button->click_texture = sfTexture_createFromFile(click, NULL);
    button->status = NONE;
    if (!button->hover_texture || !button->click_texture)
        return (NULL);
    return (button);
}

button_game_t **init_buttons_game(window_t *window)
{
    button_game_t **btns = malloc(sizeof(button_game_t *) * N_BUTTONS);

    if (!btns)
        return (NULL);
    (void)window;
    btns[0] = init_button_elem_g(TWR_ONE_INFO);
    btns[0] = init_button_texture_g(btns[0], TWR_ONE_HOVER, TWR_ONE_CLICK);
    btns[1] = init_button_elem_g(EXIT_INFO);
    btns[1] = init_button_texture_g(btns[1], EXIT_HOVER, EXIT_CLICK);
    btns[2] = NULL;
    if (!btns[0] || !btns[1])
        return (NULL);
    return (btns);
}