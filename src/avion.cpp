#include "avion.h"

using namespace std;

avion::avion()
{
    //ctor
    type="";
    Hvol=0;
}

avion::avion(string m,int dt,float prx,string tp ,int h):vehicule(m,dt,prx){
this->type=tp;
this->Hvol=h;
}

void avion::afficheV()const{
cout<<"Marque : "<<marque<<endl<<"date : "<<this->dtAch<<endl<<"Prix d achat : "<<prixAch<<endl;
cout<<"type : "<<this->type<<endl<<" nombre d heures de vol : "<<this->Hvol<<endl;
}

void avion::calculePrix(int){
    if(this->type=="reaction")
prixCour=(float)(prixAch-0.1*(int)Hvol/1000);
 else if(this->type=="helices")
    prixCour=prixAch-0.1*(int)Hvol/100;
 if (prixCour<0) prixCour=0;
 cout<<fixed<<"prix courant de l avion : "<<prixCour<<endl;
}

avion::~avion()
{
    //dtor
}
