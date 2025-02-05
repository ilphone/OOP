#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

    class Pankkitili
{
protected:
    string omistaja;
    double saldo;

public:
    virtual ~Pankkitili();
    Pankkitili(string nimi);
    virtual double getBalance();
    virtual bool deposit(double maara);
    virtual bool withdraw(double maara);
};

#endif // PANKKITILI_H
