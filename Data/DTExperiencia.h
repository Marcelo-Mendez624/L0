#ifndef DTEXPERIENCIA_H
#define DTEXPERIENCIA_H

#include <string>
#include <set>
#include <ostream>

class DTExpe {
private:
    DTFecha fecha;
    std::string descripcion;
    std::string codigoReserva;
    std::set<std::string> turistas;

public:
    DTExpe(std::string cod, std::string desc, DTFecha f, std::set<std::string> turs);
    
    DTFecha getFecha() const;
    std::string getDescripcion() const;
    std::string getCodigoReserva() const;
    std::set<std::string> getTuristas() const;
};

std::ostream& operator<<(std::ostream& os, const DTExpe& dt);

#endif