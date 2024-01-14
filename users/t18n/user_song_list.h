// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#define USER_SONG_LIST

#define CLOSE_ENCOUNTERS_5_NOTE Q__NOTE(_D5), Q__NOTE(_E5), Q__NOTE(_C5), Q__NOTE(_C4), Q__NOTE(_G4)

#define DOE_A_DEER QD_NOTE(_C4), E__NOTE(_D4), QD_NOTE(_E4), E__NOTE(_C4), Q__NOTE(_E4), Q__NOTE(_C4), Q__NOTE(_E4)

/* Requires: PLAY_NOTE_ARRAY(..., ..., STACCATO); */
#define IN_LIKE_FLINT                                                                                           \
    E__NOTE(_AS4), E__NOTE(_AS4), QD_NOTE(_B4), E__NOTE(_AS4), E__NOTE(_B4), QD_NOTE(_CS4), E__NOTE(_B4),       \
        E__NOTE(_CS4), QD_NOTE(_DS4), E__NOTE(_CS4), E__NOTE(_B4), QD_NOTE(_AS4), E__NOTE(_AS4), E__NOTE(_AS4), \
        QD_NOTE(_B4)

#define IMPERIAL_MARCH                                                                                              \
    HD_NOTE(_A4), HD_NOTE(_A4), HD_NOTE(_A4), QD_NOTE(_F4), QD_NOTE(_C5), HD_NOTE(_A4), QD_NOTE(_F4), QD_NOTE(_C5), \
        WD_NOTE(_A4), HD_NOTE(_E5), HD_NOTE(_E5), HD_NOTE(_E5), QD_NOTE(_F5), QD_NOTE(_C5), HD_NOTE(_A4),           \
        QD_NOTE(_F4), QD_NOTE(_C5), WD_NOTE(_A4)

#define BASKET_CASE                                                                                             \
    QD_NOTE(_G3), E__NOTE(_F3), E__NOTE(_E3), Q__NOTE(_F3), M__NOTE(_G3, 40), Q__NOTE(_REST), Q__NOTE(_B4),     \
        Q__NOTE(_C4), Q__NOTE(_B4), E__NOTE(_A4), Q__NOTE(_G3), M__NOTE(_G3, 40), Q__NOTE(_REST), Q__NOTE(_B4), \
        Q__NOTE(_C4), Q__NOTE(_B4), E__NOTE(_A4), Q__NOTE(_G3), Q__NOTE(_G3), Q__NOTE(_G3), Q__NOTE(_G3),       \
        E__NOTE(_A4), E__NOTE(_C4), QD_NOTE(_B4), HD_NOTE(_B4)

#define SONIC_RING E__NOTE(_E6), E__NOTE(_G6), HD_NOTE(_C7)

#define ZELDA_PUZZLE \
    Q__NOTE(_G5), Q__NOTE(_FS5), Q__NOTE(_DS5), Q__NOTE(_A4), Q__NOTE(_GS4), Q__NOTE(_E5), Q__NOTE(_GS5), HD_NOTE(_C6)

#define ZELDA_TREASURE Q__NOTE(_A4), Q__NOTE(_AS4), Q__NOTE(_B4), HD_NOTE(_C5)

#define OVERWATCH_THEME \
    HD_NOTE(_A4), Q__NOTE(_E4), Q__NOTE(_A4), HD_NOTE(_B4), Q__NOTE(_E4), Q__NOTE(_B4), W__NOTE(_CS5)

#define E1M1_DOOM                                                                                                   \
    Q__NOTE(_E3), Q__NOTE(_E3), Q__NOTE(_E4), Q__NOTE(_E3), Q__NOTE(_E3), Q__NOTE(_D4), Q__NOTE(_E3), Q__NOTE(_E3), \
        Q__NOTE(_C4), Q__NOTE(_E3), Q__NOTE(_E3), Q__NOTE(_BF3), Q__NOTE(_E3), Q__NOTE(_E3), Q__NOTE(_B3),          \
        Q__NOTE(_C4), Q__NOTE(_E3), Q__NOTE(_E3), Q__NOTE(_E4), Q__NOTE(_E3), Q__NOTE(_E3), Q__NOTE(_D4),           \
        Q__NOTE(_E3), Q__NOTE(_E3), Q__NOTE(_C4), Q__NOTE(_E3), Q__NOTE(_E3), H__NOTE(_BF3)

#define DISNEY_SONG                                                                                                  \
    H__NOTE(_G3), H__NOTE(_G4), H__NOTE(_F4), H__NOTE(_E4), H__NOTE(_CS4), H__NOTE(_D4), W__NOTE(_A4), H__NOTE(_B3), \
        H__NOTE(_B4), H__NOTE(_A4), H__NOTE(_G4), H__NOTE(_FS4), H__NOTE(_G4), W__NOTE(_C5), H__NOTE(_D5),           \
        H__NOTE(_C5), H__NOTE(_B4), H__NOTE(_A4), H__NOTE(_G4), H__NOTE(_F4), H__NOTE(_E4), H__NOTE(_D4),            \
        W__NOTE(_A4), W__NOTE(_B3), W__NOTE(_C4)

#define NUMBER_ONE                                                                                                  \
    HD_NOTE(_F4), Q__NOTE(_C5), E__NOTE(_B4), E__NOTE(_C5), E__NOTE(_B4), E__NOTE(_C5), Q__NOTE(_B4), Q__NOTE(_C5), \
        H__NOTE(_AF4), HD_NOTE(_F4), Q__NOTE(_F4), Q__NOTE(_AF4), Q__NOTE(_C5), H__NOTE(_DF5), H__NOTE(_AF4),       \
        H__NOTE(_DF5), H__NOTE(_EF5), Q__NOTE(_C5), Q__NOTE(_DF5), Q__NOTE(_C5), Q__NOTE(_DF5), H__NOTE(_C5)

#define CABBAGE_SONG H__NOTE(_C4), H__NOTE(_A4), H__NOTE(_B4), H__NOTE(_B4), H__NOTE(_A4), H__NOTE(_G4), H__NOTE(_E4)

#define OLD_SPICE \
    Q__NOTE(_A4), Q__NOTE(_A4), H__NOTE(_B4), H__NOTE(_D5), H__NOTE(_CS5), Q__NOTE(_E5), H__NOTE(_FS5), H__NOTE(_D5)

#define VICTORY_FANFARE_SHORT                                                                             \
    ED_NOTE(_C6), ED_NOTE(_C6), ED_NOTE(_C6), ED_NOTE(_C6), W__NOTE(_REST), QD_NOTE(_GS5), QD_NOTE(_AS5), \
        Q__NOTE(_C6), Q__NOTE(_AS5), Q__NOTE(_C6)

#define ALL_STAR                                                                                                 \
    H__NOTE(_AS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), H__NOTE(_FS4), W__NOTE(_FS4), Q__NOTE(_FS4),     \
        Q__NOTE(_DS4), H__NOTE(_FS4), W__NOTE(_FS4), W__NOTE(_FS4), QD_NOTE(_AS4), H__NOTE(_AS4), W__NOTE(_FS4), \
        Q__NOTE(_FS4), Q__NOTE(_DS4), H__NOTE(_FS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), H__NOTE(_FS4), \
        W__NOTE(_FS4), W__NOTE(_FS4), W__NOTE(_AS4), H__NOTE(_REST), W__NOTE(_AS4), W__NOTE(_CS5), H__NOTE(_B4), \
        H__NOTE(_CS5), H__NOTE(_DS5), W__NOTE(_FS5), H__NOTE(_GS5), W__NOTE(_GS5), H__NOTE(_FS4), H__NOTE(_FS4), \
        H__NOTE(_GS4), H__NOTE(_FS4), H__NOTE(_AS4), W__NOTE(_GS4), W__NOTE(_GS4), W__NOTE(_FS4), W__NOTE(_GS4), \
        H__NOTE(_AS4), WD_NOTE(_DS4)

#define RICK_ROLL                                                                                                      \
    Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_BF4), Q__NOTE(_G4), HD_NOTE(_D5), HD_NOTE(_D5), W__NOTE(_C5), S__NOTE(_REST), \
        Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_BF4), Q__NOTE(_G4), HD_NOTE(_C5), HD_NOTE(_C5), W__NOTE(_BF4),            \
        S__NOTE(_REST), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_BF4), Q__NOTE(_G4), W__NOTE(_BF4), H__NOTE(_C5),          \
        H__NOTE(_A4), H__NOTE(_A4), H__NOTE(_G4), H__NOTE(_F4), H__NOTE(_F4), W__NOTE(_C5), W__NOTE(_BF4)

/* Prelude music from Final Fantasy */
#define FF_PRELUDE                                                                                                  \
    M__NOTE(_C3, 20), M__NOTE(_D3, 20), M__NOTE(_E3, 20), M__NOTE(_G3, 20), M__NOTE(_C4, 20), M__NOTE(_D4, 20),     \
        M__NOTE(_E4, 20), M__NOTE(_G4, 20), M__NOTE(_C5, 20), M__NOTE(_D5, 20), M__NOTE(_E5, 20), M__NOTE(_G5, 20), \
        M__NOTE(_C6, 20), M__NOTE(_D6, 20), M__NOTE(_E6, 20), M__NOTE(_G6, 20), M__NOTE(_C7, 20), M__NOTE(_G6, 20), \
        M__NOTE(_E6, 20), M__NOTE(_D6, 20), M__NOTE(_C6, 20), M__NOTE(_G5, 20), M__NOTE(_E5, 20), M__NOTE(_D5, 20), \
        M__NOTE(_C5, 20), M__NOTE(_G4, 20), M__NOTE(_E4, 20), M__NOTE(_D4, 20), M__NOTE(_C4, 20), M__NOTE(_G3, 20), \
        M__NOTE(_E3, 20), M__NOTE(_D3, 20), M__NOTE(_A2, 20), M__NOTE(_B2, 20), M__NOTE(_C3, 20), M__NOTE(_E3, 20), \
        M__NOTE(_A3, 20), M__NOTE(_B3, 20), M__NOTE(_C4, 20), M__NOTE(_E4, 20), M__NOTE(_A4, 20), M__NOTE(_B4, 20), \
        M__NOTE(_C5, 20), M__NOTE(_E5, 20), M__NOTE(_A5, 20), M__NOTE(_B5, 20), M__NOTE(_C6, 20), M__NOTE(_E6, 20), \
        M__NOTE(_A6, 20), M__NOTE(_E6, 20), M__NOTE(_C6, 20), M__NOTE(_B5, 20), M__NOTE(_A5, 20), M__NOTE(_E5, 20), \
        M__NOTE(_C5, 20), M__NOTE(_B4, 20), M__NOTE(_A4, 20), M__NOTE(_E4, 20), M__NOTE(_C4, 20), M__NOTE(_B3, 20), \
        M__NOTE(_A3, 20), M__NOTE(_E3, 20), M__NOTE(_C3, 20), M__NOTE(_B2, 20)

/* Melody from the main themes of Star Trek TNG and the original series */
#define TO_BOLDLY_GO                                                                                        \
    W__NOTE(_BF3), Q__NOTE(_EF4), WD_NOTE(_AF4), W__NOTE(_REST), H__NOTE(_G4), Q__NOTE(_EF4), H__NOTE(_C4), \
        W__NOTE(_REST), QD_NOTE(_F4), M__NOTE(_BF4, 128)

#define KATAWARE_DOKI                                                                                               \
    W__NOTE(_G5), HD_NOTE(_G5), Q__NOTE(_G5), H__NOTE(_G5), H__NOTE(_E5), H__NOTE(_D5), Q__NOTE(_D5), Q__NOTE(_C5), \
        B__NOTE(_E5), H__NOTE(_C5), W__NOTE(_G5), HD_NOTE(_G5), Q__NOTE(_C5), H__NOTE(_C6), Q__NOTE(_B5),           \
        Q__NOTE(_A5), H__NOTE(_G5), Q__NOTE(_G5), Q__NOTE(_A5), W__NOTE(_G5), QD_NOTE(_E5), QD_NOTE(_F5),           \
        Q__NOTE(_E5), WD_NOTE(_D5), H__NOTE(_C5), W__NOTE(_G5), HD_NOTE(_G5), Q__NOTE(_G5), H__NOTE(_G5),           \
        H__NOTE(_E5), H__NOTE(_D5), Q__NOTE(_D5), Q__NOTE(_C5), B__NOTE(_E5), H__NOTE(_G4), Q__NOTE(_C5),           \
        Q__NOTE(_D5), Q__NOTE(_E5), H__NOTE(_D5), Q__NOTE(_C5), Q__NOTE(_C5), Q__NOTE(_A4), H__NOTE(_C5),           \
        Q__NOTE(_C5), W__NOTE(_C5), Q__NOTE(_F4), Q__NOTE(_C5), Q__NOTE(_D5), Q__NOTE(_E5), H__NOTE(_D5),           \
        H__NOTE(_C5), Q__NOTE(_C5), H__NOTE(_G5), Q__NOTE(_C5), HD_NOTE(_D5), H__NOTE(_G4), Q__NOTE(_C5),           \
        Q__NOTE(_D5), Q__NOTE(_E5), H__NOTE(_D5), Q__NOTE(_C5), Q__NOTE(_C5), Q__NOTE(_A4), H__NOTE(_C5),           \
        Q__NOTE(_C5), W__NOTE(_C5), Q__NOTE(_F4), Q__NOTE(_C5), Q__NOTE(_D5), Q__NOTE(_E5), H__NOTE(_D5),           \
        H__NOTE(_C5), Q__NOTE(_C5), H__NOTE(_G5), Q__NOTE(_C5), HD_NOTE(_D5), HD_NOTE(_G4), Q__NOTE(_C5),           \
        Q__NOTE(_D5), BD_NOTE(_C5)

#define MEGALOVANIA                                                                                                  \
    Q__NOTE(_D4), Q__NOTE(_D4), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), \
        Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_C4), Q__NOTE(_C4), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4),           \
        H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_B3), Q__NOTE(_B3),            \
        H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4),           \
        Q__NOTE(_G4), Q__NOTE(_BF3), Q__NOTE(_BF3), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4),         \
        H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4)

#define MICHISHIRUBE                                                                                                 \
    W__NOTE(_A5), H__NOTE(_A5), H__NOTE(_A5), W__NOTE(_B5), H__NOTE(_A5), H__NOTE(_B5), BD_NOTE(_CS6), W__NOTE(_E6), \
        W__NOTE(_CS6), WD_NOTE(_B5), H__NOTE(_A5), BD_NOTE(_A5), W__NOTE(_A5), H__NOTE(_A5), H__NOTE(_A5),           \
        W__NOTE(_B5), H__NOTE(_A5), H__NOTE(_B5), W__NOTE(_A5), W__NOTE(_A6), W__NOTE(_GS6), H__NOTE(_CS6),          \
        Q__NOTE(_E6), Q__NOTE(_CS6), W__NOTE(_B5), H__NOTE(_B5), H__NOTE(_CS6), W__NOTE(_B5), H__NOTE(_A5),          \
        Q__NOTE(_B5), BD_NOTE(_A5), H__NOTE(_E6), H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_B6), W__NOTE(_A6),           \
        H__NOTE(_E6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_A6), H__NOTE(_B6), B__NOTE(_CS7), H__NOTE(_E6),           \
        H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_E6), H__NOTE(_B6), W__NOTE(_A6),           \
        H__NOTE(_A6), H__NOTE(_GS6), B__NOTE(_E6), H__NOTE(_E6), H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_B6),          \
        W__NOTE(_A6), H__NOTE(_E6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_A6), H__NOTE(_B6), H__NOTE(_CS7),           \
        B__NOTE(_CS7), H__NOTE(_E6), H__NOTE(_E6), H__NOTE(_E6), H__NOTE(_E6), H__NOTE(_D6), H__NOTE(_D6),           \
        H__NOTE(_CS6), H__NOTE(_CS6), Q__NOTE(_B5), BD_NOTE(_B5), W__NOTE(_A5), H__NOTE(_A5), H__NOTE(_A5),          \
        W__NOTE(_B5), H__NOTE(_A5), H__NOTE(_B5), BD_NOTE(_CS6), W__NOTE(_E6), W__NOTE(_CS6), WD_NOTE(_B5),          \
        H__NOTE(_A5), BD_NOTE(_A5), W__NOTE(_A5), H__NOTE(_A5), H__NOTE(_A5), W__NOTE(_B5), H__NOTE(_A5),            \
        H__NOTE(_B5), W__NOTE(_A5), W__NOTE(_A6), W__NOTE(_GS6), H__NOTE(_CS6), Q__NOTE(_E6), Q__NOTE(_CS6),         \
        W__NOTE(_B5), H__NOTE(_B5), H__NOTE(_CS6), W__NOTE(_B5), H__NOTE(_A5), Q__NOTE(_B5), BD_NOTE(_A5)

#define LIEBESLEID                                                                                                     \
    Q__NOTE(_E4), Q__NOTE(_DS4), Q__NOTE(_E4), Q__NOTE(_F4), Q__NOTE(_E4), Q__NOTE(_FS4), Q__NOTE(_EF4), Q__NOTE(_G4), \
        Q__NOTE(_D4), Q__NOTE(_GS4), Q__NOTE(_CS4), W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_E5), HD_NOTE(_G4),            \
        Q__NOTE(_E5), E__NOTE(_E5), E__NOTE(_F5), ED_NOTE(_E5), HD_NOTE(_D5), Q__NOTE(_E5), H__NOTE(_F5),              \
        H__NOTE(_CS5), H__NOTE(_C5), W__NOTE(_G4), H__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_D5), Q__NOTE(_D5),             \
        E__NOTE(_D5), E__NOTE(_E5), E__NOTE(_D5), HD_NOTE(_C5), Q__NOTE(_D5), H__NOTE(_E5), H__NOTE(_B4),              \
        H__NOTE(_BF4), W__NOTE(_F4), H__NOTE(_C5), H__NOTE(_C5), HD_NOTE(_EF4), Q__NOTE(_C5), E__NOTE(_C5),            \
        E__NOTE(_D5), E__NOTE(_C5), HD_NOTE(_BF4), Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_FS4), H__NOTE(_F4),            \
        HD_NOTE(_E4), Q__NOTE(_A4), HD_NOTE(_FS4), Q__NOTE(_A4), HD_NOTE(_GS4), Q__NOTE(_B4), Q__NOTE(_A4),            \
        Q__NOTE(_E4), Q__NOTE(_DS4), Q__NOTE(_E4), Q__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_FS4), Q__NOTE(_CS4),           \
        Q__NOTE(_G4), Q__NOTE(_C4), Q__NOTE(_GS4), Q__NOTE(_D4), WD_NOTE(_A4)

#define MELODIES_OF_LIFE                                                                                       \
    H__NOTE(_B5), W__NOTE(_GS6), H__NOTE(_GS6), H__NOTE(_FS6), W__NOTE(_E6), H__NOTE(_E6), H__NOTE(_DS6),      \
        H__NOTE(_CS6), H__NOTE(_DS6), H__NOTE(_E6), H__NOTE(_FS6), WD_NOTE(_B5), H__NOTE(_B5), H__NOTE(_CS6),  \
        H__NOTE(_DS6), H__NOTE(_E6), H__NOTE(_CS6), H__NOTE(_CS6), H__NOTE(_B5), H__NOTE(_E6), H__NOTE(_GS6),  \
        H__NOTE(_A6), H__NOTE(_GS6), H__NOTE(_E6), H__NOTE(_GS6), WD_NOTE(_FS6), H__NOTE(_GS6), WD_NOTE(_B6),  \
        H__NOTE(_CS7), H__NOTE(_B6), H__NOTE(_A6), H__NOTE(_A6), H__NOTE(_GS6), H__NOTE(_GS6), H__NOTE(_FS6),  \
        H__NOTE(_FS6), H__NOTE(_GS6), WD_NOTE(_A6), Q__NOTE(_GS6), Q__NOTE(_FS6), Q__NOTE(_FS6), Q__NOTE(_E6), \
        W__NOTE(_E6), Q__NOTE(_B5), Q__NOTE(_CS6), WD_NOTE(_E6), Q__NOTE(_E6), Q__NOTE(_FS6), W__NOTE(_GS6),   \
        H__NOTE(_A6), B__NOTE(_FS6)

#define EYES_ON_ME                                                                                                    \
    Q__NOTE(_A6), Q__NOTE(_G6), Q__NOTE(_FS6), Q__NOTE(_D6), Q__NOTE(_A5), Q__NOTE(_G5), Q__NOTE(_FS5), Q__NOTE(_D5), \
        W__NOTE(_A4), W__NOTE(_D5), W__NOTE(_E5), W__NOTE(_FS5), H__NOTE(_A5), M__NOTE(_FS5, 256), H__NOTE(_E5),      \
        H__NOTE(_FS5), B__NOTE(_D5), H__NOTE(_B4), H__NOTE(_D5), BD_NOTE(_E5), H__NOTE(_A4), W__NOTE(_D5),            \
        W__NOTE(_E5), W__NOTE(_FS5), H__NOTE(_A5), BD_NOTE(_CS6), W__NOTE(_A5), H__NOTE(_CS6), H__NOTE(_D6),          \
        WD_NOTE(_B5), H__NOTE(_A5), H__NOTE(_B5), B__NOTE(_A5), WD_NOTE(_B4), W__NOTE(_CS5), WD_NOTE(_D6),            \
        H__NOTE(_D6), W__NOTE(_CS6), H__NOTE(_B5), H__NOTE(_B5), H__NOTE(_B5), B__NOTE(_A5), H__NOTE(_A5),            \
        H__NOTE(_FS5), H__NOTE(_A5), WD_NOTE(_B5), H__NOTE(_B5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_D5),            \
        W__NOTE(_FS5), WD_NOTE(_E5), H__NOTE(_CS4), H__NOTE(_E4), H__NOTE(_A4), H__NOTE(_CS5), W__NOTE(_D5),          \
        W__NOTE(_E5), W__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), B__NOTE(_A5), H__NOTE(_A5), H__NOTE(_G5),            \
        H__NOTE(_D5), BD_NOTE(_FS5), W__NOTE(_E5), B__NOTE(_D5), H__NOTE(_G4), H__NOTE(_FS4), W__NOTE(_E4),           \
        BD_NOTE(_D4)

#define SONG_OF_THE_ANCIENTS                                                                                  \
    H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_BF5), H__NOTE(_G5),     \
        BD_NOTE(_C6), H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_BF5), \
        H__NOTE(_G5), BD_NOTE(_G6), H__NOTE(_G5), H__NOTE(_AF5), B__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_G6),   \
        H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), WD_NOTE(_G5), WD_NOTE(_BF5),  \
        H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_BF5), H__NOTE(_G5), \
        BD_NOTE(_C6), WD_NOTE(_B5), WD_NOTE(_G5), WD_NOTE(_G6), W__NOTE(_G6), H__NOTE(_AF6), W__NOTE(_G6),    \
        H__NOTE(_AF6), H__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6),  \
        WD_NOTE(_E6), H__NOTE(_E6), H__NOTE(_F6), H__NOTE(_G6), H__NOTE(_BF6), H__NOTE(_AF6), W__NOTE(_AF6),  \
        H__NOTE(_C6), H__NOTE(_BF6), H__NOTE(_AF6), W__NOTE(_AF6), H__NOTE(_C6), H__NOTE(_AF6), BD_NOTE(_G6), \
        WD_NOTE(_B5), WD_NOTE(_G6), W__NOTE(_G6), H__NOTE(_AF6), W__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_G6),   \
        H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), WD_NOTE(_E6), H__NOTE(_E6),   \
        H__NOTE(_F6), H__NOTE(_G6), H__NOTE(_BF6), H__NOTE(_AF6), W__NOTE(_AF6), H__NOTE(_C6), H__NOTE(_AF6), \
        H__NOTE(_G6), W__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), BD_NOTE(_EF6), WD_NOTE(_F6), WD_NOTE(_G6),    \
        BD_NOTE(_C7)

#define NIER_AMUSEMENT_PARK                                                                                  \
    H__NOTE(_D5), E__NOTE(_G6), E__NOTE(_GF6), Q__NOTE(_F6), Q__NOTE(_E6), Q__NOTE(_EF6), Q__NOTE(_DF6),     \
        Q__NOTE(_EF6), WD_NOTE(_D6), Q__NOTE(_G5), Q__NOTE(_A5), H__NOTE(_BF5), H__NOTE(_D6), H__NOTE(_G6),  \
        H__NOTE(_A6), W__NOTE(_BF6), W__NOTE(_EF7), H__NOTE(_D5), E__NOTE(_G6), E__NOTE(_GF6), Q__NOTE(_F6), \
        Q__NOTE(_E6), Q__NOTE(_EF6), Q__NOTE(_DF6), Q__NOTE(_EF6), WD_NOTE(_D6), Q__NOTE(_G5), Q__NOTE(_A5), \
        H__NOTE(_BF5), H__NOTE(_D6), H__NOTE(_G6), H__NOTE(_A6), W__NOTE(_BF6), H__NOTE(_EF7), H__NOTE(_D5), \
        HD_NOTE(_A5), HD_NOTE(_BF5), B__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_G5), HD_NOTE(_F5), H__NOTE(_EF5),  \
        WD_NOTE(_D5), H__NOTE(_D5), HD_NOTE(_A5), HD_NOTE(_BF5), WD_NOTE(_D5), W__NOTE(_D5), B__NOTE(_G5),   \
        H__NOTE(_D5), HD_NOTE(_A5), HD_NOTE(_BF5), B__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_G5), HD_NOTE(_F5),   \
        H__NOTE(_EF5), W__NOTE(_D5), W__NOTE(_C5), W__NOTE(_BF4), W__NOTE(_C5), W__NOTE(_D5), W__NOTE(_G5),  \
        B__NOTE(_D5), B__NOTE(_E5), W__NOTE(_EF5), QD_NOTE(_C5), QD_NOTE(_D5), Q__NOTE(_EF5), H__NOTE(_G5),  \
        H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_F5), B__NOTE(_D5), B__NOTE(_BF4), W__NOTE(_EF5), QD_NOTE(_C5), \
        QD_NOTE(_D5), Q__NOTE(_EF5), H__NOTE(_G5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_F5), W__NOTE(_D5),  \
        W__NOTE(_BF5), W__NOTE(_G5), W__NOTE(_D5), W__NOTE(_EF5), QD_NOTE(_C5), QD_NOTE(_D5), Q__NOTE(_EF5), \
        H__NOTE(_G5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_F5), B__NOTE(_D5), B__NOTE(_BF4), B__NOTE(_C5),  \
        H__NOTE(_C5), H__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_F5), WD_NOTE(_G5), H__NOTE(_C5), W__NOTE(_AF5),  \
        WD_NOTE(_G5)

#define COPIED_CITY                                                                                             \
    Q__NOTE(_F6), Q__NOTE(_BF5), Q__NOTE(_EF6), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_G6), Q__NOTE(_AF6),       \
        Q__NOTE(_EF6), Q__NOTE(_BF5), Q__NOTE(_F6), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_EF6), Q__NOTE(_G5),   \
        Q__NOTE(_F5), Q__NOTE(_D6), Q__NOTE(_C6), Q__NOTE(_G5), Q__NOTE(_BF5), Q__NOTE(_EF5), Q__NOTE(_AF5),    \
        Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_BF4), H__NOTE(_C5), Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_AF5),    \
        Q__NOTE(_EF6), Q__NOTE(_BF5), Q__NOTE(_G6), Q__NOTE(_EF6), Q__NOTE(_BF6), Q__NOTE(_AF6), Q__NOTE(_EF6), \
        Q__NOTE(_BF5), Q__NOTE(_F6), Q__NOTE(_G5), Q__NOTE(_F5), Q__NOTE(_EF6), Q__NOTE(_BF5), Q__NOTE(_B6),    \
        Q__NOTE(_DF6), Q__NOTE(_EF6), Q__NOTE(_F6), Q__NOTE(_AF6), Q__NOTE(_EF7), Q__NOTE(_F6), Q__NOTE(_C6),   \
        Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_BF5), Q__NOTE(_C6), Q__NOTE(_EF6), Q__NOTE(_G5), Q__NOTE(_EF5),   \
        Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_C5),     \
        Q__NOTE(_BF4), Q__NOTE(_G4), Q__NOTE(_F4), Q__NOTE(_G4), H__NOTE(_AF4), Q__NOTE(_C5), Q__NOTE(_EF5),    \
        Q__NOTE(_F5), Q__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_BF5), Q__NOTE(_AF5),    \
        Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_C5), Q__NOTE(_AF4), Q__NOTE(_F5), Q__NOTE(_G5),     \
        Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_F5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_BF5),    \
        Q__NOTE(_C6), Q__NOTE(_G6), Q__NOTE(_EF6), WD_NOTE(_F7)

#define VAGUE_HOPE_COLD_RAIN                                                                                          \
    HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_CS6), HD_NOTE(_D6), HD_NOTE(_B5), Q__NOTE(_B5), Q__NOTE(_CS6), Q__NOTE(_D6), \
        WD_NOTE(_A6), HD_NOTE(_FS6), HD_NOTE(_G6), HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_FS6), Q__NOTE(_D5),           \
        Q__NOTE(_CS5), Q__NOTE(_A4), W__NOTE(_FS4), H__NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_FS6), HD_NOTE(_CS6),         \
        HD_NOTE(_E6), HD_NOTE(_D6), Q__NOTE(_CS6), Q__NOTE(_D6), Q__NOTE(_E6), W__NOTE(_FS6), H__NOTE(_CS6),          \
        WD_NOTE(_D6), HD_NOTE(_D6), Q__NOTE(_D6), H__NOTE(_E6), WD_NOTE(_CS6), HD_NOTE(_AS5), HD_NOTE(_B5),           \
        HD_NOTE(_B5), Q__NOTE(_B4), Q__NOTE(_CS5), Q__NOTE(_D5), HD_NOTE(_A5), Q__NOTE(_B5), Q__NOTE(_CS6),           \
        Q__NOTE(_A6), HD_NOTE(_FS6), Q__NOTE(_D5), Q__NOTE(_CS5), Q__NOTE(_A4), H__NOTE(_FS4), HD_NOTE(_FS6),         \
        HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_A6), HD_NOTE(_FS6), Q__NOTE(_CS5), Q__NOTE(_D5), Q__NOTE(_A5),           \
        HD_NOTE(_FS5), Q__NOTE(_FS6), Q__NOTE(_FS6), Q__NOTE(_GS6), HD_NOTE(_A6), Q__NOTE(_B6), H__NOTE(_A6),         \
        H__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_CS6), H__NOTE(_FS6), E__NOTE(_FS5), E__NOTE(_CS5),       \
        Q__NOTE(_B4), H__NOTE(_AS4), W__NOTE(_FS5), HD_NOTE(_FS6), HD_NOTE(_B5), H__NOTE(_D6), H__NOTE(_CS6),         \
        H__NOTE(_E6), HD_NOTE(_A6), HD_NOTE(_E6), W__NOTE(_D6), Q__NOTE(_CS6), Q__NOTE(_D6), HD_NOTE(_E6),            \
        HD_NOTE(_FS6), WD_NOTE(_B6), HD_NOTE(_E6), HD_NOTE(_FS6), HD_NOTE(_B5), Q__NOTE(_B5), Q__NOTE(_B5),           \
        Q__NOTE(_CS6), H__NOTE(_D6), H__NOTE(_E6), H__NOTE(_FS6), HD_NOTE(_E6), HD_NOTE(_CS6), H__NOTE(_FS6),         \
        H__NOTE(_A6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_FS6), BD_NOTE(_B6)

#define KAINE_SALVATION                                                                                                \
    BD_NOTE(_D5), W__NOTE(_BF4), W__NOTE(_C5), W__NOTE(_F5), BD_NOTE(_D5), BD_NOTE(_BF4), BD_NOTE(_C5), W__NOTE(_BF4), \
        W__NOTE(_C5), W__NOTE(_D5), BD_NOTE(_C5), BD_NOTE(_F4), BD_NOTE(_D5), W__NOTE(_BF4), W__NOTE(_C5),             \
        W__NOTE(_F5), BD_NOTE(_D5), BD_NOTE(_BF4), WD_NOTE(_EF5), WD_NOTE(_BF4), W__NOTE(_A4), W__NOTE(_BF4),          \
        W__NOTE(_C5), B__NOTE(_C5), H__NOTE(_B4), H__NOTE(_C5), BD_NOTE(_D5), WD_NOTE(_G5), W__NOTE(_G5),              \
        H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5),            \
        WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_B5), H__NOTE(_A5), WD_NOTE(_G5),              \
        WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), H__NOTE(_A5),             \
        H__NOTE(_G5), H__NOTE(_FS5), W__NOTE(_G5), H__NOTE(_B5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5),            \
        BD_NOTE(_E5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5),             \
        H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_D6), H__NOTE(_C6),             \
        H__NOTE(_B5), H__NOTE(_A5), WD_NOTE(_G5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5),             \
        H__NOTE(_A5), H__NOTE(_B5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5), W__NOTE(_G5), H__NOTE(_D6),             \
        WD_NOTE(_D6), W__NOTE(_F5), H__NOTE(_C6), H__NOTE(_C6), H__NOTE(_BF5), H__NOTE(_A5), WD_NOTE(_G5),             \
        WD_NOTE(_F5), WD_NOTE(_G5), WD_NOTE(_A5), BD_NOTE(_G5)

#define WEIGHT_OF_THE_WORLD                                                                                         \
    H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6), WD_NOTE(_G6), H__NOTE(_B5), \
        Q__NOTE(_C6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6), H__NOTE(_G6), Q__NOTE(_A6),           \
        W__NOTE(_G6), Q__NOTE(_C6), Q__NOTE(_D6), H__NOTE(_E6), Q__NOTE(_F6), H__NOTE(_E6), H__NOTE(_F6),           \
        HD_NOTE(_E6), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_D6), WD_NOTE(_D6), Q__NOTE(_C6), Q__NOTE(_B5),           \
        WD_NOTE(_B5), H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6),           \
        WD_NOTE(_G6), H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6),           \
        H__NOTE(_G6), Q__NOTE(_A6), W__NOTE(_G6), Q__NOTE(_C6), Q__NOTE(_D6), H__NOTE(_E6), Q__NOTE(_F6),           \
        H__NOTE(_E6), H__NOTE(_F6), HD_NOTE(_E6), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_D6), BD_NOTE(_D6),           \
        Q__NOTE(_E6), Q__NOTE(_D6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), Q__NOTE(_C6), H__NOTE(_C6),           \
        HD_NOTE(_C6), H__NOTE(_B5), H__NOTE(_C6), H__NOTE(_E6), H__NOTE(_G6), WD_NOTE(_G6), Q__NOTE(_C6),           \
        B__NOTE(_C6), H__NOTE(_B6), Q__NOTE(_C7), BD_NOTE(_C7)

#define ISABELLAS_LULLABY                                                                                       \
    W__NOTE(_BF4), B__NOTE(_D5), W__NOTE(_EF5), B__NOTE(_F5), W__NOTE(_BF5), B__NOTE(_AF5), W__NOTE(_GF5),      \
        BD_NOTE(_F5), B__NOTE(_CS5), W__NOTE(_F5), B__NOTE(_C5), W__NOTE(_EF5), BD_NOTE(_BF4), W__NOTE(_AF4),   \
        W__NOTE(_BF4), W__NOTE(_F5), W__NOTE(_GF5), WD_NOTE(_AF5), H__NOTE(_FS5), W__NOTE(_F5), B__NOTE(_EF5),  \
        W__NOTE(_C6), B__NOTE(_AF5), W__NOTE(_F5), WD_NOTE(_AF5), H__NOTE(_BF5), W__NOTE(_F5), WD_NOTE(_AF5),   \
        H__NOTE(_BF5), W__NOTE(_F5), W__NOTE(_EF5), W__NOTE(_BF4), W__NOTE(_AF5), WD_NOTE(_F5), H__NOTE(_F5),   \
        H__NOTE(_BF5), H__NOTE(_C6), WD_NOTE(_CS6), H__NOTE(_C6), W__NOTE(_BF5), W__NOTE(_AF5), W__NOTE(_F5),   \
        W__NOTE(_EF5), WD_NOTE(_EF5), H__NOTE(_DF5), W__NOTE(_AF5), BD_NOTE(_F5), WD_NOTE(_BF4), H__NOTE(_C5),  \
        W__NOTE(_CS5), W__NOTE(_EF5), W__NOTE(_AF4), W__NOTE(_EF5), WD_NOTE(_GF5), H__NOTE(_F5), W__NOTE(_EF5), \
        WD_NOTE(_F5), H__NOTE(_F5), H__NOTE(_BF5), H__NOTE(_C6), WD_NOTE(_CS6), H__NOTE(_C6), W__NOTE(_CS6),    \
        W__NOTE(_EF6), W__NOTE(_AF5), W__NOTE(_EF6), WD_NOTE(_GF6), H__NOTE(_F6), W__NOTE(_EF6), B__NOTE(_DF6), \
        H__NOTE(_GF6), H__NOTE(_AF6), BD_NOTE(_DF6), B__NOTE(_BF5), W__NOTE(_F6), BD_NOTE(_C6), W__NOTE(_AF5),  \
        WD_NOTE(_EF6), H__NOTE(_DF6), W__NOTE(_C6), B__NOTE(_BF5)

#define TERRAS_THEME                                                                                            \
    Q__NOTE(_GS5), Q__NOTE(_AS5), Q__NOTE(_B5), Q__NOTE(_EF6), BD_NOTE(_B5), Q__NOTE(_AS5), Q__NOTE(_GS5),      \
        W__NOTE(_AS5), BD_NOTE(_DS5), Q__NOTE(_AF5), Q__NOTE(_BF5), Q__NOTE(_B5), Q__NOTE(_DS6), BD_NOTE(_B5),  \
        Q__NOTE(_BF5), Q__NOTE(_AF5), W__NOTE(_AS5), BD_NOTE(_DS6), Q__NOTE(_B5), Q__NOTE(_CS6), Q__NOTE(_DS6), \
        Q__NOTE(_FS6), BD_NOTE(_DS6), Q__NOTE(_CS6), Q__NOTE(_B5), W__NOTE(_CS6), BD_NOTE(_FS5), Q__NOTE(_B5),  \
        Q__NOTE(_AS5), BD_NOTE(_GS5), Q__NOTE(_B5), Q__NOTE(_AS5), BD_NOTE(_GS5)

#define RENAI_CIRCULATION                                                                                             \
    Q__NOTE(_E6), Q__NOTE(_B5), HD_NOTE(_CS6), HD_NOTE(_CS6), H__NOTE(_B5), HD_NOTE(_E6), HD_NOTE(_E6), Q__NOTE(_E6), \
        Q__NOTE(_B5), HD_NOTE(_CS6), HD_NOTE(_CS6), H__NOTE(_B5), HD_NOTE(_E6), HD_NOTE(_GS6), Q__NOTE(_E6),          \
        Q__NOTE(_B5), HD_NOTE(_CS6), H__NOTE(_CS6), Q__NOTE(_CS6), H__NOTE(_B5), HD_NOTE(_E6), H__NOTE(_E6),          \
        Q__NOTE(_E6), H__NOTE(_FS6), HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_E6), H__NOTE(_CS6), WD_NOTE(_GS6),          \
        HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_FS6), H__NOTE(_G6), HD_NOTE(_GS6), HD_NOTE(_E6), Q__NOTE(_B5),           \
        Q__NOTE(_CS6), HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_FS6), H__NOTE(_G6), HD_NOTE(_GS6), HD_NOTE(_E6),          \
        H__NOTE(_CS6), H__NOTE(_E6), Q__NOTE(_CS6), HD_NOTE(_E6), H__NOTE(_CS6), H__NOTE(_E6), Q__NOTE(_CS6),         \
        HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_A6), H__NOTE(_GS6), HD_NOTE(_E6), H__NOTE(_FS6), WD_NOTE(_E6),           \
        H__NOTE(_GS6), H__NOTE(_A6), H__NOTE(_GS6), H__NOTE(_A6), W__NOTE(_B6), H__NOTE(_GS6), H__NOTE(_A6),          \
        H__NOTE(_GS6), H__NOTE(_A6), W__NOTE(_B6), H__NOTE(_B6), H__NOTE(_A6), H__NOTE(_GS6), H__NOTE(_A6),           \
        Q__NOTE(_GS6), H__NOTE(_E6), H__NOTE(_E6), Q__NOTE(_E6), H__NOTE(_CS6), Q__NOTE(_GS6), H__NOTE(_E6),          \
        H__NOTE(_E6), Q__NOTE(_E6), H__NOTE(_CS6), Q__NOTE(_E6), H__NOTE(_E6), H__NOTE(_E6), Q__NOTE(_E6),            \
        H__NOTE(_FS6), WD_NOTE(_E6), W__NOTE(_B6), W__NOTE(_GS6), W__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_GS6),        \
        H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_FS6), B__NOTE(_GS6), H__NOTE(_GS6), W__NOTE(_CS7), W__NOTE(_GS6),       \
        W__NOTE(_E6), H__NOTE(_GS6), H__NOTE(_GS6), HD_NOTE(_E6), H__NOTE(_E6), Q__NOTE(_E6), H__NOTE(_FS6),          \
        WD_NOTE(_E6)

#define PLATINUM_DISCO                                                                                           \
    H__NOTE(_DS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_DS6), H__NOTE(_FS6), W__NOTE(_GS6),     \
        H__NOTE(_DS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_CS6), H__NOTE(_FS6), WD_NOTE(_FS6), \
        H__NOTE(_CS6), W__NOTE(_DS6), H__NOTE(_FS6), H__NOTE(_AS6), W__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_GS6), \
        Q__NOTE(_AS6), Q__NOTE(_CS7), Q__NOTE(_GS6), Q__NOTE(_AS6), Q__NOTE(_FS6), Q__NOTE(_GS6), Q__NOTE(_DS6), \
        Q__NOTE(_FS6), Q__NOTE(_CS6), Q__NOTE(_DS6), Q__NOTE(_AS5), Q__NOTE(_CS6), H__NOTE(_DS6), H__NOTE(_FS6), \
        H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_DS6), H__NOTE(_FS6), W__NOTE(_GS6), H__NOTE(_DS6), H__NOTE(_FS6), \
        H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_CS7), H__NOTE(_GS6), WD_NOTE(_FS6), H__NOTE(_CS6), W__NOTE(_DS6), \
        H__NOTE(_FS6), H__NOTE(_AS6), WD_NOTE(_GS6), H__NOTE(_FS6), Q__NOTE(_FS6), Q__NOTE(_GS5), Q__NOTE(_AS5), \
        Q__NOTE(_CS6), Q__NOTE(_FS6), Q__NOTE(_GS6), Q__NOTE(_AS6), Q__NOTE(_CS7), WD_NOTE(_FS7), H__NOTE(_CS6), \
        WD_NOTE(_DS6), H__NOTE(_CS6), WD_NOTE(_DS6), H__NOTE(_CS6), H__NOTE(_DS6), H__NOTE(_FS6), H__NOTE(_GS6), \
        H__NOTE(_AS6), WD_NOTE(_GS6), H__NOTE(_FS6), WD_NOTE(_GS6), H__NOTE(_FS6), WD_NOTE(_GS6), H__NOTE(_FS6), \
        H__NOTE(_GS6), H__NOTE(_AS6), H__NOTE(_DS6), H__NOTE(_FS6), WD_NOTE(_FS6), H__NOTE(_CS6), WD_NOTE(_DS6), \
        H__NOTE(_CS6), WD_NOTE(_DS6), H__NOTE(_CS6), H__NOTE(_DS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_AS6), \
        H__NOTE(_CS7), H__NOTE(_AS6), H__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_DS6), W__NOTE(_FS6), H__NOTE(_CS6), \
        H__NOTE(_DS6), W__NOTE(_FS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_FS6), \
        B__NOTE(_FS6)

#define ADVENTURE_TIME                                                                                              \
    H__NOTE(_F5), Q__NOTE(_F5), H__NOTE(_F5), H__NOTE(_G5), H__NOTE(_E5), H__NOTE(_E5), H__NOTE(_D5), H__NOTE(_C5), \
        HD_NOTE(_C6)

#define GOT_THEME                                                                                                     \
    WD_NOTE(_G5), WD_NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), W__NOTE(_G5), W__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), \
        H__NOTE(_D5), H__NOTE(_G4), Q__NOTE(_BF4), Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_G4), Q__NOTE(_BF4),           \
        Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_G4), Q__NOTE(_BF4), Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_BF4),           \
        H__NOTE(_D5), WD_NOTE(_F5), WD_NOTE(_BF4), W__NOTE(_D5), H__NOTE(_EF5), W__NOTE(_D5), H__NOTE(_BF4),          \
        H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4), Q__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4),          \
        Q__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4), Q__NOTE(_BF4), WD_NOTE(_C5), H__NOTE(_C6),          \
        H__NOTE(_EF5), Q__NOTE(_AF5), Q__NOTE(_BF5), H__NOTE(_C6), H__NOTE(_EF5), Q__NOTE(_AF5), Q__NOTE(_C6),        \
        H__NOTE(_BF5), H__NOTE(_EF5), Q__NOTE(_G5), Q__NOTE(_AF5), H__NOTE(_BF5), H__NOTE(_EF5), H__NOTE(_G5),        \
        H__NOTE(_AF5), H__NOTE(_C5), Q__NOTE(_F5), Q__NOTE(_G5), H__NOTE(_AF5), H__NOTE(_C5), Q__NOTE(_G5),           \
        Q__NOTE(_AF5), H__NOTE(_G5), H__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), H__NOTE(_G5), H__NOTE(_C5),           \
        H__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_AF4), Q__NOTE(_C5), Q__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_AF4),         \
        Q__NOTE(_C5), Q__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_AF4), H__NOTE(_EF5), H__NOTE(_D5), H__NOTE(_G4),          \
        H__NOTE(_D5), H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4), Q__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_G4),           \
        Q__NOTE(_AF4), Q__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_BF5), H__NOTE(_C6),         \
        H__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_BF5), H__NOTE(_C6), H__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_BF5),         \
        WD_NOTE(_C6)

#define THE_RAINS_OF_CASTAMERE                                                                                      \
    H__NOTE(_A4), WD_NOTE(_F5), H__NOTE(_A4), WD_NOTE(_E5), H__NOTE(_A4), W__NOTE(_F5), W__NOTE(_G5), WD_NOTE(_E5), \
        H__NOTE(_A4), W__NOTE(_G5), W__NOTE(_F5), W__NOTE(_E5), W__NOTE(_D5), BD_NOTE(_E5), H__NOTE(_A5),           \
        W__NOTE(_A5), H__NOTE(_BF5), W__NOTE(_G5), H__NOTE(_C5), H__NOTE(_C5), W__NOTE(_A5), W__NOTE(_BF5),         \
        WD_NOTE(_G5), H__NOTE(_C5), W__NOTE(_BF5), W__NOTE(_A5), W__NOTE(_G5), W__NOTE(_F5), BD_NOTE(_E5),          \
        W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_F5), B__NOTE(_D5), W__NOTE(_F5), H__NOTE(_F5), H__NOTE(_E5),           \
        B__NOTE(_A4), W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_F5), B__NOTE(_D5), W__NOTE(_F5), BD_NOTE(_E5),           \
        W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_F5), B__NOTE(_D5), W__NOTE(_A5), W__NOTE(_A5), W__NOTE(_G5),           \
        WD_NOTE(_D5), H__NOTE(_E5), WD_NOTE(_F5), H__NOTE(_D5), WD_NOTE(_E5), H__NOTE(_C5), BD_NOTE(_D5),           \
        W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_F5), B__NOTE(_D5), W__NOTE(_A5), W__NOTE(_A5), W__NOTE(_G5),           \
        WD_NOTE(_D5), H__NOTE(_E5), WD_NOTE(_F5), H__NOTE(_D5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_E5),           \
        H__NOTE(_F5), BD_NOTE(_D5)

#define LIGHT_OF_THE_SEVEN                                                                                            \
    H__NOTE(_C5), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_G5), \
        H__NOTE(_F4), H__NOTE(_C5), H__NOTE(_AF5), H__NOTE(_C5), H__NOTE(_AF5), H__NOTE(_C5), H__NOTE(_F4),           \
        H__NOTE(_C5), H__NOTE(_C5), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5),           \
        H__NOTE(_C5), H__NOTE(_G5), BD_NOTE(_C5), H__NOTE(_F4), H__NOTE(_C5), H__NOTE(_AF5), H__NOTE(_C5),            \
        H__NOTE(_AF5), H__NOTE(_C5), H__NOTE(_F4), H__NOTE(_C5), H__NOTE(_EF4), H__NOTE(_BF4), H__NOTE(_G5),          \
        H__NOTE(_BF4), B__NOTE(_G5), H__NOTE(_G4), H__NOTE(_D5), H__NOTE(_F5), H__NOTE(_D5), B__NOTE(_F5),            \
        BD_NOTE(_C5), H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_C7), H__NOTE(_G5),            \
        H__NOTE(_C5), H__NOTE(_G5), H__NOTE(_C7), H__NOTE(_C5), H__NOTE(_BF6), H__NOTE(_C5), H__NOTE(_AF6),           \
        H__NOTE(_C5), H__NOTE(_G6), H__NOTE(_C5), H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5),            \
        H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_G5), BD_NOTE(_C7), H__NOTE(_C7), H__NOTE(_G5),             \
        H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_G5), H__NOTE(_C7),            \
        H__NOTE(_G5), H__NOTE(_B6), H__NOTE(_G5), H__NOTE(_A6), H__NOTE(_G5), H__NOTE(_G6), H__NOTE(_G5),             \
        H__NOTE(_C7), H__NOTE(_EF5), H__NOTE(_C6), H__NOTE(_EF5), H__NOTE(_C7), H__NOTE(_EF5), H__NOTE(_G5),          \
        H__NOTE(_EF5), BD_NOTE(_C7), B__NOTE(_C7), B__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_BF6), W__NOTE(_C7),          \
        B__NOTE(_G6), B__NOTE(_C6), B__NOTE(_G5), H__NOTE(_AF5), H__NOTE(_BF5), W__NOTE(_C6), B__NOTE(_D6),           \
        B__NOTE(_F6), B__NOTE(_G5), H__NOTE(_C6), H__NOTE(_D6), W__NOTE(_F6), W__NOTE(_C6), W__NOTE(_G5), BD_NOTE(_C7)

#define KATAMARI_ROLLING_STAR                                                                                         \
    ED_NOTE(_G4), ED_NOTE(_AS5), E__NOTE(_B5), E__NOTE(_B5), ED_NOTE(_AS5), ED_NOTE(_G4), ED_NOTE(_E4), E__NOTE(_C4), \
        Q__NOTE(_C4),

#define LP_NUMB                                                                                             \
    H__NOTE(_CS5), H__NOTE(_E5), H__NOTE(_CS5), WD_NOTE(_FS5), WD_NOTE(_A5), WD_NOTE(_GS5), WD_NOTE(_REST), \
        H__NOTE(_CS5), H__NOTE(_E5), H__NOTE(_CS5), WD_NOTE(_A5), WD_NOTE(_GS5), WD_NOTE(_E5)

// #undef TEMPO_DEFAULT       // set a custom tempo
// #define TEMPO_DEFAULT 255  // smaller is faster; max = 255

// #define T__NOTE(note) MUSICAL_NOTE(note, 2)  // 32nd-note
// #define TD_NOTE(note) MUSICAL_NOTE(note, 3)  // 48th-note
#define X__NOTE(note) MUSICAL_NOTE(note, 1) // 64th-note

#define NOTE_A5SEMI  905.79f
#define NOTE_AS5SEMI 959.65f
#define NOTE_B5SEMI  1016.71f

#define MARIO_FIREBALL T__NOTE(_G4), T__NOTE(_G5), T__NOTE(_G6), T__NOTE(_G7)

#define MARIO_KICK S__NOTE(_AS5), E__NOTE(_REST), S__NOTE(_F6)

#define MARIO_COIN E__NOTE(_B6), H__NOTE(_E7), QD_NOTE(_E7)

#define COIN_SOUND E__NOTE(_A5), HD_NOTE(_E6),

#define MARIO_ONEUP ED_NOTE(_E7), ED_NOTE(_G7), ED_NOTE(_E8), ED_NOTE(_C8), ED_NOTE(_D8), H__NOTE(_G8)

#define ONE_UP_SOUND Q__NOTE(_E6), Q__NOTE(_G6), Q__NOTE(_E7), Q__NOTE(_C7), Q__NOTE(_D7), Q__NOTE(_G7)

#define MARIO_STOMP                                                                                       \
    T__NOTE(_A5), X__NOTE(_AS5), X__NOTE(_B5), X__NOTE(_C6), X__NOTE(_CS6), T__NOTE(_REST), T__NOTE(_F6), \
        X__NOTE(_G6), X__NOTE(_GS6), X__NOTE(_A6), X__NOTE(_AS6)

#define MARIO_BUMP                                                                                                     \
    X__NOTE(_G4), X__NOTE(_FS4), X__NOTE(_F4), X__NOTE(_E4), X__NOTE(_DS4), X__NOTE(_D4), X__NOTE(_CS4), X__NOTE(_C4), \
        X__NOTE(_CS4), X__NOTE(_D4), X__NOTE(_DS4), X__NOTE(_E4)

#define MARIO_CAVE_1                                                                                        \
    E__NOTE(_C5), E__NOTE(_REST), E__NOTE(_C5), E__NOTE(_REST), E__NOTE(_A4), E__NOTE(_REST), E__NOTE(_A4), \
        E__NOTE(_REST), E__NOTE(_AS4), E__NOTE(_REST), E__NOTE(_AS4), E__NOTE(_REST)

#define MARIO_CAVE_2                                                                                        \
    E__NOTE(_F4), E__NOTE(_REST), E__NOTE(_F4), E__NOTE(_REST), E__NOTE(_D4), E__NOTE(_REST), E__NOTE(_D4), \
        E__NOTE(_REST), E__NOTE(_DS4), E__NOTE(_REST), E__NOTE(_DS4), E__NOTE(_REST)

#define MARIO_POWERUP_BLOCK                                                                                            \
    SD_NOTE(_C5), T__NOTE(_G5), T__NOTE(_GS5), SD_NOTE(_CS5), T__NOTE(_GS5), T__NOTE(_A5), SD_NOTE(_D5), T__NOTE(_A5), \
        T__NOTE(_AS5), SD_NOTE(_DS5), T__NOTE(_AS5), T__NOTE(_B5)

#define MARIO_POWERUP                                                                                                \
    S__NOTE(_C6), T__NOTE(_G5), T__NOTE(_C6), T__NOTE(_E6), T__NOTE(_G6), T__NOTE(_C7), T__NOTE(_G6), S__NOTE(_GS5), \
        T__NOTE(_C6), T__NOTE(_DS6), T__NOTE(_GS6), T__NOTE(_DS6), T__NOTE(_GS6), T__NOTE(_C7), T__NOTE(_DS7),       \
        T__NOTE(_GS7), T__NOTE(_DS7), S__NOTE(_AS5), T__NOTE(_D6), T__NOTE(_F6), T__NOTE(_AS6), T__NOTE(_F6),        \
        T__NOTE(_AS6), T__NOTE(_D7), T__NOTE(_F7), T__NOTE(_AS7), T__NOTE(_F7)

#define MARIO_PIPE                                                                                                  \
    X__NOTE(_E7), X__NOTE(_A6), X__NOTE(_D6), X__NOTE(_G5), X__NOTE(_E7), X__NOTE(_A6), X__NOTE(_D6), X__NOTE(_G5), \
        T__NOTE(_AS3), T__NOTE(_AS2), T__NOTE(_REST), X__NOTE(_E7), X__NOTE(_A6), X__NOTE(_D6), X__NOTE(_G5),       \
        X__NOTE(_E7), X__NOTE(_A6), X__NOTE(_D6), X__NOTE(_G5), T__NOTE(_AS3), T__NOTE(_AS2), T__NOTE(_REST),       \
        X__NOTE(_E7), X__NOTE(_A6), X__NOTE(_D6), X__NOTE(_G5), X__NOTE(_E7), X__NOTE(_A6), X__NOTE(_D6),           \
        X__NOTE(_G5), T__NOTE(_AS3), T__NOTE(_AS2)

// todo - fix
#define MARIO_DEATH                                                                                                  \
    TD_NOTE(_AS5), T__NOTE(_A5SEMI), TD_NOTE(_B5), T__NOTE(_AS5SEMI), TD_NOTE(_C6), T__NOTE(_B5SEMI), X__NOTE(_GS5), \
        TD_NOTE(_G5)

// todo - fix
#define MARIO_JUMP_SMALL                                                                                              \
    T__NOTE(_A6), TD_NOTE(_A5), X__NOTE(_AS5), X__NOTE(_B5), X__NOTE(_C6), X__NOTE(_CS6), __NOTE(_D6), X__NOTE(_DS6), \
        X__NOTE(_E6), X__NOTE(_F6), X__NOTE(_FS6), X__NOTE(_G6), X__NOTE(_GS6), X__NOTE(_A6), X__NOTE(_AS6),          \
        T__NOTE(_B6)

#define MARIO_JUMP_BIG // todo

#define MARIO_VINE // todo

#define MARIO_THEME                                                                                         \
    E__NOTE(_E5), E__NOTE(_REST), Q__NOTE(_E5), Q__NOTE(_REST), Q__NOTE(_E5), Q__NOTE(_REST), Q__NOTE(_C5), \
        Q__NOTE(_E5), Q__NOTE(_REST), H__NOTE(_G5), S__NOTE(_REST), H__NOTE(_REST), HD_NOTE(_G4)

#define MARIO_GAMEOVER                                                                                                \
    HD_NOTE(_C5), HD_NOTE(_G4), H__NOTE(_E4), H__NOTE(_A4), H__NOTE(_B4), H__NOTE(_A4), H__NOTE(_AF4), H__NOTE(_BF4), \
        H__NOTE(_AF4), WD_NOTE(_G4)

#define MARIO_MUSHROOM                                                                                               \
    S__NOTE(_C5), S__NOTE(_G4), S__NOTE(_C5), S__NOTE(_E5), S__NOTE(_G5), S__NOTE(_C6), S__NOTE(_G5), S__NOTE(_GS4), \
        S__NOTE(_C5), S__NOTE(_DS5), S__NOTE(_GS5), S__NOTE(_DS5), S__NOTE(_GS5), S__NOTE(_C6), S__NOTE(_DS6),       \
        S__NOTE(_GS6), S__NOTE(_DS6), S__NOTE(_AS4), S__NOTE(_D5), S__NOTE(_F5), S__NOTE(_AS5), S__NOTE(_D6),        \
        S__NOTE(_F6), S__NOTE(_AS6), S__NOTE(_F6)

// real songs

#define PINK_PANTHER Q__NOTE(_CS5), QD_NOTE(_D5), Q__NOTE(_REST), Q__NOTE(_DS5), W__NOTE(_E5)

#define STILL_DRE                                                                                              \
    ED_NOTE(_CS6), E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_CS6), E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_CS6),     \
        E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_CS6), E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_CS6), E__NOTE(_F6),  \
        ED_NOTE(_AS6), ED_NOTE(_CS6), E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_CS6), E__NOTE(_F6), ED_NOTE(_AS6), \
        ED_NOTE(_CS6), E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_C6), E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_C6),   \
        E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_C6), E__NOTE(_F6), ED_NOTE(_AS6), ED_NOTE(_C6), E__NOTE(_F6),    \
        ED_NOTE(_GS6), ED_NOTE(_C6), E__NOTE(_F6), ED_NOTE(_GS6), ED_NOTE(_C6), E__NOTE(_F6), ED_NOTE(_GS6),   \
        ED_NOTE(_C6), E__NOTE(_F6), ED_NOTE(_GS6), ED_NOTE(_C6), E__NOTE(_F6), ED_NOTE(_GS6)

#define STILL_DRE_2                                                                                            \
    ED_NOTE(_CS5), E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_CS5), E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_CS5),     \
        E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_CS5), E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_CS5), E__NOTE(_F5),  \
        ED_NOTE(_AS5), ED_NOTE(_CS5), E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_CS5), E__NOTE(_F5), ED_NOTE(_AS5), \
        ED_NOTE(_CS5), E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_C5), E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_C5),   \
        E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_C5), E__NOTE(_F5), ED_NOTE(_AS5), ED_NOTE(_C5), E__NOTE(_F5),    \
        ED_NOTE(_GS5), ED_NOTE(_C5), E__NOTE(_F5), ED_NOTE(_GS5), ED_NOTE(_C5), E__NOTE(_F5), ED_NOTE(_GS5),   \
        ED_NOTE(_C5), E__NOTE(_F5), ED_NOTE(_GS5), ED_NOTE(_C5), E__NOTE(_F5), ED_NOTE(_GS5)

#define TETRIS_SONG                                                                                                 \
    H__NOTE(_E5), Q__NOTE(_B4), Q__NOTE(_C5), H__NOTE(_D5), Q__NOTE(_C5), Q__NOTE(_B4), H__NOTE(_A4), Q__NOTE(_A4), \
        Q__NOTE(_C5), H__NOTE(_E5), Q__NOTE(_D5), Q__NOTE(_C5), H__NOTE(_B4), Q__NOTE(_C5), H__NOTE(_D5),           \
        H__NOTE(_E5), H__NOTE(_C5), H__NOTE(_A4), W__NOTE(_A4), H__NOTE(_D5), Q__NOTE(_F5), H__NOTE(_A5),           \
        Q__NOTE(_G5), Q__NOTE(_F5), H__NOTE(_E5), Q__NOTE(_C5), H__NOTE(_E5), Q__NOTE(_D5), Q__NOTE(_C5),           \
        H__NOTE(_B4), Q__NOTE(_B4), Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_E5), H__NOTE(_C5), H__NOTE(_A4), W__NOTE(_A4)

#define MOONLIGHT_SONG                                                                                          \
    ED_NOTE(_CS2), ED_NOTE(_GS2), SD_NOTE(_CS3), SD_NOTE(_GS2), ED_NOTE(_E3), SD_NOTE(_GS3), SD_NOTE(_CS2),     \
        ED_NOTE(_CS3), SD_NOTE(_E3), SD_NOTE(_GS2), ED_NOTE(_GS3), SD_NOTE(_CS4), SD_NOTE(_CS2), ED_NOTE(_E3),  \
        SD_NOTE(_GS3), SD_NOTE(_GS2), ED_NOTE(_CS4), SD_NOTE(_E4), SD_NOTE(_CS2), ED_NOTE(_GS3), SD_NOTE(_CS4), \
        SD_NOTE(_GS2), ED_NOTE(_E4), SD_NOTE(_GS4), SD_NOTE(_CS2), ED_NOTE(_CS4), SD_NOTE(_E4), ED_NOTE(_GS2),  \
        ED_NOTE(_GS4), SD_NOTE(_CS5), SD_NOTE(_CS2), ED_NOTE(_E4), SD_NOTE(_GS4), SD_NOTE(_GS2), ED_NOTE(_CS5), \
        SD_NOTE(_E5), SD_NOTE(_CS2), ED_NOTE(_GS4), SD_NOTE(_CS5), SD_NOTE(_GS2), ED_NOTE(_E5), SD_NOTE(_GS4),  \
        SD_NOTE(_CS5), ED_NOTE(_GS5), SD_NOTE(_CS5), SD_NOTE(_E5), ED_NOTE(_GS5), ED_NOTE(_C2), ED_NOTE(_GS2),  \
        SD_NOTE(_C3), SD_NOTE(_GS2), ED_NOTE(_DS3), SD_NOTE(_GS3), SD_NOTE(_C2), ED_NOTE(_C3), SD_NOTE(_DS3),   \
        D_NOTE(_GS2), ED_NOTE(_GS3), SD_NOTE(_C4), SD_NOTE(_C2), ED_NOTE(_DS3), SD_NOTE(_GS3), SD_NOTE(_GS2),   \
        ED_NOTE(_C4), SD_NOTE(_DS4), SD_NOTE(_C2), ED_NOTE(_GS3), SD_NOTE(_C4), SD_NOTE(_GS2), ED_NOTE(_DS4),   \
        SD_NOTE(_GS4), SD_NOTE(_C2), ED_NOTE(_C4), SD_NOTE(_DS4), SD_NOTE(_GS2), ED_NOTE(_GS4), SD_NOTE(_C5),   \
        SD_NOTE(_C2), ED_NOTE(_DS4), SD_NOTE(_GS4), SD_NOTE(_GS2), ED_NOTE(_C5), SD_NOTE(_DS5), SD_NOTE(_C2),   \
        ED_NOTE(_GS5), SD_NOTE(_C5), SD_NOTE(_GS2), ED_NOTE(_DS5), SD_NOTE(_GS4), SD_NOTE(_C5), ED_NOTE(_GS5),  \
        SD_NOTE(_C5), SD_NOTE(_DS5), ED_NOTE(_GS5), ED_NOTE(_B1), ED_NOTE(_CS3), SD_NOTE(_F3), SD_NOTE(_GS2),   \
        ED_NOTE(_GS3), SD_NOTE(_CS4), SD_NOTE(_B1), ED_NOTE(_CS3), SD_NOTE(_GS3), SD_NOTE(_GS2), ED_NOTE(_CS4), \
        SD_NOTE(_F4), SD_NOTE(_B1), ED_NOTE(_GS3), SD_NOTE(_CS4), SD_NOTE(_GS2), ED_NOTE(_F4), SD_NOTE(_GS4),   \
        SD_NOTE(_B1), ED_NOTE(_CS4), SD_NOTE(_F4), SD_NOTE(_GS2), ED_NOTE(_GS4), SD_NOTE(_CS5), SD_NOTE(_B1),   \
        ED_NOTE(_F4), SD_NOTE(_GS4), SD_NOTE(_GS2), ED_NOTE(_CS5), SD_NOTE(_F5), SD_NOTE(_B1), ED_NOTE(_GS4),   \
        SD_NOTE(_CS5), SD_NOTE(_GS2), ED_NOTE(_F5), SD_NOTE(_GS5), SD_NOTE(_B1), ED_NOTE(_CS5), SD_NOTE(_F5),   \
        SD_NOTE(_GS2), ED_NOTE(_GS5), SD_NOTE(_CS5), SD_NOTE(_F5), ED_NOTE(_CS6), SD_NOTE(_F5), SD_NOTE(_GS5),  \
        ED_NOTE(_CS6), ED_NOTE(_A1), ED_NOTE(_CS3), SD_NOTE(_FS3), SD_NOTE(_A2), ED_NOTE(_A3), SD_NOTE(_CS4),   \
        SD_NOTE(_A1), ED_NOTE(_CS4), SD_NOTE(_FS4), SD_NOTE(_A2), ED_NOTE(_A4), SD_NOTE(_CS5), SD_NOTE(_A1),    \
        ED_NOTE(_CS5), SD_NOTE(_FS5), SD_NOTE(_A2), ED_NOTE(_A5), SD_NOTE(_CS5), SD_NOTE(_FS5), ED_NOTE(_CS6),  \
        SD_NOTE(_CS5), SD_NOTE(_FS5), ED_NOTE(_CS6), ED_NOTE(_A1), ED_NOTE(_CS3), SD_NOTE(_E3), SD_NOTE(_A2),   \
        ED_NOTE(_G3), SD_NOTE(_CS4), SD_NOTE(_A1), ED_NOTE(_CS4), SD_NOTE(_E4), SD_NOTE(_A2), ED_NOTE(_G4),     \
        SD_NOTE(_CS5), SD_NOTE(_A1), ED_NOTE(_CS5), SD_NOTE(_E5), SD_NOTE(_A2), ED_NOTE(_G5), SD_NOTE(_CS5),    \
        SD_NOTE(_FS5), ED_NOTE(_CS6), SD_NOTE(_CS5), SD_NOTE(_FS5), ED_NOTE(_CS6), SD_NOTE(_GS1), SD_NOTE(_C5), \
        SD_NOTE(_GS5), H__NOTE(_C6)

// Community Series theme song

#define DAYBREAK                                                                                                   \
    Q__NOTE(_GS4), Q__NOTE(_AS4), Q__NOTE(_REST), H__NOTE(_CS5), H__NOTE(_AS4), HD_NOTE(_CS5), HD_NOTE(_AS4),      \
        HD_NOTE(_REST), Q__NOTE(_GS4), Q__NOTE(_AS4), Q__NOTE(_REST), H__NOTE(_CS5), Q__NOTE(_AS4), HD_NOTE(_CS5), \
        Q__NOTE(_GS3), Q__NOTE(_GS3), Q__NOTE(_AS3), H__NOTE(_CS4), Q__NOTE(_AS3), H__NOTE(_CS4), H__NOTE(_REST),  \
        H__NOTE(_CS5), H__NOTE(_AS4), HD_NOTE(_CS5), HD_NOTE(_F5), H__NOTE(_REST), W__NOTE(_GS5), W__NOTE(_F5),    \
        W__NOTE(_CS5), HD_NOTE(_AS4), W__NOTE(_GS4)

#define WINXP_SOUND \
    W__NOTE(_DS6), Q__NOTE(_DS5), H__NOTE(_AS5), H__NOTE(_GS5), H__NOTE(_DS5), H__NOTE(_DS6), H__NOTE(_AS5)
