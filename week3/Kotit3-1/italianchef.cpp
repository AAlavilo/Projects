#include "ItalianChef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string chefName,int w, int f):Chef(chefName)
{
    water = w;
    flour = f;
    name=chefName;
    cout<<"Chef "<<getName()<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}


string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int water, int flour)
{
    cout<<"Chef "<<getName()<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<getName()<<" uses flour = "<<flour<<endl;
    cout<<"Chef "<<getName()<<" uses water = "<<water<<endl;
}




