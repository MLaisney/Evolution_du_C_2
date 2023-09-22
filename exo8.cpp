#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("C:\c\scores.txt");
    ofstream monFlux(nomFichier.c_str(), ios::app);
    if (monFlux)
    {
        monFlux << "Je rajoute une ligne dans mon fichier." << endl;
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}