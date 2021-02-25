/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** tools.h
*/

#ifndef TOOLS_H
#define TOOLS_H

#include "csfml_lib.h"
#include "struct_menu.h"
#include "struct.h"
#include "maccro_menu.h"
#include "macros.h"

int get_y_mouse(sfRenderWindow *window);
int get_x_mouse(sfRenderWindow *window);

int mouse_hover(sfRenderWindow *window, button_t *button);

void display(sfRenderWindow *window, elem_t *elem);

void free_elem(elem_t *elem);
void free_buttons(button_t **buttons);

#endif