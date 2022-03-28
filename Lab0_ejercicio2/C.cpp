#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;


   int C::cambio(int cs){
    c = cs;
   }

   int C::obtenerdato(){
    return c;
   }

   void C::mostrar(int valorA, int valorB){
    A claseA(valorA);
    B claseB(valorB);
    cout << "Funcion de C:" << endl;
    cout << "Dato A: " << claseA.obtenerdato() <<  endl;
    cout << "Dato B: " << claseB.obtenerdato() << endl;
    cout << "Dato C: " << C::obtenerdato() << endl;
   }
