#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"



using namespace std;
int main()
{
    A claseA(6);
    B claseB(3);
    C claseC(4);
    claseA.mostrar(claseB.obtenerdato(), claseC.obtenerdato());
    claseB.mostrar(claseA.obtenerdato(), claseC.obtenerdato());
    claseC.mostrar(claseA.obtenerdato(), claseB.obtenerdato());

    return 0;
}
