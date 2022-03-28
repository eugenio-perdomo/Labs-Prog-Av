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
    Jugador() {}

    Jugador(string nick, int e, string contra)
    {
        setNickname(nick);
        setEdad(e);
        setContrasenia(contra);
    }

    ~Jugador() {}

    void setNickname(string n)
    {
        nickname = n;
    }
    void setEdad(int e)
    {
        edad = e;
    }
    void setContrasenia(string contra)
    {
        contrasenia = contra;
    }
    string getNickname()
    {
        return nickname;
    }
    int getEdad()
    {
        return edad;
    }
    string getContrasenia()
    {
        return contrasenia;
    }
};

class ContenedorJugador
{
private:
    Jugador arreglo[MAX_JUGADORES];
    int ultimo = 0;

public:
    ContenedorJugador() {}
    ~ContenedorJugador() {}

    void agregarJugador(string nickname, int edad, string contrasenia)
    {
        if (ultimo == MAX_JUGADORES)
        {
            cout << "Error: se intento superar el límite de jugadores" << endl;
        }
        else
        {

            if (existeJugador(nickname) == false)
            {
                Jugador aux(nickname, edad, contrasenia);
                arreglo[ultimo] = aux;
                ultimo = ultimo + 1;
            }
            else
            {
                try
                {
                    throw invalid_argument("El nickname ya se encuentra registrado");
                }
                catch (const std::invalid_argument &ia)
                {
                    std::cerr << "Invalid argument: " << ia.what() << endl;
                }
            }
        }
    }

    void mostrarJugadores()
    {
        int aux = 0;

        while (aux < ultimo)
        {
            cout << "El jugador " << arreglo[aux].getNickname() << " tiene " << arreglo[aux].getEdad() << " años. Su contra es: " << arreglo[aux].getContrasenia() << endl;
            aux = aux + 1;
        }
    }

    bool existeJugador(string nickname)
    {
        int aux = 0;

        while (aux < ultimo)
        {
            if (arreglo[aux].getNickname() == nickname)
            {
                return true;
            }
            aux = aux + 1;
        }
        return false;
    }
};

#endif // JUGADOR_H_INCLUDED
