#ifndef DTPARTIDA_H
#define DTPARTIDA_H
#include <string>
#include "DtFechaHora.h"

using namespace std;

class DtPartida {

    public:
    DtPartida(DtFechaHora& fecha, float duracion);

    private:
    DtFechaHora fecha;
    float duracion;
};


#endif