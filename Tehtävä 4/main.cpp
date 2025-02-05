#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas A("A", 400);
    Asiakas B("B", 300);

    A.talletus(100);
    A.tiliSiirto(50, B);
    A.showSaldo();
    B.showSaldo();

    return 0;
}
