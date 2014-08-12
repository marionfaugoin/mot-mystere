#include "deroulement.h"

#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>

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
