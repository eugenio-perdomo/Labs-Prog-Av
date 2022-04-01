#include "./../headers/ContenedorJugador.h"
void ContenedorJugador::agregarJugador(string nickname, int edad, string contrasenia)
{
    if (ultimo == MAX_JUGADORES)
    {
        cout << "Error: se intento superar el límite de jugadores" << endl;
    }
    else
    {

        if (ContenedorJugador::existeJugador(nickname) == false)
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

void ContenedorJugador::mostrarJugadores()
{
    int aux = 0;

    while (aux < ultimo)
    {
        cout << "El jugador " << arreglo[aux].getNickname() << " tiene " << arreglo[aux].getEdad() << " años. Su contra es: " << arreglo[aux].getContrasenia() << endl;
        aux = aux + 1;
    }
}

bool ContenedorJugador::existeJugador(string nickname)
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