#include "./../headers/PartidaMultijugador.h"

bool PartidaMultijugador::getTransmision()
{
    return this->transmision;
}
void PartidaMultijugador::setTransmision(bool transmision)
{
    this->transmision=transmision;
}

void PartidaMultijugador::agregarParticipante(Jugador *j)
{
}

void PartidaMultijugador::mostrarParticipantes()
{
    participantes.mostrarJugadores();
}

float PartidaMultijugador::darTotalHorasParticipantes()
{
}
