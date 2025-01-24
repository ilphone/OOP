#include "italianchef.h"

ItalianChef::ItalianChef(string name) {
    chefName = name;
    password = "pizza";
    cout << "Chef " << chefName << " konstruktori" << endl;
}

ItalianChef::~ItalianChef(){
    cout << "Chef " << chefName << " destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int jauho, int vesi){
    if(pw == password){
        cout << "Salasana oikein!" << endl;
        flour = jauho;
        water =  vesi;
        int monta = makepizza();
        cout << "ItalianChef "
             << chefName
             << " voi tehda "
             << jauho
             << " jauhosta ja "
             << vesi
             << " vedesta "
             << monta
             << " pizzaa"
             << endl;

        return true;
    }
    return false;
}

int ItalianChef::makepizza(){
    int maara = min(water, flour);
    return maara/5;
}
