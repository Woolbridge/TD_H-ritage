#ifndef VEHICULE_H
#define VEHICULE_H
#include <string.h>
#include <iostream>


using namespace std;


class vehicule
{
        protected:
        string marque;
        int dtAch;
        float prixAch;
        float prixCour;

    public:
        vehicule();
        vehicule(string,int,float);
        virtual ~vehicule();
        //setter and getters
        string Getmarque() { return marque; }
        void Setmarque(string val) { marque = val; }
        int GetdtAch() { return dtAch; }
        void SetdtAch(int val) { dtAch = val; }
        float GetprixAch() { return prixAch; }
        void SetprixAch(float val) { prixAch = val; }
        float GetprixCour() { return prixCour; }
        void SetprixCour(float val) { prixCour = val; }

        //methods
        void afficheV()const;
        void calculePrix(int an_act);
};

#endif // VEHICULE_H
