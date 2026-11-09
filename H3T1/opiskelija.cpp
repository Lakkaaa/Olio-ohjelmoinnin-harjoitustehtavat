#include "opiskelija.h"

string Opiskelija::getOpiskelijanumero() const
{
    return opiskelijanumero;
}

void Opiskelija::setOpiskelijanumero(const string &newOpiskelijanumero)
{
    opiskelijanumero = newOpiskelijanumero;
}

void Opiskelija::tulostaTiedot()
{
    cout << "Opiskelija: " << getNimi() << ", " << getIka() << " vuotta, opiskelijaNum: " << opiskelijanumero << endl;
}

Opiskelija::Opiskelija() {}

Opiskelija::Opiskelija(string n, int i, string opn)
{
    setNimi(n);
    setIka(i);
    opiskelijanumero = opn;
}
