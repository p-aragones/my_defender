/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** main_menu.h
*/

#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "struct.h"
#include "macros.h"
#include "tools.h"

typedef struct menu_s {
    elem_t *elem;
    button_t **buttons;
} menu_t;

int analyse_event(window_t *window, sfEvent event, button_t **buttons);
menu_t *init_main_menu(window_t *window);

int play_hover(window_t *window, button_t *button);
int play_click(window_t *window, button_t *button);


#endif