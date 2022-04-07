#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H
#include "./Partida.h"

class PartidaIndividual : public Partida
{
private:
    bool esContinuacion;

public:
    void setContinuacion(bool continuacion);
    bool getContinuacion();

    float darTotalHorasParticipantes();
};

#endif