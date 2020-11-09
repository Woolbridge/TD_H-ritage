#ifndef AVION_H
#define AVION_H

#include "vehicule.h"

using namespace std;

class avion : public vehicule
{
    public:
        avion();
        avion(string,int,float,string ,int);
        virtual ~avion();

        string Gettype() { return type; }
        void Settype(string val) { type = val; }
        long int GetHvol() { return Hvol; }
        void SetHvol(long int val) { Hvol = val; }

        void afficheV()const;
        void calculePrix(int);
    protected:

    private:
        string type;
        long int Hvol;
};

#endif // AVION_H
