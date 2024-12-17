#include <iostream>
#include <array>

bool win(std::array <char, 9>& grille, int position){
    int x = position/3;
    int y = position % 3;

    for(int i = 0; i < 3; i++){
        // Vérification des lignes
        if(grille[3*x+y] == grille[3*i+y]){
            
        }

    }
}