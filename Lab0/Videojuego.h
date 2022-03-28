#ifndef VIDEOJUEGO_H_INCLUDED
#define VIDEOJUEGO_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

#define MAX_VIDEOJUEGOS 5

enum TipoJuego
{
    ACCION,
    AVENTURA,
    DEPORTE,
    OTRO
};

class Videojuego
{
private:
    string nombre;
    TipoJuego genero;

public:
    Videojuego() {}

    Videojuego(string n, TipoJuego g)
    {
        setNombre(n);
        setGenero(g);
    }

    ~Videojuego() {}

    void setNombre(string n)
    {
        nombre = n;
    }
    void setGenero(TipoJuego g)
    {
        genero = g;
    }

    string getNombre()
    {
        return nombre;
    }
    TipoJuego getGenero()
    {
        return genero;
    }

    string traducirGenero(Videojuego aux)
    {
        switch (aux.getGenero())
        {
        case 0:
            return "ACCION";
        case 1:
            return "AVENTURA";
        case 2:
            return "DEPORTE";
        case 3:
            return "OTRO";
        default:
            return "OTRO";
        }
    }
};

class ContenedorVideojuego
{
private:
    Videojuego arreglo[MAX_VIDEOJUEGOS];
    int ultimo = 0;

public:
    ContenedorVideojuego() {}
    ~ContenedorVideojuego() {}

    void agregarVideojuego(string nombre, TipoJuego genero)
    {
        if (ultimo == MAX_VIDEOJUEGOS)
        {
            cout << "Error: se intento superar el límite de videojuegos" << endl;
        }
        else
        {

            if (existeVideojuego(nombre) == false)
            {
                Videojuego aux(nombre, genero);
                arreglo[ultimo] = aux;
                ultimo = ultimo + 1;
            }
            else
            {
                try
                {
                    throw invalid_argument("El videojuego ya se encuentra registrado");
                }
                catch (const std::invalid_argument &ia)
                {
                    std::cerr << "Invalid argument: " << ia.what() << endl;
                }
            }
        }
    }

    void mostrarVideojuegos()
    {
        int aux = 0;

        while (aux < ultimo)
        {
            cout << "El videojuego " << arreglo[aux].getNombre() << " es del genero " << arreglo[aux].traducirGenero(arreglo[aux]) << endl;
            aux = aux + 1;
        }
    }

    bool existeVideojuego(string nombre)
    {
        int aux = 0;

        while (aux < ultimo)
        {
            if (arreglo[aux].getNombre() == nombre)
            {
                return true;
            }
            aux = aux + 1;
        }
        return false;
    }
};

#endif // VIDEOJUEGO_H_INCLUDED
