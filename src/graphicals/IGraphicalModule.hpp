/*
** EPITECH PROJECT, 2024
** Arcade [WSL: Ubuntu]
** File description:
** IGraphicalModule.hpp
*/

#ifndef DA34D4F4_AD51_478A_971A_D26322681133
    #define DA34D4F4_AD51_478A_971A_D26322681133

    #include <string>
    #include <vector>
    #include "../Utils/DrawableObjects.hpp"
    #include "../Utils/Metadata.hpp"

    /**
     * @brief Interface d'implémentation des différentes librairie graphiques.
     *
     */
    class IGraphicalModule {

        public:
            virtual ~IGraphicalModule() = default;

            virtual void init() = 0;
            virtual void close() = 0;
            virtual std::string getName() const = 0;
            virtual utils::Metadata getMetadata() const = 0;

            virtual void clearScreen() = 0;
            virtual void refresh(std::vector<utils::DrawableObjects> drawableObjects) = 0;

            virtual utils::Event getEvent() const = 0;
            virtual bool isKeyPressed() const = 0;

    };

#endif /* DA34D4F4_AD51_478A_971A_D26322681133 */
