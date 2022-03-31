#include <iostream>
#include <string>
//hhhh
#include "Jugador.h"
#include "Videojuego.h"
#include "Partida.h"

using namespace std;

void mostrarContenidoAnterior();
void mostrarMenuPrincipal();

void mostrarMenuPrincipal()
{
    std::cout << "\e[0;92mBienvenido -" << " Elija una opción\e[0m:\n";
    std::cout << "\e[0;92m1)\e[0m Agregar Jugador.\n";
    std::cout << "\e[0;92m2)\e[0m Agregar Videojuego.\n";
    std::cout << "\e[0;92m3)\e[0m Obtener Jugadores.\n";
    std::cout << "\e[0;92m4)\e[0m Obtener Videojuegos.\n";
    std::cout << "\e[0;92m5)\e[0m Obtener Partidas.\n";
    std::cout << "\e[0;92m6)\e[0m Iniciar Partida.\n";
    std::cout << "Pulse \e[0;92m0\e[0m para salir.\n\nOpcion: \e[0;92m";
}

int main()
{
    int opcionUsuario;
    bool bandera = true;
    while (bandera == true)
    {
        mostrarMenuPrincipal();
        std::cin >> opcionUsuario;
        std::cout << "\e[0m";
        std::cin.clear();
        try
        {
            switch (opcionUsuario)
            {
            case 0: // CASO SALIDA DE SISTEMA
            {
                bandera = false;
                break;
            }
            case 1: // Agregar Jugador
            {
                mostrarContenidoAnterior();
                //menuCaso1();
                break;
            }
            case 2: // Agregar Videojuego
            {
                //menuCaso2();
                std::cout << "\n\e[0;93mAun no implementado\e[0m\n\n";
                break;
            }
            case 3: // Obtener Jugadores
            {
                std::cout << "\n\e[0;93mAun no implementado\e[0m\n\n";
                //menuCaso3();
                break;
            }
            case 4: // Obtener Videojuegos
            {
                std::cout << "\n\e[0;93mAun no implementado\e[0m\n\n";
                //menuCaso4();
                break;
            }
            case 5: // Obtener Partidas
            {
                std::cout << "\n\e[0;93mAun no implementado\e[0m\n\n";
                //menuCaso5();
                break;
            }
            case 6: // Iniciar Partida
            {
                std::cout << "\n\e[0;93mAun no implementado\e[0m\n\n";
                //menuCaso6();
                break;
            }
            default:
                throw std::invalid_argument("\n\e[0;31mLa opcion ingresada no es correcta.\n\e[0m");
            }
        }
        catch (std::invalid_argument &e)
        {
            std::cerr << e.what() << endl;
        }
    }
    return 0;
}

void mostrarContenidoAnterior()
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
}