#include "Experiencia.h"
#include "Data/Regimen.h"

class Alojamiento : Experiencia
{
    std::string hotel;
    TipoRegimen regimen;
    int cantNoches;

public:
    std::string getHotel() { return hotel; }

    virtual float calcularCosto();
};