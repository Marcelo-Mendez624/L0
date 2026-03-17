#ifndef DTEXPERIENCIA_H
#define DTEXPERIENCIA_H

#include <string>
#include <set>
#include "DTFecha.h"

class DTExpe
{
private:
    DTFecha fecha;
    std::string descripcion;
    std::string codigoReserva;
    std::set<std::string> turistas;

public:
    //Constructor
    DTExpe(std::string cod, std::string desc, DTFecha f, std::set<std::string> turs);
    
    //getters
    DTFecha getFecha() const;
    std::string getDescripcion() const;
    std::string getCodigoReserva() const;
    std::set<std::string> getTuristas() const;
};

#endif