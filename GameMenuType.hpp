#ifndef MENU_TYPE
#define MENU_TYPE

// #include "SlidingPuzzle.hpp"

static const char NEW_GAME = 'n';
static const char QUIT = 'q';

class MenuType{

    public:

        
        char userInput;

        MenuType();

        void setMenuChar(char option);

        void operator = (const MenuType* game){
            userInput = game->userInput;
        }

        friend bool operator == (const MenuType& game1, const char& NEW_GAME){
            if(game1.userInput == NEW_GAME){
                return true;
            };
        }

        friend bool operator != (const MenuType& game1, const char& QUIT){
            if(game1.userInput != QUIT){
                return true;
            };
        }

    private:
        

};


#endif