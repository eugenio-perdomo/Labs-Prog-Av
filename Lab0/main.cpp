#include "./classes/headers/Sistema.h"

using namespace std;

int main()
{
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
                Sistema::mostrarContenidoAnterior();
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