#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

#define MAX_PARTIDAS 5

class dtFechaHora
{
private:
    int dia;
    int mes;
    int anio;
    int hora;
    int minuto;

public:
    dtFechaHora() {}

    dtFechaHora(int d, int m, int a, int h, int mi)
    {
        dia = d;
        mes = m;
        anio = a;
        hora = h;
        minuto = mi;
    }

    int getDia()
    {
        return dia;
    }
    int getMes()
    {
        return mes;
    }
    int getAnio()
    {
        return anio;
    }
    int getHora()
    {
        return hora;
    }
    int getMinuto()
    {
        return minuto;
    }

    ~dtFechaHora() {}
};

class Partida
{
private:
    float duracion;
    dtFechaHora fecha;

public:
    Partida() {}
    Partida(float d, dtFechaHora f)
    {
        setDuracion(d);
        setFecha(f);
    }

    ~Partida() {}

    void setDuracion(float d)
    {
        duracion = d;
    }

    void setFecha(dtFechaHora f)
    {
        fecha = f;
    }

    float getDuracion()
    {
        return duracion;
    }

    dtFechaHora getFecha()
    {
        return fecha;
    }
};

class PartidaIndividual : public Partida
{
public:
    PartidaIndividual() {}
    PartidaIndividual(float d, dtFechaHora f)
    {
        setDuracion(d);
        setFecha(f);
    }
    ~PartidaIndividual() {}
};

class PartidaMultijugador : public Partida
{
public:
    PartidaMultijugador() {}
    PartidaMultijugador(float d, dtFechaHora f)
    {
        setDuracion(d);
        setFecha(f);
    }
    ~PartidaMultijugador() {}
};

#endif // PARTIDA_H_INCLUDED
