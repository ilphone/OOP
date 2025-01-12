#include <iostream>
#include <time.h>
#include <stdlib.h>

int game(int maxnum);

using namespace std;

int main()
{
    int maara = game(40);
    cout << "Arvausten maara oli: " << maara << endl;
    return 0;
}


int game(int maxnum){
    srand(time(NULL));
    int arvaus = 0, randomi = 0, arvaustenmaara = 0;
    randomi = rand()%maxnum;
    cout << "Arvaa lukua 1-" << maxnum << ": ";
    while(arvaus != randomi){
        cin >> arvaus;
        arvaustenmaara++;
        if (arvaus == randomi) {
            cout << "Oikein! Luku oli " << randomi << endl;
        } else if (arvaus > randomi) {
            cout << "Vaarin, luku on pienempi, arvaa uudelleen: ";
        } else {
            cout << "Vaarin, luku on suurempi, arvaa uudelleen: ";
        }
    }
    return arvaustenmaara;
}
