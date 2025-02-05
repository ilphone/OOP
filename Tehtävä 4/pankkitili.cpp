#include "pankkitili.h"


Pankkitili::Pankkitili(string nimi){
    omistaja = nimi;
    saldo = 0;
}

Pankkitili::~Pankkitili(){
}

double Pankkitili::getBalance(){
    return saldo;
}

bool Pankkitili::deposit(double maara){
    if(maara < 0){
        return false;
    }
    saldo += maara;
    return true;
}

bool Pankkitili::withdraw(double maara){
    if(maara > saldo){
        return false;
    }
    saldo -= maara;
    return true;
}
