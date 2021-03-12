/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** struct_game.h
*/

#ifndef STRUCT_GAME_H
#define STRUCT_GAME_H

#include "struct.h"
#include "struct_menu.h"
#include "csfml_lib.h"

typedef struct tower_s {
    elem_t elem;
    int type;
    int power;
    int speed;
} tower_t;

typedef struct enemy_s {
    elem_t *elem;
    int damage;
    int health;
    int speed;
    sfVector2f pos;
} enemy_t;

typedef struct wave_s {
    int wave;
    int n_enemies;
    enemy_t **enemies;
} wave_t;

typedef struct game_s {
    elem_t *elem;
    struct button_game_s **buttons;
    tower_t **towers;
    wave_t **waves;
} game_t;

typedef struct button_game_s {
    int (*hover_fonc_g)(struct button_game_s *button);
    int (*click_fonc_g)(window_t *, game_t *, struct button_game_s *button);
    sfVector2i size;
    elem_t *elem;
    sfTexture *hover_texture;
    sfTexture *click_texture;
} button_game_t;

#endif