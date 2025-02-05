#include "asiakas.h"

Asiakas::Asiakas(string nimi,  double luotonMaara) : nimi(nimi), kayttotili(nimi), luottotili(nimi, luotonMaara) {

}

Asiakas::~Asiakas(){

}

void Asiakas::showSaldo(){
    cout << "Asiakas " << nimi << endl;
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

string Asiakas::getNimi(){
    return nimi;
}

bool Asiakas::talletus(double maara){
    return kayttotili.deposit(maara);
}

bool Asiakas::nosto(double maara){
    return kayttotili.withdraw(maara);
}

bool Asiakas::luotonMaksu(double maara){
    return luottotili.deposit(maara);
}

bool Asiakas::luotonNosto(double maara){
    return luottotili.withdraw(maara);
}

bool Asiakas::tiliSiirto(double maara, Asiakas &siirretaan){

    if (maara > 0 && kayttotili.getBalance() >= maara){
    kayttotili.withdraw(maara);
    siirretaan.talletus(maara);
    return true;
    }
    return false;
}
