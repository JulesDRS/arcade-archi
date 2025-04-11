/*
** EPITECH PROJECT, 2024
** Arcade [WSL: Ubuntu]
** File description:
** Utils.hpp
*/

#ifndef BA264BFB_8091_4611_97EF_EDE779EBA685
    #define BA264BFB_8091_4611_97EF_EDE779EBA685

    namespace utils {

        /**
         * @brief Classe énumérative des différents évènements possibles dans le programme
         * 
         */
        enum class Event {
            UNKNOWN, UP, DOWN, LEFT, RIGHT,
            ENTER, ESCAPE, SPACE,
            W, A, S, D, Z, Q, C, B, E,
            RESTART, GRAPHICS_LIBRARY, GAME_LIBRARY, // restart, next graphics library, next game
            MENU, EXIT, // go back to the menu, exit the program
            MOUSE_CLICK_RIGHT, MOUSE_CLICK_LEFT, NONE
        };

        /**
         * @brief Classe énumérative du type de la librairie chargée
         * 
         */
        enum class LibType {
            Graphical,
            Game
        };

        /**
         * @brief Structure représentant un vecteur en 2 dimensions (x, y)
         * 
         */
        typedef struct Vector2i_s {
            int x;
            int y;
        } Vector2i;

    }

#endif /* BA264BFB_8091_4611_97EF_EDE779EBA685 */
