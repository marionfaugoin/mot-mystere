#include "deroulement.h"
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include <istream>
#include <fstream>

using namespace std;

string melangerLettres(string mot)
{
    string motMel;
    int position;
    srand(time(0));

    while (mot.size()!=0)
    {
        position = rand() % mot.size();
        motMel += mot[position];
        mot.erase(position, 1);
    }
    return motMel;
}

void deroulementJeu(int nbJoueurs)
{
    char choix = 'o';
    string motMystere;

    // MODE 2 JOUEURS
    if (nbJoueurs==2)
    {
        cout << "Vous avez choisi le mode 2 joueurs. " << endl;
            while (choix=='o')
            {
                // Saisie du mot
                cout << "Saisissez un mot: " << endl ; cin >> motMystere;
                for (int i = 0;i<30;i++)
                {
                    cout << endl;
                }

                // Mélange du mot
                string motMelange;
                motMelange = melangerLettres(motMystere);

                // Boucle tant que le mot correct n'est pas trouvé!
                string motSaisi;
                int i = 0;
                do
               {
                  cout << endl << "Quel est ce mot ? " << motMelange << endl;
                  cin >> motSaisi;

                  if (motMystere == motSaisi)
                  {
                     cout << "Bravo ! Vous gagnez le droit de rejouer a ce super jeu de la morkitu ! =D " << endl;
                     cout << "---------------------------------------------------------------------------" << endl;
                     cout << "Voulez-vous refaire une partie? (o/n)" << endl ; cin >> choix;
                  }
                  else
                  {
                     if (i!=4)
                     {
                        cout << "Ce n'est pas le mot ! Essayez encore espece de merde :p" << endl;
                        cout << "---------------------------------------------------------------------------" << endl;
                        i++;
                     }
                     else
                     {
                        // au bout de 5 essais, le programme s'arrête :p
                        cout << "Vous avez epuise tous vos essais! Le mot etait: " << motMystere << endl;
                        cout << "Vous avez perdu le droit de rejouer." << endl;
                        cout << "---------------------------------------------------------------------------" << endl;
                        motSaisi=motMystere;
                        choix='n';
                     }
                  }
               } while (motMystere != motSaisi);

               if (choix=='n')
               {
                   system("PAUSE");
               }
            }
    }

    // MODE 1 JOUEUR
    else
    {
        cout << "Vous avez choisi le mode 1 joueur. " << endl;
        //Code si on ne compte qu'un seul joueur.
        ifstream Dico("dictionnaire.txt");

        if(!Dico)
        {
            cout << "Erreur dans l'ouverture du fichier dictionnaire." << endl;
        }

        else
        {
            while (choix=='o')
            {

                //selection mot dans dico random
                int m;
                int j = 0;
                string ligne;
                m = rand() % 20;

                while(j!=m)
                {
                    getline(Dico, ligne);
                    j++;
                }
                motMystere = ligne;

                // Mélange du mot
                string motMelange;
                motMelange = melangerLettres(motMystere);

                // Boucle tant que le mot correct n'est pas trouvé!
                string motSaisi;
                int i = 0;
                do
               {
                  cout << endl << "Quel est ce mot ? " << motMelange << endl;
                  cin >> motSaisi;

                  if (motMystere == motSaisi)
                  {
                     cout << "Bravo ! Vous gagnez le droit de rejouer a ce super jeu de la morkitu ! =D " << endl;
                     cout << "---------------------------------------------------------------------------" << endl;
                     cout << "Voulez-vous refaire une partie? (o/n)" << endl ; cin >> choix;
                  }
                  else
                  {
                     if (i!=4)
                     {
                        cout << "Ce n'est pas le mot ! Essayez encore espece de merde :p" << endl;
                        cout << "---------------------------------------------------------------------------" << endl;
                        i++;
                     }
                     else
                     {
                        // au bout de 5 essais, le programme s'arrête :p
                        cout << "Vous avez epuise tous vos essais! Le mot etait: " << motMystere << endl;
                        cout << "Vous avez perdu le droit de rejouer." << endl;
                        cout << "---------------------------------------------------------------------------" << endl;
                        motSaisi=motMystere;
                        choix='n';
                     }
                  }
               } while (motMystere != motSaisi);

               if (choix=='n')
               {
                   system("PAUSE");
               }
            }
        }
    }
}
