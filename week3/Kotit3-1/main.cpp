#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>

using namespace std;

int main()
{
   /* Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();
    Chef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();
    */

    /*
    Chef chef("Jyrki");
    ItalianChef chef2("Mario");
    chef.makeSalad();
    chef2.makePasta();
    chef.makeSoup();
    */

    ItalianChef chef2("Mario",100,250);
    chef2.makePasta(100,250);
    return 0;
}
