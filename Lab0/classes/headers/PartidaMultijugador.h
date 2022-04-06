#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Partida.h"
#include "ContenedorJugador.h"

//class Jugador;

class PartidaMultijugador : public Partida
{
private:
    ContenedorJugador participantes;
    bool transmicion;
public:

    void setTransmicion(bool transmicion);
    bool getTransmicion();

    void agregarParticipante(Jugador *j);
    void mostrarParticipantes();

    float darTotalHorasParticipantes();
};

#endif