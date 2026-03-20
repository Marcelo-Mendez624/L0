#include "DTExpe.h"

    
DTExpe::DTExpe(std::string cod, std::string desc, DTFecha f, std::set<std::string> turs)
{
    this->codigoReserva = cod;
    this->descripcion = desc;
    this->fecha = f;
    this->turistas = turs;
}

std::ostream& operator<<(std::ostream& os, const DTExpe& dt) {
    DTFecha fecha = dt.getFecha();

    os << dt.getCodigoReserva() << "->" << dt.getDescripcion() << " ("
       << fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio() << ")/";

    std::set<std::string> turistas = dt.getTuristas();
    std::set<std::string>::const_iterator turis;

    for(turis = turistas.begin(); turis != turistas.end(); turis++) {
        os << (*turis);

        std::set<std::string>::const_iterator sig = turis;
        sig++;
        
        if (sig != turistas.end()) {
            os << ", ";
        }
    }

    return os;
}
