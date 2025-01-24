#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string pw, int jauho, int vesi);

private:
    string password;
    int flour;
    int water;
    int makepizza();
};

#endif // ITALIANCHEF_H
