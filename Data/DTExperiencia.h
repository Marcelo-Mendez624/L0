#ifndef DTEXPERIENCIA_H
#define DTEXPERIENCIA_H

#include <string>
#include <set>
#include "DTFecha.h"

class DTExpe {
private:
    std::string codigoReserva;
    std::string descripcion;
    DTFecha fecha;
    std::set<std::string> turistas;
public:
    DTExpe(std::string cod, std::string desc, DTFecha f, std::set<std::string> turs);
    
    std::string getCodigoReserva() const;
    std::string getDescripcion() const;
    DTFecha getFecha() const;
    std::set<std::string> getTuristas() const;
};

#endif