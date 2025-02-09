#include "seuraaja.h"



Seuraaja::Seuraaja(string seuraaja) : nimi(seuraaja), next(nullptr) {}

Seuraaja::~Seuraaja(){}

string Seuraaja::getNimi(){
    return nimi;
}

void Seuraaja::paivitys(string data){
    cout << "Seuraaja " << nimi << " sai viestin: " << data << endl;
}
