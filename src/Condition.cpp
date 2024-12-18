#include <iostream>
#include <array>

// Fonction pour vérifier si un joueur a gagné 
bool win(std::array <char, 9>& grille, int position){
    int x = position % 3;
    int y = position / 3;

        // Vérification des lignes
        if(grille[3*y+x] == grille[3*y+0]  &&  grille[3*y+x] == grille[3*y+1]  &&  grille[3*y+x] == grille[3*y+2]){
            return true;
        }

        // Vérification des colonnes
        if(grille[3*y+x] == grille[3*0+x]  &&  grille[3*y+x] == grille[3*1+x]  &&  grille[3*y+x] == grille[3*2+x]){
            return true;
        }

        // Vérification des diagonales 
        switch (3*y+x){
            case 0:
            case 4:
            case 8:
            case 6:
            case 2:
                if(grille[3*y+x] == grille[0]  &&   grille[3*y+x] == grille[4]  &&  grille[3*y+x] == grille[8]){ 
                return true;

                }
                if(grille[3*y+x] == grille[6]  &&   grille[3*y+x] == grille[4]  &&  grille[3*y+x] == grille[2]){ 
                return true;
            }
        
        }
       
}


// Fonction pour vérifier si la grille est pleine 
// bool plein(){

// }