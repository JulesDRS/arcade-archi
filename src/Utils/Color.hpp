/*
** EPITECH PROJECT, 2024
** Arcade [WSL: Ubuntu]
** File description:
** Color.hpp
*/

#include <tuple>

#ifndef D4F0529D_2DE9_49D1_9CEF_420939F611EA
    #define D4F0529D_2DE9_49D1_9CEF_420939F611EA

    namespace utils {

        /**
         * @brief Classe de représentation de couleur contenant les 4 variantes de celle-ci.
         * 
         */
        class Color {

            public:
                int a;
                int r;
                int g;
                int b;

                Color(int a, int r, int g, int b);
                void setColor(int a, int r, int g, int b);
                Color getColor() const;

        };

    }

#endif /* D4F0529D_2DE9_49D1_9CEF_420939F611EA */
