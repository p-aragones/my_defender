/*
** EPITECH PROJECT, 2021
** macros
** File description:
** macros
*/

#ifndef MACROS_H_
#define MACROS_H_

#define X_WINDOW 1000
#define Y_WINDOW 563

#define N_BUTTONS 7
#define PLAY_BTN "resources/sprites/buttons/red/play.png"
#define PLAY_HOVER "resources/sprites/buttons/blue/play.png"
#define POS_PLAY (sfVector2f){X_WINDOW / 2, Y_WINDOW / 2}
#define RECT_PLAY (sfIntRect){0, 0, 49, 20}


#define EXIT_BTN "resources/sprites/buttons/red/exit.png"
#define EXIT_HOVER "resources/sprites/buttons/blue/exit.png"
#define POS_EXIT (sfVector2f){X_WINDOW / 2, Y_WINDOW / 2 + 50}
#define RECT_EXIT (sfIntRect){0, 0, 49, 20}

#define MENU_BACKGROUND "resources/sprites/background/main_menu_background.png"
#define POS_BG (sfVector2f){0, 0}
#define RECT_BG (sfIntRect){0, 0, 1000, 563}




#endif /* !MACROS_H_ */
