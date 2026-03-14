#include <string>
#include "Experiencia.h"
#include "Data/Regimen.h"

class Alojamiento : public Experiencia 
{
private:
    std::string hotel;
    TipoRegimen regimen;
    int cantNoches;

public:
    Alojamiento(std::string codigo, std::string desc, int precioBase, DTFecha fecha,
                std::string hotel, TipoRegimen regimen, int cantNoches); 

    virtual ~Alojamiento();

    std::string getHotel() const { return hotel; }

    virtual float calcularCosto();
};