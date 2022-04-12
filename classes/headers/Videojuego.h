#ifndef VIDEOJUEGO_H_INCLUDED
#define VIDEOJUEGO_H_INCLUDED

#include <string>
#include "./TipoJuego.h"
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
    Videojuego(string nom, TipoJuego gen);
    void setNombre(string nom);
    void setGenero(TipoJuego gen);
    string getNombre();
    TipoJuego getGenero();
    string traducirGenero(Videojuego *aux);
    virtual ~Videojuego();
};

#endif // VIDEOJUEGO_H_INCLUDED
