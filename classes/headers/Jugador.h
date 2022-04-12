#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

#define MAX_JUGADORES 5

class Jugador
{
private:
    string Nickname;
    int Edad;
    string Contrasenia;

public:
    Jugador();
    Jugador(string nick, int age, string con);
    void setNickname(string n);
    void setEdad(int age);
    void setContrasenia(string con);
    string getNickname();
    int getEdad();
    string getContrasenia();

    virtual ~Jugador();
};

#endif // JUGADOR_H_INCLUDED
