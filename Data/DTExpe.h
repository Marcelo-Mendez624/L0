#ifndef DTEXPE_H
#define DTEXPE_H

#include <string>
#include <set>
#include <ostream>
#include "DTFecha.h"

class DTExpe {
private:
    DTFecha fecha;
    std::string descripcion;
    std::string codigoReserva;
    std::set<std::string> turistas;

public:
    //Constructor
    DTExpe(std::string cod, std::string desc, DTFecha f, std::set<std::string> turs);
    
    //Getters
    DTFecha getFecha() const {return this->fecha;}
    std::string getDescripcion() const {return this->descripcion;}
    std::string getCodigoReserva() const {return this->codigoReserva;}
    std::set<std::string> getTuristas() const {return this->turistas;}
};

std::ostream& operator<<(std::ostream& os, const DTExpe& dt);

#endif