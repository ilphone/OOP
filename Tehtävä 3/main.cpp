#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef A("x");
    int maara = 19;
    A.makeSoup(maara);
    A.makeSalad(20);


    ItalianChef B("y");
    cout << B.getName() << endl;
    B.makeSoup(15);
    B.makeSalad(20);
    B.askSecret("pizza", 15, 15);
    return 0;
}
