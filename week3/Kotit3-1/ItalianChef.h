#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "Chef.h"
#include <iostream>
using namespace std;

class ItalianChef:public Chef {
    public:
        ItalianChef(string chefName="",int water=0, int flour=0);
        ~ItalianChef();
        string getName();
        void makePasta(int water, int flour);

    private:
        int water;
        int flour;
};

#endif // ITALIANCHEF_H
