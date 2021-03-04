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

#include "csfml_lib.h"
#include "defender.h"
#include "struct_menu.h"
#include "maccro_menu.h"

int analyse_event(window_t *, sfEvent, button_t **, menu_t *);

menu_t *init_main_menu(window_t *window);
button_t **init_buttons(window_t *window);

void hover(button_t *button);

int display_main_menu(window_t *window, menu_t *menu);

int play_click(window_t *window, menu_t *, button_t *button);

int exit_click(window_t *window, menu_t *, button_t *button);

int sound_click(window_t *window, menu_t *menu, button_t *button);

void free_main_menu(menu_t *menu);

int game(window_t *);
int waiting_play(void);

#endif