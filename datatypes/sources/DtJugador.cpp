#include "../headers/DtJugador.h"
#include <string>
#include "stdexcept"

using namespace std;

DtJugador::DtJugador() {}

DtJugador::DtJugador(string nick, int age, string con)
{
    this->nickname = nick;
    this->edad = age;
    this->contrasenia = con;
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
