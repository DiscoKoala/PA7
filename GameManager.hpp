#ifndef GAME_MANAGER
#define GAME_MANAGER

#include "SlidingPuzzle.hpp"
#include "GameMenuType.hpp"


class GameManager: public MenuType{

    public:

        GameManager();

        static int moves;
        
        void showGameMenu();
        MenuType* processGameMenuOption(Puzzle aPuzzle);
        void setChoice(char choice, Puzzle aPuzzle);
        void setGridSize();
        void loadGameFile();
        void saveGame();
        

    private:
        MenuType menuChoice;

};


#endif