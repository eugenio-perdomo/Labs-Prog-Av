#ifndef VIDEOJUEGO_H_INCLUDED
#define VIDEOJUEGO_H_INCLUDED

#include <string>
#include "./TipoJuego.h"
#include "./../../classes/headers/ContenedorPartida.h"
#define MAX_VIDEOJUEGOS 5

using namespace std;

class Partida;

class Videojuego
{
private:
    string nombre;
    TipoJuego genero;
    ContenedorPartida partidas[MAX_PARTIDAS];

public:
    Videojuego();
    Videojuego(string n, TipoJuego g);
    void setNombre(string n);
    void setGenero(TipoJuego g);

    string getNombre();
    TipoJuego getGenero();
    string traducirGenero(Videojuego *aux);

    void iniciarPartida2(Partida *datos, int tipoPartida);
    void mostrarPartida2();

    virtual ~Videojuego();
};

#endif // VIDEOJUEGO_H_INCLUDED
