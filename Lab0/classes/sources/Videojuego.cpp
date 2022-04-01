#include "./../headers/Videojuego.h"

Videojuego::Videojuego(string n, TipoJuego g)
{
    this->nombre = n;
    this->genero = g;
}

void Videojuego::setNombre(string n)
{
    this->nombre = n;
}
void Videojuego::setGenero(TipoJuego g)
{
    this->genero = g;
}

string Videojuego::getNombre()
{
    return nombre;
}
TipoJuego Videojuego::getGenero()
{
    return genero;
}

string Videojuego::traducirGenero(Videojuego aux)
{
    switch (aux.getGenero())
    {
    case 0:
        return "ACCION";
    case 1:
        return "AVENTURA";
    case 2:
        return "DEPORTE";
    case 3:
        return "OTRO";
    default:
        return "OTRO";
    }
}