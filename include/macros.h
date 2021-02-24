/*
** EPITECH PROJECT, 2021
** macros
** File description:
** macros
*/

#ifndef MACROS_H_
#define MACROS_H_

#define X_WINDOW 1920
#define Y_WINDOW 1080

#define N_BUTTONS 7

#define FONC_HOVER int (*hover_fonc)(window_t *, struct button_s *button)
#define FONC_CLICK int (*click_fonc)(window_t *, struct button_s *button)

#define SCALE_BTN (sfVector2f){3, 3}
#define PLAY_BTN "resources/sprites/buttons/red/play.png"
#define PLAY_HOVER "resources/sprites/buttons/blue/play.png"
#define PLAY_CLICK "resources/sprites/buttons/pressed/play.png"
#define POS_PLAY (sfVector2f){X_WINDOW / 2 - 70, Y_WINDOW / 2 - 35}
#define RECT_PLAY (sfIntRect){0, 0, 49, 20}
#define SIZE_PLAY (sfVector2i){49, 20}
#define PLAY_INFO PLAY_BTN, POS_PLAY, RECT_PLAY, SIZE_PLAY
#define PLAY_FONC_C play_click
#define PLAY_FONC_H play_hover


#define EXIT_BTN "resources/sprites/buttons/red/exit.png"
#define EXIT_HOVER "resources/sprites/buttons/blue/exit.png"
#define EXIT_CLICK "resources/sprites/buttons/pressed/exit.png"
#define POS_EXIT (sfVector2f){X_WINDOW / 2 - 70, Y_WINDOW / 2 + 50}
#define RECT_EXIT (sfIntRect){0, 0, 49, 20}
#define SIZE_QUIT (sfVector2i){49, 20}
#define EXIT_INFO EXIT_BTN, POS_EXIT, RECT_EXIT, SIZE_QUIT
#define EXIT_FONC_C exit_click
#define EXIT_FONC_H exit_hover

#define MENU_BACKGROUND "resources/sprites/background/main_menu_background.png"
#define POS_BG (sfVector2f){0, 0}
#define RECT_BG (sfIntRect){0, 0, 1000, 563}
#define SCALE_BG (sfVector2f){1.92, 1.92}

#endif /* !MACROS_H_ */
