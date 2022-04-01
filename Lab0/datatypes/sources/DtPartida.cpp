#include "../headers/DtFechaHora.h"
#include "../headers/DtPartida.h"

DtPartida::DtPartida(DtFechaHora& fecha, float duracion)
{
    this->duracion = duracion;
    this->fecha = fecha;
}