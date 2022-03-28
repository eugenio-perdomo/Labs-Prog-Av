#ifndef C_H_INCLUDED
#define C_H_INCLUDED
using namespace std;
class A;
class B;

class C
{
public:
    C(int cs){ //constructor parametrizado
        c = cs;
   }
   C(){} //constructor vacio


    int cambio(int cs); //operacion generica para cambiar 1 o + datos de un objeto
    int obtenerdato(); //operacion para sacar un dato
    void mostrar(int valorA, int valorB);

private:
    int c;

};
#endif // C_H_INCLUDED
