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
        cout << "Error: se intento superar el limite de jugadores" << endl;
    } else {
        Partida *aux = new PartidaIndividual;
        aux->setDuracion(datos->getDuracion());
        aux->setFecha(datos->getFecha());
        aux->setIniciador(datos->getIniciador());

        arreglo[ultimo] = aux;
        ultimo = ultimo + 1;
    }
}

void ContenedorPartida::iniciarPartidaMultiJugador(Partida *datos)
{
    if (ultimo == MAX_PARTIDAS){
        cout << "Error: se intento superar el limite de jugadores" << endl;
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
    int aux = 0;
    while (aux < ultimo)
    {

        if (typeid(*arreglo[aux]) == typeid(PartidaIndividual)) {
            cout<<"Partida individual."<<endl;
        } else {
            cout <<"Partida multijugador"<<endl;
        }

 

        cout << arreglo[aux]->getDuracion() << endl;
        aux = aux + 1;
    }
    
}