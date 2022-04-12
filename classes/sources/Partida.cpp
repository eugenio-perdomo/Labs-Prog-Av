#include "./../headers/Partida.h"

Partida::Partida() {}

Partida::Partida(float dura, DtFechaHora *fecha)
{
    this->duracion = dura;
    this->fechaHora = fecha;
}

float Partida::getDuracion()
{
    return duracion;
}

DtFechaHora *Partida::getFecha()
{
    return fechaHora;
}

Jugador *Partida::getIniciador(){
    return iniciador;
}

void Partida::setDuracion(float dura)
{
    this->duracion = dura;
}

void Partida::setFecha(DtFechaHora *fecha)
{
    this->fechaHora = fecha;
}

void Partida::setIniciador(Jugador * iniciador){
    this->iniciador=iniciador;
}

Partida::~Partida() {}
