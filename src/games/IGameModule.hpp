/*
** EPITECH PROJECT, 2024
** Arcade [WSL: Ubuntu]
** File description:
** IGameModule.hpp
*/

#ifndef D06C3A02_6707_43CE_8DC9_36E41BBF112A
    #define D06C3A02_6707_43CE_8DC9_36E41BBF112A

    #include <string>
    #include "../graphicals/IGraphicalModule.hpp"

    /**
     * @brief Interface d'implémentation des différents jeux.
     * 
     */
    class IGameModule {

        public:
            virtual ~IGameModule() = default;

            virtual void init() = 0;
            virtual void reset() = 0;
            virtual void close() = 0;
            virtual void launch() = 0;
            virtual void update(utils::Event event) = 0;

            virtual bool isGameOver() = 0;
            virtual int getScore() const = 0;
            virtual std::string getGameName() const = 0;
            virtual std::vector<utils::DrawableObjects> getDrawableObjects() const = 0;
            virtual utils::Metadata getMetadata() const = 0;

    };

#endif /* D06C3A02_6707_43CE_8DC9_36E41BBF112A */

/*

 * retirer nles attributs des interfaces
 * faire un namespace avec tout ce qui est relatif au core
 ? implémenter un système de grille pour l'affichage

*/
