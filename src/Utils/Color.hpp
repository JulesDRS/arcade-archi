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

                utils::Color::Color(int a, int r, int g, int b) {
                    this->a = a;
                    this->r = r;
                    this->g = g;
                    this->b = b;
                }

                void utils::Color::setColor(utils::Color color) {
                    this->a = color.a;
                    this->r = color.r;
                    this->g = color.g;
                    this->b = color.b;
                }
                
                utils::Color utils::Color::getColor() const {
                    return {this->a, this->r, this->g, this->b};
                }

        };

    }

#endif /* D4F0529D_2DE9_49D1_9CEF_420939F611EA */
