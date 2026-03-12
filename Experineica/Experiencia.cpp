#include "Experiencia.h"
#include "Turista.h"

Experiencia::Experiencia()
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