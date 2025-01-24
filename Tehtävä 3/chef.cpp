#include "chef.h"

Chef::Chef(string name) {
    chefName = name;
    cout << "Chef " << chefName << " konstruktori" << endl;


}
Chef::Chef(){
    cout <<"Default konstruktori" << endl;
}

Chef::~Chef(){
    cout << "Chef " << chefName << " destruktori" << endl;
}

string Chef::getName(){
    return chefName;
}

int Chef::makeSalad(int ainekset){
    cout << chefName
         << " voi tehda "
         << ainekset
         << " aineksesta "
         << ainekset/5
         << " salaattiannosta"
         << endl;
    return ainekset / 5;
}

int Chef::makeSoup(int ainekset){
    cout << chefName
    << " voi tehda "
    << ainekset
    << " aineksesta "
    << ainekset/4
    << " soppa-annosta"
    << endl;
    return ainekset / 4;
}
