/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_sound
*/

#include "game.h"

sound_t *init_sound(void)
{
    sound_t *sound = malloc(sizeof(sound));

    if (!sound)
        return (NULL);
    sound->oof = sfSound_create();
    sfSound_setBuffer(sound->oof, sfSoundBuffer_createFromFile(OOF));
    sound->place = sfSound_create();
    sfSound_setBuffer(sound->place, sfSoundBuffer_createFromFile(PLACE));
    return (sound);
}