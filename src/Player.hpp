#pragma once
#include <iostream>


struct Player{ 
    std::string name{};
    char symbol{};
    bool win(std::array<char, 9>& grille);
    bool can_play{false};
    int choice;

    bool valid_choice(Player enemy, std::array<char, 9> &grille);
};

Player create_player();
