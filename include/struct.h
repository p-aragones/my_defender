/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** struct
*/

#include "defender.h"
#include "main_menu.h"

#ifndef STRUCT
#define STRUCT

typedef struct clock_struct_s {
    sfClock *clock;
    sfTime time;
    float seconds;
} clock_struct_t;

typedef struct elem_s {
    sfSprite *sprite;
    sfTexture* texture;
    sfVector2f pos;
    sfIntRect rect;
} elem_t;

typedef struct window_s {
    sfRenderWindow *window;
    sfVideoMode videoMode;
} window_t;

typedef struct menu_s {
    elem_t *elem;
    struct button_s **buttons;
} menu_t;

typedef struct button_s {
    int (*hover_fonc)(struct button_s *button);
    int (*click_fonc)(window_t *, menu_t *, struct button_s *button);
    sfVector2i size;
    elem_t *elem;
    sfTexture *hover_texture;
    sfTexture *click_texture;
} button_t;


#endif