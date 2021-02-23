/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** defender.h
*/

#ifndef DEFENDER
#define DEFENDER

#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "struct.h"

int main_menu(window_t *);
int defender(void);
window_t *init_window(window_t *);
elem_t *create_elem(char *path, sfVector2f pos, sfIntRect rect);

#endif