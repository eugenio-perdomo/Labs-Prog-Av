#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Partida.h"

class PartidaMultijugador : public Partida
{
private:
    ContenedorJugador participantes;
    bool transmision;
public:

    void setTransmision(bool transmision);
    bool getTransmision();

    void agregarParticipante(Jugador *j);
    void mostrarParticipantes();

    float darTotalHorasParticipantes();
};

#endif
