#include "asunto.h"
#include <iostream>
using namespace std;


Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}

void Asunto::maarita(int x, int y)
{
    asukasMaara = x;
    neliot = y;
    cout<<"Asunto maaritetty asukkaita = "<<asukasMaara<<", nelioita = "<<neliot<<endl;
}

double Asunto::laskeKulutus(double hinta)
{
    return asukasMaara*neliot*hinta;
}
