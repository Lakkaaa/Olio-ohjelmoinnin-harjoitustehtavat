#include "henkilo.h"

string Henkilo::getNimi() const
{
    return nimi;
}

void Henkilo::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

int Henkilo::getIka() const
{
    return ika;
}

void Henkilo::setIka(int newIka)
{
    ika = newIka;
}

void Henkilo::tulostaTiedot()
{
    cout << "Henkilo: " << nimi << ", " << ika << " vuotta" << endl;
}

Henkilo::Henkilo() {}

Henkilo::Henkilo(string n, int i)
{
    nimi = n;
    ika = i;
}
