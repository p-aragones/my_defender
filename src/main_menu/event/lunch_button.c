/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** lunch_button.c
*/

#include "main_menu.h"

int lunch_button(window_t *window, button_t *button, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed)
        return (button->click_fonc(window, button));
    else
        return (button->hover_fonc(window, button));
    return (0);
}