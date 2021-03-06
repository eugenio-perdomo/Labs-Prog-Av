#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED

#include "./../../datatypes/headers/DtFechaHora.h"
#include "./../../classes/headers/Jugador.h"

#define MAX_PARTIDAS 5

class Partida
{
private:
    DtFechaHora *fechaHora;
    float duracion;
    Jugador *iniciador;
public:
    Partida();
    Partida(float d, DtFechaHora *f);

    float getDuracion();
    DtFechaHora *getFecha();
    Jugador *getIniciador(); 
    
    void setDuracion(float d);
    void setFecha(DtFechaHora *f);
    void setIniciador(Jugador * iniciador);
    
    virtual ~Partida();
};

#endif // PARTIDA_H_INCLUDED
