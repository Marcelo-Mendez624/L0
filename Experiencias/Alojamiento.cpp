#include "Alojamiento.h"

Alojamiento::Alojamiento(std::string codigo, std::string desc, int precioBase, DTFecha fecha,
                         std::string hotel, TipoRegimen regimen, int cantNoches)
    
    : Experiencia(codigo, desc, precioBase, fecha), 
    hotel(hotel),
    regimen(regimen),
    cantNoches(cantNoches) 
{
}

Alojamiento::~Alojamiento() 
{
}

float Alojamiento::calcularCosto() {
    float costo = precioBase * cantNoches;

    if (regimen == AllInclusive) {
        costo += 10 * cantNoches;
    }

    return costo;
}