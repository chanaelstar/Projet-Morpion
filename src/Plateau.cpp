#include <iostream>
#include <array>

void draw_game_board(std::array <char, 9> tab){
    for(int x=0 ; x < 3 ; x++){
        for(int y=0 ; y < 3 ; y++){
            std::cout << "| " << tab[3*x + y] << " ";
        }
        std::cout << "|";
        std::cout << std::endl;
    }
};