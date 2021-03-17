/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** macro_game
*/

#ifndef MACRO_GAME_H_
#define MACRO_GAME_H_

#define N_BUTTONS 7
#define N_WAVES 10

#define FONC_HOVER_GAME int (*hover_fonc_g)(struct button_game_s *button)
#define FONC_CLICK_GAME int (*click_fonc_g)(window_t *, game_t *, \
struct button_game_s *button)

#define GAME_BG "resources/sprites/background/game_background.jpg"
#define POS_BG (sfVector2f){0, 0}
#define RECT_BG (sfIntRect){0, 0, 1000, 563}
#define SCALE_BG (sfVector2f){1.92, 1.92}

#define SCALE_BTN (sfVector2f){3, 3}
#define TWR_ONE_BTN "resources/sprites/buttons/red/play.png"
#define TWR_ONE_HOVER "resources/sprites/buttons/blue/play.png"
#define TWR_ONE_CLICK "resources/sprites/buttons/pressed/play.png"
#define POS_TWR_ONE (sfVector2f){70, Y_WINDOW - 70}
#define RECT_TWR_ONE (sfIntRect){0, 0, 49, 20}
#define SIZE_TWR_ONE (sfVector2i){49, 20}
#define TWR_ONE_INFO TWR_ONE_BTN, POS_TWR_ONE, RECT_TWR_ONE, SIZE_TWR_ONE
#define TWR_ONE_FONC_C twr_one_click
#define TWR_ONE_FONC_H twr_one_hover

#define TWR_TWO_BTN "resources/sprites/buttons/red/exit.png"
#define TWR_TWO_HOVER "resources/sprites/buttons/blue/exit.png"
#define TWR_TWO_CLICK "resources/sprites/buttons/pressed/exit.png"
#define POS_TWR_TWO (sfVector2f){X_WINDOW / 2 - 70, Y_WINDOW / 2 + 50}
#define RECT_TWR_TWO (sfIntRect){0, 0, 49, 20}
#define SIZE_QUIT (sfVector2i){49, 20}
#define TWR_TWO_INFO TWR_TWO_BTN, POS_TWR_TWO, RECT_TWR_TWO, SIZE_QUIT
#define TWR_TWO_FONC_C twr_two_click
#define TWR_TWO_FONC_H twr_two_hover

#define SNAKE "resources/sprites/snake/Snake_walk.png"
#define SNAKE_RECT (sfIntRect){0, 0, 48, 48}
#define SNAKE_POS (sfVector2f){2000, 650}

#define POS_HEALTH_TEXT (sfVector2f){X_WINDOW / 2 - 35, 50}
#define FONT_SIZE_HEALTH 95
#define HEART "resources/sprites/background/heart.png"
#define HEART_POS (sfVector2f){X_WINDOW / 2 - 90, 105}
#define SCALE_HEART (sfVector2f){0.05, 0.05}

#define POS_MONEY_TEXT (sfVector2f){X_WINDOW / 2 - 35, 125}
#define FONT_SIZE_MONEY 95
#define COIN "resources/sprites/background/coin.png"
#define COIN_POS (sfVector2f){X_WINDOW / 2 - 90, 180}
#define SCALE_COIN (sfVector2f){0.025, 0.025}

#endif /* !MACRO_GAME_H_ */