#ifndef SISTEMA_H_INCLUDED
#define SISTEMA_H_INCLUDED
#include <iostream>
#include <string>
#include "./Jugador.h"
#include "./Partida.h"
#include "./Videojuego.h"
#include "./PartidaIndividual.h"
#include "./PartidaMultijugador.h"
#include "./ContenedorVideojuego.h"
#include "./ContenedorJugador.h"
#include "./ContenedorPartida.h"
#include "./../../datatypes/headers/DtFechaHora.h"

using namespace std;
class Sistema
{
private:
    ContenedorJugador ConJugador;
    ContenedorVideojuego ConVideojuego;
    ContenedorPartida ConPartida;

public: // TODO: Hay varias otras funciones que hay que declarar aca 
        // Para que sean utilizadas por el main
    Sistema();
    static void mostrarContenidoAnterior();
    static void mostrarMenuPrincipal();

    void agregarJugador();
    void mostrarJugadores();
    void agregarVideojuego();
    void mostrarVideojuego();
    void agregarPartida();
    void mostrarPartida();

    virtual ~Sistema();
};
#endif // SISTEMA_H_INCLUDED