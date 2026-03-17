#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

#include <string>
#include "Experiencia.h"
// #include "Data/Regimen.h"

class Alojamiento : public Experiencia 
{
private:
    std::string hotel;
    TipoRegimen regimen;
    int cantNoches;

public:
    //Constructor y destructor
    Alojamiento(std::string codigo, std::string desc, int precioBase, DTFecha fecha,
                std::string hotel, TipoRegimen regimen, int cantNoches); 
    virtual ~Alojamiento();

    //Getters
    std::string getHotel() const { return hotel; }

    //Misc
    virtual float calcularCosto();
};

#endif