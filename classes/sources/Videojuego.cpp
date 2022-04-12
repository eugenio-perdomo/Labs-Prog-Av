#include "./../headers/Videojuego.h"

Videojuego::Videojuego() {}

Videojuego::Videojuego(string nom, TipoJuego gen)
{
    this->nombre = nom;
    this->genero = gen;
}

string Videojuego::getNombre()
{
    return nombre;
}
TipoJuego Videojuego::getGenero()
{
    return genero;

void Videojuego::setNombre(string nom)
{
    this->nombre = nom;
}
void Videojuego::setGenero(TipoJuego gen)
{
    this->genero = gen;
}


string Videojuego::traducirGenero(Videojuego *pun)
{
    switch (pun->getGenero())
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



Videojuego::~Videojuego() {}
