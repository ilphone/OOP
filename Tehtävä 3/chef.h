#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;

class Chef
{
public:
    Chef(string name);
    Chef();
    ~Chef();
    string getName();
    int makeSalad(int ainekset);
    int makeSoup(int ainekset);

protected:
    string chefName;
};

#endif // CHEF_H
