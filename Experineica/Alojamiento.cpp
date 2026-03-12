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
    return 0.0;
}