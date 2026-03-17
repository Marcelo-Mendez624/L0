#include "Experiencia.h"
#include "Turista.h"
#include <iostream>
#include <ostream>

Experiencia::Experiencia(std::string cod, std::string desc, int precio, DTFecha f) 
    : 
    codigoReserva(cod),
    descripcion(desc),
    precioBase(precio),
    fecha(f) 
{
    
}

Experiencia::~Experiencia()
{

}

DTExpe Experiencia::getDT() {
    std::set<std::string> setTuristas;

    std::set<Turista*>::iterator it;

    for (it = this->colTuristas.begin(); it != this->colTuristas.end(); ++it) 
    {
        setTuristas.insert((*it)->getCi());
    }

    return DTExpe(this->codigoReserva, this->descripcion, this->fecha, setTuristas);
}

std::ostream& operator<<(std::ostream& os, const DTExpe& dt) {
    DTFecha fecha = dt.getFecha();

    // Estructura
    // codigoReserva->descripcion(fecha) /
    os << dt.getCodigoReserva() << "->" << dt.getDescripcion() << " ("
       << fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio() << ")/";

    std::set<std::string> turistas = dt.getTuristas();
    
    std::set<std::string>::const_iterator milanesa;

    // agregar turistas 
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
