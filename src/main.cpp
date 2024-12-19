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

    // Gestions d'erreurs de saisies 
    while (true) {
        std::cin >> mode_jeu;
        if (std::cin.fail() || mode_jeu < 1 || mode_jeu > 2) {
            std::cout << "Entree invalide. Veuillez entrer un nombre entre 1 et 2." << std::endl;
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break; 
        }
    }

    // Déclaration de la grille (avec chiffre et vide)
    std::array<char, 9> tab{'0', '1', '2', '3', '4', '5', '6', '7', '8'}; // déclaration de la grille (avec chiffre)
    std::array<char, 9> grille{};                                         // déclaration de la grille vide
    grille.fill('.'); // remplit la grille 

    if (mode_jeu == 1)
    {
        game_2_players(grille, tab);
    }
    else
    {
        game_IA(grille, tab);
    }
}