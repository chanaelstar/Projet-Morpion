#include <iostream>
#include <array>

void draw_game_board(std::array <char, 9>& tab){
    for(int x=0 ; x < 3 ; x++){
        for(int y=0 ; y < 3 ; y++){
            std::cout << "| " << tab[3*x + y] << " ";
        }
        std::cout << "|";
        std::cout << std::endl;
    }
};

// Fonction pour vérifier si la grille est pleine
bool board_is_full(std::array<char, 9> &grille)
{
    for (int i = 0; i < grille.size(); i++)
    {
        if (grille[i] == '.')
        {
            return false; // La grille n'est pas pleine s'il reste au moins une case vide.
        }
    }
    return true; // Si toutes les cases sont occupées, la grille est pleine.
}
