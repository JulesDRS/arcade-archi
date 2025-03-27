/*
** EPITECH PROJECT, 2024
** Arcade [WSL: Ubuntu]
** File description:
** DrawableObjects.hpp
*/

#include <utility>
#include "Color.hpp"
#include "Utils.hpp"

#ifndef B850F1DF_67F1_4E73_8296_B48759CE6C77
    #define B850F1DF_67F1_4E73_8296_B48759CE6C77

    namespace utils {

        /**
         * @brief Classe parente servant à stoquer un objet à print avec tous ses paramètres.
         * 
         */
        class DrawableObjects {

            protected:
                utils::Vector2i pos;
                utils::Vector2i dimensions;
                Color color;

            public:
                void setPos(utils::Vector2i position);
                utils::Vector2i getPos() const;
                void setDimensions(utils::Vector2i dimensions);
                utils::Vector2i getDimensions() const;

        };
    }

#endif /* B850F1DF_67F1_4E73_8296_B48759CE6C77 */
