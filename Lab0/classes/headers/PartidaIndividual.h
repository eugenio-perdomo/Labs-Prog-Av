#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H
#include "./Partida.h"

class PartidaIndividual : public Partida
{
public:
    bool continuaPartidaAnterior();
    float darTotalHorasParticipantes();
};

#endif