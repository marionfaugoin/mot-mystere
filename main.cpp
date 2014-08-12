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
	
	Changements apportés à la version basique:
	- Ajouter des sauts de ligne au début
	- Utiliser plusieurs endl, par exemple, pour créer plusieurs retours à la ligne.
	- Proposer au joueur de faire une nouvelle partie. Actuellement, une fois le mot trouvé, le programme s'arrête. Et si vous demandiez « Voulez-vous faire une autre partie ? (o/n) ». 
	En fonction de la réponse saisie, vous reprenez au début du programme. 
	- Fixer un nombre maximal de coups pour trouver le mot mystère.
	- Piocher dans un dictionnaire.
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
