#ifndef DTFECHAHORA_H
#define DTFECHAHORA_H
#include <ostream>

using namespace std;

class DtFechaHora
{
private:
    int dia, mes, anio, hora, minuto;
    bool isValid();

public:
    DtFechaHora();
    DtFechaHora(int dia, int mes, int anio, int hora, int minuto);

    int getDia();
    int getMes();
    int getAnio();
    int getHora();
    int getMinuto();

    friend ostream &operator<<(ostream &o, DtFechaHora &dfh);
    bool operator<(const DtFechaHora &dfh) const;

    virtual ~DtFechaHora();
};
#endif
