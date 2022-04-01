#include "./../headers/ContenedorVideojuego.h"

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
    /*while (aux < ultimo)
    {
        std::cout << "El videojuego " << arreglo[aux]->getNombre() << " es del genero " << arreglo[aux]->traducirGenero(arreglo[aux]) << std::endl;
        aux = aux + 1;
    }*/
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

// REVISION
Partida **ContenedorVideojuego::obtenerPartidas(string videojuego, int &cantPartidas)
{
    // PREREQUISITO: VIDEOJUEGO EXISTE
    cantPartidas = ultimo + 1;

    int aux = 0;
    while (aux < ultimo)
    {
        if (arreglo[aux]->getNombre() == videojuego)
        {
            // Estoy parado en el videojuego que quiero.

            Partida **arreglo_aux = new Partida *[ultimo];

            // int aux2=0;
            // ERROR: while(aux2<arreglo[aux].partidas->ultimo){

            // 1- Operacion que me devuelva partidas.ultimo
            // 2- Operacion que me devuelva todas las partidas.

            // Una vez tenga eso:
            // arreglo_aux=arreglo[aux].partidas;
            // return arreglo_aux;
        }
        aux = aux + 1;
    }
}