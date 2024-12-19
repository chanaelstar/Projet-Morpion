#include <iostream>
#include "Player.hpp"
#include "Plateau.hpp"
#include "Mode_de_jeu.hpp"
#include "Utils.hpp"
#include <random>

int main()
{
    // Menu de démarrage
    std::cout << "Bienvenue dans le jeu du Morpion" << std::endl;
    std::cout << "Veuillez choisir un mode de jeu :" << std::endl;
    int mode_jeu{};
    std::cout << "1. Deux joueurs" << std::endl;
    std::cout << "2. Un joueur contre l'IA" << std::endl;
    std::cin >> mode_jeu;

    while (mode_jeu != 1 && mode_jeu != 2 && !isdigit(mode_jeu))
    {

        std::cout << "Veuillez choisir un mode de jeu entre 1 et 2 : " << std::endl;
        std::cin >> mode_jeu;
    }

    // Déclaration de la grille (avec chiffre et vide)
    std::array<char, 9> tab{'0', '1', '2', '3', '4', '5', '6', '7', '8'}; // déclaration de la grille (avec chiffre)
    std::array<char, 9> grille{};                                         // déclaration de la grille vide
    grille.fill('.');

    if (mode_jeu == 1)
    {
        game_2_players(grille, tab);
    }
    else
    {
        game_IA(grille, tab);
    }
}