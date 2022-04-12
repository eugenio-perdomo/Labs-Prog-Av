#include "../headers/DtFechaHora.h"
#include "stdexcept"

using namespace std;

DtFechaHora::DtFechaHora() {}

DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int minuto)
{
    this->dia = dia;
    this->mes = mes,
    this->anio = anio;
    this->hora = hora;
    this->minuto = minuto;

    if (!isValid())
    {
        throw invalid_argument("Esta mal");
    }
}

int DtFechaHora::getDia()
{
    return dia;
}
int DtFechaHora::getMes()
{
    return mes;
}
int DtFechaHora::getAnio()
{
    return anio;
}
int DtFechaHora::getHora()
{
    return hora;
}
int DtFechaHora::getMinuto()
{
    return minuto;
}

bool DtFechaHora::isValid()
{
    return this->dia >= 1 && this->dia <= 31 &&
           this->mes >= 1 && this->mes <= 12 &&
           this->anio >= 1900 && this->hora >= 1 && this->hora <= 24 &&
           this->minuto >= 1 && this->minuto <= 60;
}

DtFechaHora::~DtFechaHora() {}

ostream &operator<<(ostream &o, DtFechaHora &dfh)
{

    o << string("Fecha: ") << dfh.getDia() << string("/") << dfh.getMes() << string("/") << dfh.getAnio() << string(" --> Hora ") << dfh.getHora() << string(" --> Minuto/s") << dfh.getMinuto();
    return o;
}
