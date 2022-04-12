#ifndef DTJUGADOR_H
#define DTJUGADOR_H
#include <string>

using namespace std;

class DtJugador
{
private:
    string nickname;
    int edad;
    string contrasenia;

public:
    DtJugador();
    DtJugador(string nick, int age, string con);

    string getNickname();
    int getEdad();
    string getContrasenia();

    virtual ~DtJugador();
};

#endif
