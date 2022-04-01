#ifndef DTVIDEOJUEGO_H
#define DTVIDEOJUEGO_H
#include <string>

using namespace std;

class DtVideojuego
{
public:
    enum TipoJuego
    {
        Accion,
        Aventura,
        Deporte,
        Otro
    };
    DtVideojuego(string titulo, TipoJuego tipoJuego);

    // getters
    TipoJuego getTipoJuego();
    string getNombre();

    // setters
    void setTipoJuego(TipoJuego tipoJuego);
    void setNombre(string titulo);

    // metodos
    float totalHorasDeJuego();

    ~DtVideojuego();

private:
    string titulo;
    TipoJuego tipoJuego;
};
#endif