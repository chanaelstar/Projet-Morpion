#include <iostream>
#include <array>
#include "Player.hpp"
#include "Plateau.hpp"
#include "Mode_de_jeu.hpp"

bool is_end(Player player1, Player player2, std::array<char, 9>& grille){
    if(player1.win(grille)){
        std::cout << "Le joueur " << player1.name << " a gagné !" << std::endl;
        return true;
    }
    else if(player2.win(grille)){
        std::cout << "Le joueur " << player2.name << " a gagné !" << std::endl;
        return true;
    }
    else if (board_is_full(grille))
    {
        std::cout << "Match nul !" << std::endl;
        return true;
    }
    return false;
}