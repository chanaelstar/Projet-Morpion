#include <iostream>
#include <array>
#include "Player.hpp"
#include "Plateau.hpp"
#include "Mode_de_jeu.hpp"
#include <random>

bool is_end(Player player1, Player player2, std::array<char, 9> &grille)
{
    if (player1.win(grille))
    {
        std::cout << "Le joueur " << player1.name << " a gagné !" << std::endl;
        return true;
    }
    else if (player2.win(grille))
    {
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

void random_player_start(Player &player1, Player &player2)
{
    srand(time(0));
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> d1(1, 2);
    int random_number{d1(gen)};

    if (random_number == 1)
    {
        player1.can_play = true;
    }
    else
    {
        player2.can_play = true;
    }
}

