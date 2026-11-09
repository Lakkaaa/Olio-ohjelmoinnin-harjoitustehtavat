#ifndef OPISKELIJA_H
#define OPISKELIJA_H
#include <iostream>
using namespace std;
#include "henkilo.h"

class Opiskelija : public Henkilo
{
private:
    string opiskelijanumero;
public:
    Opiskelija();
    Opiskelija(string n, int i, string opn);
    string getOpiskelijanumero() const;
    void setOpiskelijanumero(const string &newOpiskelijanumero);
    virtual void tulostaTiedot() override;
};

#endif // OPISKELIJA_H
