#ifndef CONTENEDORPARTIDA_H_INCLUDED
#define CONTENEDORPARTIDA_H_INCLUDED

#include <iostream>
#include <string>
#include "./Partida.h"
using namespace std;

class ContenedorPartida : public Partida
{
private:
    Partida **arreglo = new Partida *[MAX_PARTIDAS];
    int ultimo = 0;

public:
    ContenedorPartida();
    void iniciarPartidaIndividual(string nickname, string videojuego, Partida datos);
    void iniciarPartidaMultiJugador(string nickname, string videojuego, Partida datos);
    void mostrarPartidas();
    ~ContenedorPartida();
};

#endif // CONTENEDORPARTIDA_H_INCLUDED