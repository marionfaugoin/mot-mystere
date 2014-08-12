#ifndef DEROULEMENT_H_
#define DEROULEMENT _H_
#include <iostream>

using namespace std;

class deroulement
{
public:
    string melangerLettres(string mot);
    void deroulementJeu(int nbJoueurs);

private:
    string motMystere;
    string motSaisi;
};

#endif
