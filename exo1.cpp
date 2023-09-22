#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user ("Lucien");
    user[0] = 'J';
    user[2] = 'l';
    cout << "Vous etes : " << user << endl;
    return 0;
}