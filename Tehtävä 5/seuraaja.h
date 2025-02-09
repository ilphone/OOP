#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>

using namespace std;

class Seuraaja
{
private:
    string nimi;
public:
    Seuraaja(string seuraaja);
    ~Seuraaja();
    Seuraaja* next = nullptr;
    string getNimi();
    void paivitys(string data);
};

#endif // SEURAAJA_H
