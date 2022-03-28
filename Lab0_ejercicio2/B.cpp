#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;


   int B::cambio(int bs){
    b = bs;
   }

   int B::obtenerdato(){
    return b;
   }

   void B::mostrar(int valorA, int valorC){
    A claseA(valorA);
    C claseC(valorC);
    cout << "Funcion de B:" << endl;
    cout << "Dato A: " << claseA.obtenerdato() <<  endl;
    cout << "Dato B: " << B::obtenerdato() << endl;
    cout << "Dato C: " << claseC.obtenerdato() << endl;
   }
