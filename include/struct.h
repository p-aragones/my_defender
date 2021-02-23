/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** struct
*/

#include "defender.h"

#ifndef STRUCT
#define STRUCT

typedef struct window_s {
    sfRenderWindow *window;
    sfVideoMode videoMode;
    sfEvent event;
} window_t;

typedef struct menu_s {
    sfSprite *background_s;
    sfTexture *background_t;
}menu_t;

#endif