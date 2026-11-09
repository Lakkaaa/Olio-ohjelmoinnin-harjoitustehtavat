#include <iostream>
#include "henkilo.h"
#include "opiskelija.h"
using namespace std;

int main()
{
    Henkilo objH("Ville Virtuaali", 25);
    Opiskelija objOp;
    objOp.setNimi("Alli Allikko");
    objOp.setIka(22);
    objOp.setOpiskelijanumero("T1000");

    objH.tulostaTiedot();
    objOp.tulostaTiedot();

    Opiskelija objOp2("Pertti Periytyminen", 25, "A777");
    objOp2.tulostaTiedot();

    return 0;
}
