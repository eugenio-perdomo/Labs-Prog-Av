#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Partida.h"

class Jugador;

class PartidaMultijugador : public Partida
{
public:
    bool continuaPartidaAnterior();
    float darTotalHorasParticipantes();
};

#endif