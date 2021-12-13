// Model
#include<iostream>
#include<string>

#include "GameManager.hpp"

int GameManager::moves = 0;
// Default object initializer
GameManager::GameManager(){};

// Display game menu in terminal
void GameManager::showGameMenu(){
    std::cout << "\nSelect an option from the following menu:" << std::endl << std::endl;

    std::cout << "=== Game Menu===" << std::endl;
    std::cout << "g - Set the grid size. Do this to change the grid size (default:4)  (optional)" << std::endl;
    std::cout << "n - Play a fresh new puzzle game" << std::endl;
    std::cout << "r - Read in from an existing game data file " << std::endl;
    std::cout << "s - Save the current game to a file" << std::endl;
    std::cout << "h - Save the game move (h)istory" << std::endl;
    std::cout << "p - Re(p)lay the game from the specified move history" << std::endl << std::endl;

    std::cout << "q - quit the game" << std::endl << std::endl;

    std::cout << "=> ";
};

MenuType* GameManager::processGameMenuOption(Puzzle aPuzzle){

    MenuType* choiceObj = new MenuType;
    char choice;

    std::cin >> choice;
    std::cout << "\n";
    
    switch(choice){
        case 'g': setGridSize();
            setChoice(choice, aPuzzle);
            choiceObj->setMenuChar(choice);
            return choiceObj;
        case 'n': 
            setChoice(choice, aPuzzle);
            choiceObj->setMenuChar(choice);
            return choiceObj;
        case 'r': loadGameFile();
            setChoice(choice, aPuzzle);
            choiceObj->setMenuChar(choice);
            return choiceObj;
        case 's': 
            setChoice(choice, aPuzzle);
            choiceObj->setMenuChar(choice);
            return choiceObj;
        case 'h':
            setChoice(choice, aPuzzle);
            choiceObj->setMenuChar(choice);
            return choiceObj;
        case 'p': 
            setChoice(choice, aPuzzle);
            choiceObj->setMenuChar(choice);
            return choiceObj;
        case 'q': 
            setChoice(choice, aPuzzle);
            choiceObj->setMenuChar(choice);
            return choiceObj;
        default:
            std::cout << "Invalid input" << std::endl;
            break;
    };
}

void GameManager::setChoice(char choice, Puzzle aPuzzle){

    aPuzzle.setChosen(choice);
};

void GameManager::setGridSize(){};

void GameManager::loadGameFile(){};

void GameManager::saveGame(){};