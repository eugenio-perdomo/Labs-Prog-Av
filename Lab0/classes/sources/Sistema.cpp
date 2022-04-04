#include "./../headers/Sistema.h"
// #include "./../headers/Partida.h"

void Sistema::mostrarMenuPrincipal()
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

void Sistema::mostrarContenidoAnterior()
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

    DtFechaHora *momento1 = new DtFechaHora(27, 3, 2020, 20, 30);
    Partida *p1 = new Partida(10.f, momento1);
    DtFechaHora *fPartida = p1->getFecha();
    cout << "Duracion de la partida: " << p1->getDuracion() << endl;
    cout << "Fecha de la partida: " << fPartida->getDia() << "/" << fPartida->getMes() << "/" << fPartida->getAnio() << " " << fPartida->getHora() << ":" << fPartida->getMinuto() << endl;

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
    //Lista los jugadores
    ConJugador.mostrarJugadores();

    //Devuelve un arreglo de DtJugador** y un int con la cantidad de jugadores.
    int cantJugadores = 0;
    DtJugador ** dataJugador= new DtJugador *[ConJugador.getUltimo()];
    dataJugador = ConJugador.obtenerJugadores(cantJugadores);
    cout<<"Total de jugadores: "<<cantJugadores<<endl;

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

    // ConVideojuego.agregarVideojuego(nombre, genero);
}

void Sistema::mostrarVideojuego()
{
    ConVideojuego.mostrarVideojuegos();
}

void Sistema::agregarPartida() {

    string nombreVideojuego;
    cout <<"Indicar videojuego: ";
    cin.ignore();
    getline(cin, nombreVideojuego);

    if(ConVideojuego.existeVideojuego(nombreVideojuego)){
        string iniciador;
        cout <<"Indicar nickname iniciador: ";
        cin.ignore();
        getline(cin, iniciador);

        if (ConJugador.existeJugador(iniciador)==false){
            Jugador * jugadorIniciador;
            jugadorIniciador = ConJugador.devolverJugador(iniciador);
            
            DtFechaHora * fechaHora = new DtFechaHora(3,4,2022,14,35);
            float dur = 0;
            Partida * datos = new Partida();
            datos->setDuracion(dur);
            datos->setFecha(fechaHora);
            datos->setIniciador(jugadorIniciador);            

            ConVideojuego.iniciarPartida(iniciador, nombreVideojuego, datos);

        } else {
            cout<<"No existe ese jugador"<<endl;
        }
    } else {
        cout <<"No existe ese videojuego"<<endl;
    }
}

void Sistema::mostrarPartida() {

    string nombreVideojuego;
    cout <<"Indicar videojuego: ";
    cin.ignore();
    getline(cin, nombreVideojuego);

    if(ConVideojuego.existeVideojuego(nombreVideojuego)){
        ConVideojuego.mostrarPartida(nombreVideojuego);
    } else {
        cout<<"No existe ese videojuego"<<endl;
    }
}