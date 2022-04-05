#ifndef CONTENEDORVIDEOJUEGO_H_INCLUDED
#define CONTENEDORVIDEOJUEGO_H_INCLUDED

#include <iostream>
#include <string>
#include "./Videojuego.h"
#include "./../../datatypes/headers/DtVideojuego.h"

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
    DtVideojuego **obtenerVideojuegos(int &cantVideojuegos);

    int getUltimo();

    void iniciarPartida(string nickname, string videojuego, Partida *datos);

    void mostrarPartida(string nombreVideojuego);

    ~ContenedorVideojuego();
};

#endif // CONTENEDORVIDEOJUEGO_H_INCLUDED