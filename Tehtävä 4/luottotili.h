#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"
class Luottotili: public Pankkitili
{
protected:
    double luottoRaja;

public:
    Luottotili(string nimi, double maara);
    ~Luottotili();
    bool deposit(double maara) override;
    bool withdraw(double maara) override;

};



#endif // LUOTTOTILI_H
