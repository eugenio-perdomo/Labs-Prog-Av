#include "./../headers/ContenedorPartida.h"
#include "./../headers/PartidaIndividual.h"
#include "./../headers/PartidaMultijugador.h"
#include <typeinfo>

ContenedorPartida::ContenedorPartida(){}
ContenedorPartida::~ContenedorPartida(){}

void ContenedorPartida::iniciarPartidaIndividual(Partida *datos)
{
    //Ya me encuentro situado en el videojuego que quiero y en "datos" tengo la partida y su jugador iniciador
    //Partida *datos

    if (ultimo == MAX_PARTIDAS){
        cout << "Error: se intento superar el limite de partidas" << endl;
    } else {
        Partida *aux = new PartidaIndividual;
        aux->setDuracion(datos->getDuracion());
        aux->setFecha(datos->getFecha());
        aux->setIniciador(datos->getIniciador());
    //variable que cuenta la cantidad de partistadas individuales cantPartidas ++;
        arreglo[ultimo] = aux;
        ultimo = ultimo + 1;
    }
}

void ContenedorPartida::iniciarPartidaMultiJugador(Partida *datos)
{
    if (ultimo == MAX_PARTIDAS){
        cout << "Error: se intento superar el limite de partidas" << endl;
    } else {
        Partida *aux = new PartidaMultijugador;
        aux->setDuracion(datos->getDuracion());
        aux->setFecha(datos->getFecha());
        aux->setIniciador(datos->getIniciador());

        arreglo[ultimo] = aux;
        ultimo = ultimo + 1;
    }
}

void ContenedorPartida::mostrarPartidas()
{
    int canIndividual = 0;
    int canMultijugador = 0;
    int aux = 0;
    while (aux < ultimo)
    {
        
        if (typeid(*arreglo[aux]) == typeid(PartidaIndividual)) {
            canIndividual = canIndividual +1;
        } else {
            canMultijugador = canMultijugador + 1;
        }

 

        //cout << arreglo[aux]->getDuracion() << endl;
        aux = aux + 1;
    }

    cout << "Partidas individuales: " << canIndividual << endl;
    cout << "Partidas multijugador " << canMultijugador << endl;
    
}