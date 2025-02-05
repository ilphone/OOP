#include "luottotili.h"

Luottotili::Luottotili(string nimi, double maara)
    : Pankkitili(nimi), luottoRaja(maara) {
    saldo = 0;

}

Luottotili::~Luottotili(){

}

bool Luottotili::deposit(double maara){
    if(maara>0){
        saldo += maara;
        if(saldo > 0){
            saldo = 0;
        }
        return true;
    }
    return false;
}


bool Luottotili::withdraw(double maara){


    if(maara > 0 && (saldo - maara) >= -luottoRaja){
        cout <<"kay taal" << endl;
        saldo -= maara;
        return true;
    }
    return false;
}
