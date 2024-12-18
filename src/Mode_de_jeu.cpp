#include <iostream>
#include <array>
#include "Mode_de_jeu.hpp"
#include "Player.hpp"

// Deux joueurs 
void game_2_players(Player player1, Player player2, std::array <char, 9>& grille){
       std::cout << "Entrez le nom du joueur 1 : ";
            player1= create_player();
            std::cout << "Entrez le nom du joueur 2 : ";
            player2 = create_player();

            //TODO : une boucle while qui s'arrête quand 1 joueur gagne ou quand il y a un match nul
            //while(!player1.win() OU !player2.win() OU match nul)
            //{ Les joueurs jouent }
            //Utilise ce que tu as fait dans condition
}

// Un joueur et IA 