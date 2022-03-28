#include <iostream>
#include <string>

#include "Jugador.h"
#include "Videojuego.h"
#include "Partida.h"

using namespace std;

int main()
{

    cout << "PRUEBA VIDEOJUEGO" << endl;

    Videojuego v1;
    v1.setNombre("Elden Ring");
    v1.setGenero(AVENTURA);
    cout << v1.getNombre() << " es un videojuego del genero " << v1.getGenero() << endl;

    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "PRUEBA PARTIDA" << endl;

    dtFechaHora momento1(27, 3, 2020, 20, 30);
    Partida p1(10, momento1);
    dtFechaHora fPartida = p1.getFecha();
    cout << "Duracion de la partida: " << p1.getDuracion() << endl;
    cout << "Fecha de la partida: " << fPartida.getDia() << "/" << fPartida.getMes() << "/" << fPartida.getAnio() << " " << fPartida.getHora() << ":" << fPartida.getMinuto() << endl;

    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << endl;

    ContenedorJugador ConJugador;

    ConJugador.agregarJugador("J1", 21, "A");
    ConJugador.agregarJugador("J2", 22, "B");
    ConJugador.agregarJugador("J3", 23, "C");

    ConJugador.mostrarJugadores();

    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << endl;

    ContenedorVideojuego ConVideojuego;

    ConVideojuego.agregarVideojuego("Elden Ring", AVENTURA);
    ConVideojuego.agregarVideojuego("Fifa 2077", DEPORTE);
    ConVideojuego.agregarVideojuego("Hollow Knight", OTRO);

    ConVideojuego.mostrarVideojuegos();

    return 0;
}
