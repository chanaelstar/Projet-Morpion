#include <iostream>
#include <array>
#include "Mode_de_jeu.hpp"
#include "Player.hpp"
#include "Utils.hpp"
#include "Plateau.hpp"

// Deux joueurs
void game_2_players(std::array<char, 9> &grille,std::array<char, 9> &tab)
{
     Player player1;
     Player player2;
     std::cout << "Entrez le nom du joueur 1 : ";
     player1 = create_player();
     std::cout << "Entrez le nom du joueur 2 : ";
     player2 = create_player();

     player1.can_play = true; // todo : le faire aléatoirement
     while (!is_end(player1, player2, grille))
     {
          if (player1.can_play)
          {
               do
               {
                    std::cout << "C'est au tour de : " << player1.name << std::endl;
                    std::cout << "Choisir une position entre 0 et 8" << std::endl;
                    draw_game_board(tab);
                    std::cin >> player1.choice;
               } while (!player1.valid_choice(player2, grille));
               grille[player1.choice] = player1.symbol;
               draw_game_board(grille);
               player1.can_play = false;
               player2.can_play = true;
          }
          else if (player2.can_play)
          {
               do
               {
                    std::cout << "C'est au tour de : " << player2.name << std::endl;
                    std::cout << "Choisir une position entre 0 et 8" << std::endl;
                    draw_game_board(tab);
                    std::cin >> player2.choice;
               } while (!player2.valid_choice(player1, grille));
               grille[player2.choice] = player2.symbol;
               draw_game_board(grille);
               player2.can_play = false;
               player1.can_play = true;
          }
     }
}

// Un joueur et IA