#include<iostream>
#include<string>

#include "GameMenuType.hpp"

MenuType::MenuType(){
    userInput = ' ';
};

void MenuType::setMenuChar(char option){
    userInput = option;
}