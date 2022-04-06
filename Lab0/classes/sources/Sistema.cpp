#include "./../headers/Sistema.h"
// #include "./../headers/Partida.h"

void Sistema::mostrarMenuPrincipal()
{
    std::cout << "\e[0;92mBienvenido -"
              << " Elija una opción\e[0m:\n";
    std::cout << "\e[0;92m1)\e[0m Agregar Jugador.\n";
    std::cout << "\e[0;92m2)\e[0m Agregar Videojuego.\n";
    std::cout << "\e[0;92m3)\e[0m Obtener Jugadores.\n";
    std::cout << "\e[0;92m4)\e[0m Obtener Videojuegos.\n";
    std::cout << "\e[0;92m5)\e[0m Obtener Partidas.\n";
    std::cout << "\e[0;92m6)\e[0m Iniciar Partida.\n";
    std::cout << "Pulse \e[0;92m0\e[0m para salir.\n\nOpcion: \e[0;92m";
}

Sistema::Sistema() {}
Sistema::~Sistema() {}

void Sistema::agregarJugador()
{
    string nickname;
    int edad;
    string contrasenia;

    cout << "Ingrese nickname: ";
    cin.ignore();
    getline(cin, nickname);

    cout << "Ingrese edad: ";
    cin >> edad;

    cout << "Ingrese contrasenia: ";
    cin.ignore();
    getline(cin, contrasenia);

    ConJugador.agregarJugador(nickname, edad, contrasenia);
}

void Sistema::mostrarJugadores()
{
    // Lista los jugadores
    ConJugador.mostrarJugadores();

    // Devuelve un arreglo de DtJugador** y un int con la cantidad de jugadores.
    int cantJugadores = 0;
    DtJugador **dataJugador = new DtJugador *[ConJugador.getUltimo()];
    dataJugador = ConJugador.obtenerJugadores(cantJugadores);
    cout << "Total de jugadores: " << cantJugadores << endl;
}

void Sistema::agregarVideojuego()
{
    string nombre;
    TipoJuego genero;
    int opcionGenero;

    cout << "Ingrese nombre: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Generos de videojuego" << endl;
    cout << "0- Accion " << endl;
    cout << "1- Aventura " << endl;
    cout << "2- Deporte " << endl;
    cout << "3- Otro " << endl;
    cout << "Seleccione tipo: ";
    cin >> opcionGenero;

    switch (opcionGenero)
    {
    case 0:
        genero = ACCION;
        ConVideojuego.agregarVideojuego(nombre, ACCION);
        break;
    case 1:
        genero = AVENTURA;
        ConVideojuego.agregarVideojuego(nombre, AVENTURA);
        break;
    case 2:
        genero = DEPORTE;
        ConVideojuego.agregarVideojuego(nombre, DEPORTE);
        break;
    case 3:
        genero = OTRO;
        ConVideojuego.agregarVideojuego(nombre, OTRO);
        break;
    }
}

void Sistema::mostrarVideojuego()
{
    ConVideojuego.mostrarVideojuegos();

    int cantVideojuegos = 0;
    DtVideojuego **dataVideojuego = new DtVideojuego *[ConVideojuego.getUltimo()];

    dataVideojuego = ConVideojuego.obtenerVideojuegos(cantVideojuegos);

    cout << "Total de videojuegos: " << cantVideojuegos << endl;
}

void Sistema::agregarPartida()
{

    string nombreVideojuego;
    cout << "Indicar videojuego: ";
    cin.ignore();
    getline(cin, nombreVideojuego);

    if (ConVideojuego.existeVideojuego(nombreVideojuego))
    {
        string iniciador;
        cout << "Indicar nickname iniciador: ";
        cin.ignore();
        getline(cin, iniciador);

        if (ConJugador.existeJugador(iniciador) == false)
        {
            Jugador *jugadorIniciador;
            jugadorIniciador = ConJugador.devolverJugador(iniciador);

            DtFechaHora *fechaHora = new DtFechaHora(3, 4, 2022, 14, 35);
            float dur = 0;
            Partida *datos = new Partida();
            datos->setDuracion(dur);
            datos->setFecha(fechaHora);
            datos->setIniciador(jugadorIniciador);

            ConVideojuego.iniciarPartida(iniciador, nombreVideojuego, datos);
        }
        else
        {
            try
            {
                throw invalid_argument("No existe ese jugador");
            }
            catch (const std::invalid_argument &ia)
            {
                std::cerr << "Invalid argument: " << ia.what() << endl;
            }
        }
    }
    else
    {

        try
        {
            throw invalid_argument("No existe ese videojuego");
        }
        catch (const std::invalid_argument &ia)
        {
            std::cerr << "Invalid argument: " << ia.what() << endl;
        }
    }
}

void Sistema::mostrarPartida()
{

    string nombreVideojuego;
    cout << "Indicar videojuego: ";
    cin.ignore();
    getline(cin, nombreVideojuego);

    if (ConVideojuego.existeVideojuego(nombreVideojuego))
    {
        ConVideojuego.mostrarPartida(nombreVideojuego);
    }
    else
    {
        cout << "No existe ese videojuego" << endl;
    }
}