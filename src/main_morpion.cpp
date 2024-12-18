#include <iostream>
#include "Player.hpp"
#include "Plateau.hpp"
#include "Condition.hpp"
#include "Mode_de_jeu.hpp"


int main(){
    // Menu de démarrage
    std::cout << "Bienvenue dans le jeu du Morpion" << std::endl;
    std::cout << "Veuillez choisir un mode de jeu :" << std::endl;
    int mode_jeu {};
    std::cout << "1. Deux joueurs" << std::endl;
    std::cout << "2. Un joueur contre l'IA" << std::endl;
    std::cin >> mode_jeu;

    while(mode_jeu!=1 && mode_jeu!=2){   
        
        std::cout << "Veuillez choisir un mode de jeu entre 1 et 2 : " << std::endl;
        std::cin >> mode_jeu;
    }

    
     // affiche le plateau chiffre 
    std::array <char, 9> tab {'0', '1', '2', '3', '4', '5', '6', '7','8'};
    draw_game_board(tab);

    // affiche le plateau 
    std::array <char, 9> grille {};
    grille.fill('.');
    draw_game_board(grille);
    
    if(mode_jeu==1){
            // std::cout << "Entrez le nom du joueur 1 : ";
            // Player player1 {create_player()};
            // std::cout << "Entrez le nom du joueur 2 : ";
            // Player player2 {create_player()};
            Player player1;
            Player player2;
            game_2_players(player1,player2,grille);

        }else{
            std::cout << "Entrez le nom du joueur : ";
            Player player {create_player()};
    }




}