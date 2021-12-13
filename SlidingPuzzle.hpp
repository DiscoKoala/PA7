#ifndef SLIDE_PUZZLE
#define SLIDE_PUZZLE

#include "GameMenuType.hpp"

class Puzzle: public MenuType{

    public:

        const static int DEFAULT_X_VAL = 4;
        const static int DEFAULT_Y_VAL = 4;
        
        int INITIAL_GRID [DEFAULT_Y_VAL][DEFAULT_X_VAL];
        int CURRENT_GRID [DEFAULT_Y_VAL][DEFAULT_X_VAL];
        int TARGET_GRID [DEFAULT_Y_VAL][DEFAULT_X_VAL] = {{1, 2, 3, 4},
                                                          {5, 6, 7, 8},
                                                          {9,10,11,12},
                                                          {13,14,15,0}};
        
        Puzzle();
        Puzzle(int x, int y);

        MenuType chosen;
        void drawGrid();
        void play();
        void setChosen(char option);

        // bool isTileLeftEmpty(int row, int col);
        // bool isTileRightEmpty(int row, int col);
        // bool isTileAboveEmpty(int row, int col);
        // bool isTileBelowEmpty(int row, int col);

        private:
            int yGridVal, xGridVal;
};


#endif