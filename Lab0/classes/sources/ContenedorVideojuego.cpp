#include "./../headers/ContenedorVideojuego.h"
#include <typeinfo>

ContenedorVideojuego::ContenedorVideojuego(){}
ContenedorVideojuego::~ContenedorVideojuego(){}

void ContenedorVideojuego::agregarVideojuego(string nombre, TipoJuego genero)
{
    if (ultimo == MAX_VIDEOJUEGOS)
    {
        std::cout << "Error: se intento superar el limite de videojuegos" << std::endl;
    }
    else
    {

        if (existeVideojuego(nombre) == false)
        {
            Videojuego *aux = new Videojuego(nombre, genero);
            arreglo[ultimo] = aux;
            ultimo = ultimo + 1;
        }
        else
        {
            try
            {
                throw std::invalid_argument("El videojuego ya se encuentra registrado");
            }
            catch (const std::invalid_argument &ia)
            {
                std::cerr << "Invalid argument: " << ia.what() << std::endl;
            }
        }
    }
}

void ContenedorVideojuego::mostrarVideojuegos()
{
    int aux = 0;

    //TODO: Finalizar operacion aca
    while (aux < ultimo)
    {
        std::cout << "El videojuego " << arreglo[aux]->getNombre() << " es del genero " << arreglo[aux]->traducirGenero(arreglo[aux]) << std::endl;
        aux = aux + 1;
    }
}

bool ContenedorVideojuego::existeVideojuego(string nombre)
{
    int aux = 0;

    while (aux < ultimo)
    {
        if (arreglo[aux]->getNombre() == nombre)
        {
            return true;
        }
        aux = aux + 1;
    }
    return false;
}

Videojuego **ContenedorVideojuego::obtenerVideojuegos(int &cantVideojuegos)
{
    cantVideojuegos = ultimo + 1;

    Videojuego **arreglo_aux = new Videojuego *[ultimo];

    int aux = 0;
    while (aux < ultimo)
    {
        arreglo_aux = arreglo;
        aux = aux + 1;
    }

    return arreglo_aux;
}

void ContenedorVideojuego::iniciarPartida(string nickname, string videojuego, Partida *datos){

    int aux = 0;

    while (aux < ultimo){
        if (arreglo[aux]->getNombre() == videojuego){
            //Situado sobre el videojuego
            
            int tipoPartida;
            cout<<"1- Partida individual"<<endl;
            cout<<"2- Partida multijugador"<<endl;
            cout<<"Seleccione tipo de partida:";
            cin >> tipoPartida;

            arreglo[aux]->iniciarPartida(datos, tipoPartida);
        }
        aux = aux + 1;
    }
}

void ContenedorVideojuego::mostrarPartida(string nombreVideojuego){

    int aux = 0;

    while (aux < ultimo){
        if (arreglo[aux]->getNombre() == nombreVideojuego){
            //Situado sobre el videojuego
            arreglo[aux]->mostrarPartida();
        }
        aux = aux+1;
    }

}