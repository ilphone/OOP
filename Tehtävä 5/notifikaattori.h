#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "seuraaja.h"

class Notifikaattori {
private:
    Seuraaja *seuraajat = nullptr;

public:
    Notifikaattori();
    void lisaa(Seuraaja *lisays);
    void poista(Seuraaja *poisto);
    void tulosta();
    void postita(string data);
};

#endif // NOTIFIKAATTORI_H
