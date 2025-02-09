#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja *a = new Seuraaja("A");
    Seuraaja *b = new Seuraaja("B");
    Seuraaja *c = new Seuraaja("C");

    n.lisaa(a);
    n.lisaa(b);
    n.lisaa(c);
    n.tulosta();

    n.postita("Tama on viesti 1");

    n.poista(b);

    n.postita("Tama on viesti 2");


    return 0;
}
