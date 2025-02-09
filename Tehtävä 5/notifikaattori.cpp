#include "notifikaattori.h"

Notifikaattori::Notifikaattori() : seuraajat(nullptr) {}

void Notifikaattori::lisaa(Seuraaja *lisays){


    if(seuraajat == nullptr){
        seuraajat = lisays;
    }
    else{
        Seuraaja *vali = seuraajat;
        while(vali->next){
            vali = vali->next;
        }
        vali->next = lisays;
    }
}

void Notifikaattori::poista(Seuraaja *poisto){
    if(seuraajat == poisto){
        Seuraaja *vali = seuraajat;
        seuraajat = seuraajat->next;
        delete vali;
        return;
    }

    Seuraaja *nykyinen = seuraajat;
    while(nykyinen->next && nykyinen->next != poisto){
        nykyinen = nykyinen->next;
    }


    if(nykyinen->next){
        Seuraaja *vali = nykyinen->next;
        nykyinen->next = vali->next;
        delete vali;

    }

}

void Notifikaattori::tulosta(){
    Seuraaja *vali = seuraajat;
    while(vali){
        cout << "Seuraaja " << vali->getNimi() << endl;
        vali = vali->next;
    }
}

void Notifikaattori::postita(string data){
    Seuraaja *vali = seuraajat;
    while(vali){
        vali->paivitys(data);
        vali = vali->next;
    }
}





