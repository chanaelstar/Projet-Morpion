#pragma once
#include <iostream>


struct Player{ 
    std::string name{};
    char symbol{};
    bool win(std::array<char, 9>& grille, int position);
};

Player create_player();
