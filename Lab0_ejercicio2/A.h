#ifndef A_H_INCLUDED
#define A_H_INCLUDED
using namespace std;
class B;
class C;

class A
{
public:
    A(int as){ //constructor parametrizado
        a = as;
   }
   A(){} //constructor vacio


    int cambio(int as); //operacion generica para cambiar 1 o + datos de un objeto
    int obtenerdato(); //operacion para sacar un dato
    void mostrar(int valorB, int valorC);

private:
    int a;

};
#endif // A_H_INCLUDED
