#pragma once
#include <iostream>
#include <array>
#include "Player.hpp"

bool is_end(Player player1, Player player2, std::array<char, 9>& grille);
void random_player_start(Player &player1, Player &player2);
void edit_tab(int player_choice, std::array<char, 9>& tab);