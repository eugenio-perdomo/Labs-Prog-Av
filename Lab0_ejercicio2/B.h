#ifndef B_H_INCLUDED
#define B_H_INCLUDED

using namespace std;
class A;
class C;

class B
{
public:
    B(int bs){ //constructor parametrizado
       b = bs;
   }
   B(){} //constructor vacio


    int cambio(int bs); //operacion generica para cambiar 1 o + datos de un objeto
    int obtenerdato(); //operacion para sacar un dato
    void mostrar(int valorA, int valorC);

private:
    int b;

};
#endif // B_H_INCLUDED
