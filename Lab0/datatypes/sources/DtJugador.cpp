#include "../headers/DtJugador.h"
#include <string>
#include "stdexcept"

using namespace std;

DtJugador::DtJugador() {}

DtJugador::DtJugador(string nick, int e, string contra)
{
    this->nickname = nick;
    this->edad = e;
    this->contrasenia = contra;
}

DtJugador::~DtJugador(){}

string DtJugador::getNickname()
{
    return this->nickname;
}

int DtJugador::getEdad()
{
    return this->edad;
}

string DtJugador::getContrasenia()
{
    return this->contrasenia;
}
