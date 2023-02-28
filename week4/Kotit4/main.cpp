#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    /*
    Asunto as1;
    int hinta = 1;

    as1.maarita(2,100);
    cout<<"asunnon kulutus, kun hinta = "<<hinta<<" on "<<as1.laskeKulutus(hinta)<<endl;
    return 0; */


    int hinta = 1;
    Katutaso kakkonen;
    kakkonen.maaritaAsunnot();
    kakkonen.Kerros::maaritaAsunnot();
   // kakkonen.laskeKulutus(hinta);
    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = "<<hinta<<" on "<<kakkonen.laskeKulutus(hinta)+kakkonen.Kerros::laskeKulutus(hinta)<<endl;



    //Kerrostalo kolmonen;


    return 0;
}
