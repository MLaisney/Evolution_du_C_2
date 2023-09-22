#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("C:\c\scores.txt");
    ofstream monFlux(nomFichier.c_str());
    if (monFlux)
    {
        monFlux << "Je peux ecrire une phrase dans ce fichier." << endl;
        monFlux << 48.9845 << endl;
        int age (18);
        monFlux << "J'ai" << age << " ans. Je suis majeur." << endl;
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}