#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "luottotili.h"

class Asiakas
{
public:
    Asiakas(string nimi, double luotonMaara);
    ~Asiakas();
    void showSaldo();
    string getNimi();
    bool talletus(double maara);
    bool nosto(double maara);
    bool luotonMaksu(double maara);
    bool luotonNosto(double maara);
    bool tiliSiirto(double maara, Asiakas &p);
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

};

#endif // ASIAKAS_H
