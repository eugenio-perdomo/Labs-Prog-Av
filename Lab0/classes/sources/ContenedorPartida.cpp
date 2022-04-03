#include "./../headers/ContenedorPartida.h"

ContenedorPartida::ContenedorPartida(){}
ContenedorPartida::~ContenedorPartida(){}

void ContenedorPartida::iniciarPartidaIndividual(string nickname, string videojuego, Partida datos)
{
    /*
    // PREREQUISITO: EL VIDEOJUEGO EXISTE.
    // Ya se selecciono individual
    if (ultimo == MAX_PARTIDAS)
    {
        cout << "Error: se intento superar el limite de jugadores" << endl;
    }
    else
    {
        PartidaIndividual *aux = new PartidaIndividual;
        aux->setDuracion(datos.getDuracion());
        aux->setFecha(datos.getFecha());
        aux->setEsContinuacion(false);
        arreglo[ultimo] = aux;
        ultimo = ultimo + 1;
    }*/
}

void ContenedorPartida::iniciarPartidaMultiJugador(string nickname, string videojuego, Partida datos)
{
    /*
    // PREREQUISITO: EL VIDEOJUEGO EXISTE.
    // Ya se selecciono multijugador
    PartidaMultijugador *aux = new PartidaMultijugador;
    aux->setDuracion(datos.getDuracion());
    aux->setFecha(datos.getFecha());
    arreglo[ultimo] = aux;
    ultimo = ultimo + 1;
}

void ContenedorPartida::mostrarPartidas()
{
    int aux = 0;
    while (aux < ultimo)
    {
        cout << arreglo[aux]->getDuracion() << endl;
        aux = aux + 1;
    }
    */
}