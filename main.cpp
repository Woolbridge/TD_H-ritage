#include <iostream>
#include "vehicule.h"
#include "voiture.h"
#include "avion.h"

using namespace std;

int main()
{
    vehicule v("mountain bike",2011,500);
    v.afficheV();
    cout<<"////////////////////////////"<<endl;
    voiture vt("VW",2011,46500,1400,4,120,300000);
    vt.afficheV();
    cout<<"////////////////////////////"<<endl;
    avion av("airbus",2000,900000,"helices",656);
    av.afficheV();
        cout<<"////////////////////////////"<<endl;
      v.calculePrix(2020);
    vt.calculePrix(2020);
    av.calculePrix(2020);
    return 0;
}
