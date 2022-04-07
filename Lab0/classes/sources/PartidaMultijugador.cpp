#include "./../headers/PartidaMultijugador.h"

void PartidaMultijugador::setTransmicion(bool transmicion)
{
    this->transmicion=transmicion;
}

bool PartidaMultijugador::getTransmicion()
{
    return this->transmicion;
}

void PartidaMultijugador::agregarParticipante(Jugador *j)
{
    participantes.agregarJugador(j->getNickname(), j->getEdad(), j->getContrasenia());
}

void PartidaMultijugador::mostrarParticipantes()
{

    participantes.mostrarJugadores();
}

float PartidaMultijugador::darTotalHorasParticipantes()
{
}