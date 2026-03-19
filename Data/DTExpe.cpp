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
    std::set<std::string>::const_iterator milanesa;

    for(milanesa = turistas.begin(); milanesa != turistas.end(); milanesa++) {
        os << (*milanesa);

        std::set<std::string>::const_iterator sig = milanesa;
        sig++;
        
        if (sig != turistas.end()) {
            os << ", ";
        }
    }

    return os;
}
