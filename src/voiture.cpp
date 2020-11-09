#include "voiture.h"
#include <string.h>

using namespace std;

voiture::voiture()
{
    //ctor
    this->marque="";
    this->dtAch=0;
    this->prixAch=0;
    this->cylind=0;
    this->nbPorte=0;
    this->puiss=0;
    this->kilo=0;
}


voiture::voiture(string m,int dt,float prx,int cyl,int nb,int p,long int kl):vehicule( m, dt, prx)
{
    //ctor
    this->cylind=cyl;
    this->nbPorte=nb;
    this->puiss=p;
    this->kilo=kl;
}

void voiture::afficheV()const{
    cout<<"Marque : "<<marque<<endl<<"date : "<<this->dtAch<<endl<<"Prix d achat : "<<prixAch<<endl;
    cout<<"cylindre : "<<this->cylind<<endl;
    cout<<"nombre de portes : "<<nbPorte<<endl;
    cout<<"puissance : "<<puiss<<endl;
    cout<<"kilometres : "<<kilo<<endl;
}

 void voiture::calculePrix(int an_act){
     if((marque=="Renault") || (marque=="Fiat"))
     {
          this->prixCour=prixAch-(0.02*(an_act-dtAch)+(0.05*(int)kilo/10000)+0.1*prixAch);

     }
 else if((marque=="Porsche") || (marque=="Ferrari"))
    this->prixCour=prixAch-(0.02*(an_act-dtAch)+(0.05*(int)kilo/10000)-0.2*prixAch);

 else
    this->prixCour=prixAch-(0.02*(an_act-dtAch)+(0.05*(int)kilo/10000));
    cout<<fixed<<"prix courant de la voiture: "<<(float)this->prixCour<<endl;
 }

voiture::~voiture()
{
    //dtor
}
