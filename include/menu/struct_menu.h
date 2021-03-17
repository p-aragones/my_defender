/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** struct_menu.h
*/

#ifndef STRUCT_MENU_H
#define STRUCT_MENU_H

#include "struct.h"
#include "csfml_lib.h"

typedef enum {
    CLICK,
    HOVER,
    NONE
} status_t;

typedef struct fps_s {
    int fps;
    sfFont *font;
    sfText *text;
} fps_t;

typedef struct howto_s {
    elem_t *howto;
    elem_t *howto_bg;
    int status;
} howto_t;

typedef struct menu_s {
    elem_t *elem;
    struct button_s **buttons;
    sfMusic *music;
    howto_t *howto;
    fps_t *fps;
} menu_t;

typedef struct button_s {
    void (*hover_fonc)(struct button_s *button);
    int (*click_fonc)(window_t *, menu_t *, struct button_s *button);
    sfVector2i size;
    elem_t *elem;
    sfTexture *hover_texture;
    sfTexture *click_texture;
    status_t status;
} button_t;

#endif