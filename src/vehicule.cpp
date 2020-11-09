#include "vehicule.h"
#include "iostream"

using namespace std;

vehicule::vehicule()
{
    //ctor
    marque="";
    dtAch=0;
    prixAch=0;
}

vehicule::vehicule(string mar,int dt,float prx)
{
    //ctor
    marque=mar;
    dtAch=dt;
    prixAch=prx;
}

vehicule::~vehicule()
{
    //dtor
}

void vehicule::afficheV()const{
cout<<"Marque : "<<marque<<endl<<"date : "<<this->dtAch<<endl<<"Prix d achat : "<<prixAch<<endl;
}

void vehicule::calculePrix(int an_act){
this->prixCour=prixAch-(0.01*(an_act-dtAch));
cout<<"prix courant : "<<prixCour<<endl;
}

