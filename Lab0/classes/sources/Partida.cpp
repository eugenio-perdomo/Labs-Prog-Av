#include "./../headers/Partida.h"

Partida::Partida() {}

Partida::Partida(float d, DtFechaHora *f)
{
    this->duracion = d;
    this->fechaHora = f;
}

void Partida::setDuracion(float d)
{
    this->duracion = d;
}

void Partida::setFecha(DtFechaHora *f)
{
    this->fechaHora = f;
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

void Partida::setIniciador(Jugador * iniciador){
    this->iniciador=iniciador;
}




Partida::~Partida() {}