#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"
#include "asunto.h"
class Katutaso:public Kerros
{
public:
    Katutaso();
    Asunto as1;
    Asunto as2;
    void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KATUTASO_H
