#include <iostream>
#include "Player.hpp"
#include <array>
#include <random>

// création du joueur
Player create_player()
{
    Player player;
    std::cin >> player.name;
    std::cout << "Choisissez un symbole : ";
    std::cin >> player.symbol;
    return player;
};

//création d'une IA
Player create_IA(Player player)
{
    Player IA;
    IA.name = "ChatGPT";
    srand(time(0));
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> d1('A', 'Z');
    char random_symbol;
    do
    {
        random_symbol = d1(gen);
    } while (random_symbol == player.symbol);
    IA.symbol = random_symbol;
    std::cout << "Nom de l'IA : " << IA.name << std::endl;
    std::cout << "Symbole de l'IA : " << IA.symbol << std::endl;
    return IA;
}

int random_IA_choice()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> d1(0, 8);
    int random_number{d1(gen)};
    return random_number;
}


// Fonction pour vérifier si un joueur a gagné
bool Player::win(std::array<char, 9> &grille)
{
    for (int i = 0; i < grille.size(); i++)
    {
        // Vérification des lignes
        if (grille[3 * i] == symbol && grille[3 * i + 1] == symbol && grille[3 * i + 2] == symbol)
        {
            return true;
        }

        // Vérification des colonnes
        if (grille[i] == symbol && grille[i + 3] == symbol && grille[i + 6] == symbol)
        {
            return true;
        }
    }
    // Vérification des diagonales
    if (grille[0] == symbol && grille[4] == symbol && grille[8] == symbol)
    {
        return true;
    }
    if (grille[6] == symbol && grille[4] == symbol && grille[2] == symbol)
    {
        return true;
    }
    return false;
}

bool Player::valid_choice(Player enemy, std::array<char, 9> &grille)
{
    if ((choice >= 0 && choice <= 8) && grille[choice] != symbol && grille[choice] != enemy.symbol)
    {
        return true;
    }
    return false;
}


