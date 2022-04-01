#ifndef CONTENEDORJUGADOR_H_INCLUDED
#define CONTENEDORJUGADOR_H_INCLUDED

#include <iostream>
#include <string>
#include "Jugador.h"
using namespace std;

class ContenedorJugador
{
private:
    Jugador arreglo[MAX_JUGADORES];
    int ultimo = 0;

public:
    ContenedorJugador() {}
    void agregarJugador(string nickname, int edad, string contrasenia);
    void mostrarJugadores();
    bool existeJugador(string nickname);
    ~ContenedorJugador() {}
};
#endif // CONTENEDORJUGADOR_H_INCLUDED