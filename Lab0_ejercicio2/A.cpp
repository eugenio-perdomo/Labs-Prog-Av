#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"
using namespace std;

   int A::cambio(int as){
    a = as;
   }

   int A::obtenerdato(){
    return a;
   }

   void A::mostrar(int valorB, int valorC){
    B claseB(valorB);
    C claseC(valorC);
    cout << "Funcion de A:" << endl;
    cout << "Dato A: " << A::obtenerdato() <<  endl;
    cout << "Dato B: " << claseB.obtenerdato() << endl;
    cout << "Dato C: " << claseC.obtenerdato() << endl;
   }
