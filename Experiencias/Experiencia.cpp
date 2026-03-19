#include "Experiencia.h"
#include "../Turista/Turista.h"
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
    for (Turista* t : colTuristas) {
        t->eliminarExperiencia(this); 
    }
    
    colTuristas.clear();
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


