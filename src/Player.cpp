#include <iostream>
#include "Player.hpp"

// création du joueur
Player create_player(){
    Player player;
    std::cin >> player.name;
    std::cout << "Choisissez un symbole : ";
    std::cin >> player.symbol;
    return player;

};

