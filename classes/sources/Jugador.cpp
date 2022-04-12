
#include "./../headers/Jugador.h"

Jugador::Jugador() {}

Jugador::Jugador(string nick, int age, string con)
{
    this->Nickname = nick;
    this->Edad = age;
    this->Contrasenia = con;
}

string Jugador::getNickname()
{
    return Nickname;
}
int Jugador::getEdad()
{
    return Edad;
}
string Jugador::getContrasenia()
{
    return Contrasenia;

void Jugador::setNickname(string nick)
{
    this->Nickname = nick;
}
void Jugador::setEdad(int age)
{
    this->Edad = age;
}
void Jugador::setContrasenia(string con)
{
    this->Contrasenia = con;
}


Jugador::~Jugador() {}
