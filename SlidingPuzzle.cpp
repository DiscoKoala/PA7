// View
#include<iostream>
#include<string>

#include "SlidingPuzzle.hpp"
#include "GameMenuType.hpp"

// Default object initialization
Puzzle::Puzzle(){};

Puzzle:: Puzzle(int x, int y): yGridVal(y), xGridVal(x){};

void Puzzle::drawGrid(){

    for(int i = 0; i < DEFAULT_X_VAL; i++){
        for(int j = 0; j < DEFAULT_Y_VAL; i++){
            std::cout << this->TARGET_GRID[i][j];
        }
        std::cout << std::endl;
    }

};

void Puzzle::play(){

};

void Puzzle::setChosen(char option){
    chosen.userInput = option;
};


// bool Puzzle::isTileLeftEmpty(int row, int col){};

// bool Puzzle::isTileRightEmpty(int row, int col){};

// bool Puzzle::isTileAboveEmpty(int row, int col){};

// bool Puzzle::isTileBelowEmpty(int row, int col){};
