#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

#define MAX_JUGADORES 5

class Jugador
{
private:
    string nickname;
    int edad;
    string contrasenia;

public:
    Jugador();
    Jugador(string nick, int e, string contra);
    void setNickname(string n);
    void setEdad(int e);
    void setContrasenia(string contra);
    string getNickname();
    int getEdad();
    string getContrasenia();

    virtual ~Jugador();
};

#endif // JUGADOR_H_INCLUDED