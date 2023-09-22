#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("/c/scores.txt");
    ofstream monFlux(nomFichier.c_str());
    if (monFlux)
    {
        int position = monFlux.tellp();
        cout << "Nous nous situons au " << position << "eme caractere du fichier." << endl;
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}