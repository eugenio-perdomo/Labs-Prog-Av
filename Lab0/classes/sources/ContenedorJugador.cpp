#include "./../headers/ContenedorJugador.h"
#include "./../../datatypes/sources/DtJugador.cpp"

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
            Jugador *aux = new Jugador(nickname, edad, contrasenia);
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
        cout << "El jugador " << arreglo[aux]->getNickname() << " tiene " << arreglo[aux]->getEdad() << " años. Su contra es: " << arreglo[aux]->getContrasenia() << endl;
        aux = aux + 1;
    }
}

Jugador * ContenedorJugador::devolverJugador(string nickname)
{
    int aux = 0;

    while (aux < ultimo)
    {
        if (arreglo[aux]->getNickname() == nickname)
        {
            return arreglo[aux];
        }
        aux = aux + 1;
    }
}


bool ContenedorJugador::existeJugador(string nickname)
{
    int aux = 0;

    while (aux < ultimo)
    {
        if (arreglo[aux]->getNickname() == nickname)
        {
            return true;
        }
        aux = aux + 1;
    }
    return false;
}


DtJugador** ContenedorJugador::obtenerJugadores(int& cantJugadores){
    cantJugadores=ultimo;

    DtJugador ** dataArreglo= new DtJugador *[ultimo];

    int aux=0;
    while (aux<ultimo){
        string nick = arreglo[aux]->getNickname();
        int edad = arreglo[aux]->getEdad();
        string contra = arreglo[aux]->getContrasenia();

        DtJugador *dataAux = new DtJugador(nick, edad, contra);
        //DtJugador *dataAux = new DtJugador(arreglo[aux]->getNickname(),arreglo[aux]->getEdad(),arreglo[aux]->getContrasenia());

        dataArreglo[aux]=dataAux;
        aux=aux+1;
    }
    return dataArreglo;
}

int ContenedorJugador::getUltimo(){
    return this->ultimo;
}