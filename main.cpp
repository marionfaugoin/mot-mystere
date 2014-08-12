#include "deroulement.h"

#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>

/* 		
		Le jeu que nous voulons réaliser consiste à retrouver un mot dont les lettres ont été mélangées. 
		Mode 1 joueur: Le mot est pioché dans un fichier dictionnaire.
		Mode 2 joueurs: Le premier doit donner un mot, le second doit le retrouver.

		Dans les deux cas, le joueur a 5 essais pour trouver le bon mot, au bout desquels le mot est donné et la console demande au joueur s'il veut rejouer ou non.
*/

void deroulementJeu(int nb);

using namespace std;

int main()
{
    int nb;

    cout << "Bienvenue! " << endl << "Ce jeu se joue a un ou deux joueurs." << endl;
    cout << endl;
    cout << "Nombre de joueurs ?: " << endl; cin >> nb;
    cout << endl;
    cout << "Good luck ;)" << endl;
    cout << endl;

    deroulementJeu(nb);

    return 0;
}
