#include<iostream>

#include "GameManager.hpp"
#include "SlidingPuzzle.hpp"

using namespace std;

int main(){

    GameManager myGame;
    Puzzle myPuzzle;
    MenuType option;
    myGame.showGameMenu();
    option = myGame.processGameMenuOption(myPuzzle);
    
    if(option == NEW_GAME){
            std::cout << "Hello";
            myPuzzle.drawGrid();
            myPuzzle.play();
        }
    // do{
        

    //   }while(option != QUIT);
    
    return 0;
}