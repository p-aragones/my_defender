/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** game.h
*/

#ifndef GAME_H
#define GAME_H

#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "list.h"
#include "csfml_lib.h"
#include "defender.h"
#include "struct_game.h"
#include "macro_game.h"
#include "maccro_towers.h"

int analyse_event_game(window_t *window, sfEvent event, game_t *game, int);

game_t *init_game(window_t *window);
button_game_t **init_buttons_game(window_t *window);

wave_t *init_enemies(wave_t *);
wave_t **init_waves(wave_t **);
tower_t **init_towers_buttons(void);
control_t *init_towers_struct(void);

int display_game(window_t *window, game_t *menu, clock_struct_t *, int);
void draw_enemies(wave_t *, sfRenderWindow *, clock_struct_t *);
void move_rect(sfIntRect *, int, int);

int twr_one_click(window_t *window, game_t *game, button_game_t *button);
int twr_one_hover(button_game_t *button);

int twr_two_click(window_t *window, game_t *, button_game_t *button);
int twr_two_hover(button_game_t *button);

health_t *init_health(void);
money_t *init_money(void);
sound_t *init_sound(void);

int pause_menu(window_t *window);

#endif