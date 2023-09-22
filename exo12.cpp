#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream monFlux;
    monFlux.open("/c/score.txt");
    if (monFlux)
    {}
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    monFlux.close();
    return 0;
}