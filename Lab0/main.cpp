#include "./classes/headers/Sistema.h"

using namespace std;

int main()
{
    Sistema sistema;

    int opcionUsuario;
    bool bandera = true;
    while (bandera == true)
    {
        Sistema::mostrarMenuPrincipal();
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
                sistema.agregarJugador();
                break;
            }
            case 2: // Agregar Videojuego
            {
                sistema.agregarVideojuego();
                break;
            }
            case 3: // Obtener Jugadores
            {
                sistema.mostrarJugadores();
                break;
            }
            case 4: // Obtener Videojuegos
            {
                sistema.mostrarVideojuego();
                break;
            }
            case 5: // Obtener Partidas
            {
                //std::cout << "\n\e[0;93mAun no implementado\e[0m\n\n";
                sistema.mostrarPartida();
                break;
            }
            case 6: // Iniciar Partida
            {
                sistema.agregarPartida();
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