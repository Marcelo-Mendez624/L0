#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

#include <string>
#include <set>
#include "Data/DTFecha.h"
#include "Data/DTExperiencia.h"

class Experiencia
{
protected:
    DTFecha fecha;
    int precioBase;
    std::string descripcion;
    std::string codigoReserva;
    std::set<Turista*> colTuristas;     //Pseudoatributo/link

public:
    //Constructor y destructor
    Experiencia(std::string cod, std::string desc, int precio, DTFecha f);
    virtual ~Experiencia();

    //Getters
    DTExpe getDT();
    std::string getCodigoReserva() { return codigoReserva; }

    //Misc
    virtual float calcularCosto() = 0;
    friend std::ostream& operator<<(std::ostream& os, const Experiencia& exp);
};

#endif