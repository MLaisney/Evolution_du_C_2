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
        cout << "Pas de souci lors de l'ouverture du fichier." << endl;
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}