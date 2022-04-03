#ifndef CONTENEDORVIDEOJUEGO_H_INCLUDED
#define CONTENEDORVIDEOJUEGO_H_INCLUDED

#include <iostream>
#include <string>
#include "./Videojuego.h"
using namespace std;

class ContenedorVideojuego : public Videojuego
{
private:
    Videojuego **arreglo = new Videojuego *[MAX_VIDEOJUEGOS];
    int ultimo = 0;

public:
    ContenedorVideojuego();
    void agregarVideojuego(string nombre, TipoJuego genero);
    void mostrarVideojuegos();
    bool existeVideojuego(string nombre);
    Videojuego **obtenerVideojuegos(int &cantVideojuegos);

    int getUltimo();

    void iniciarPartida(string nickname, string videojuego, Partida *datos);

    void mostrarPartida(string nombreVideojuego);



    // REVISION
    Partida **obtenerPartidas(string videojuego, int &cantPartidas);
    ~ContenedorVideojuego();
};

#endif // CONTENEDORVIDEOJUEGO_H_INCLUDED