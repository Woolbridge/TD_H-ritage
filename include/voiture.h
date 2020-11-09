#ifndef VOITURE_H
#define VOITURE_H

#include "vehicule.h"

using namespace std;

class voiture : public vehicule{
    public:
        voiture();
        voiture(string,int,float,int,int,int,long int);
        void afficheV()const;
        void calculePrix(int an_act);
        virtual ~voiture();

        int Getcylind() { return cylind; }
        void Setcylind(int val) { cylind = val; }
        int GetnbPorte() { return nbPorte; }
        void SetnbPorte(int val) { nbPorte = val; }
        int Getpuiss() { return puiss; }
        void Setpuiss(int val) { puiss = val; }
        long int Getkilo() { return kilo; }
        void Setkilo(long int val) { kilo = val; }



    private:
        int cylind;
        int nbPorte;
        int puiss;
        long int kilo;
};

#endif // VOITURE_H
