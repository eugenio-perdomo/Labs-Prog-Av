#include "../headers/DtVideojuego.h"
#include <string>

using namespace std;

DtVideojuego::DtVideojuego(){}

DtVideojuego::DtVideojuego(string titulo, TipoJuego tipoJuego)
{
    this->titulo = titulo;
    this->tipoJuego = tipoJuego;
}

string DtVideojuego::getNombre()
{
    return this->titulo;
}

TipoJuego DtVideojuego::getTipoJuego()
{
    return this->tipoJuego;
}

void DtVideojuego::setNombre(string titulo)
{
    this->titulo = titulo;
}

void DtVideojuego::setTipoJuego(TipoJuego tipoJuego)
{
    this->tipoJuego = tipoJuego;
}

float DtVideojuego::totalHorasDeJuego()
{
    // TODO: // a desarrollar
    return 0;
}