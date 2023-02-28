#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo()
{
    int hinta = 1;
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    eka.Kerros::maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    laskeKulutus(hinta);
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kulutus = eka.laskeKulutus(hinta)+eka.Kerros::laskeKulutus(hinta)+toka.laskeKulutus(hinta)+kolmas.laskeKulutus(hinta);
    cout<<"Kerrostalon kulutus on "<<kulutus<<endl;
    return kulutus;
}
