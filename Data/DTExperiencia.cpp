#include "DTExperiencia.h"
#include "DTFecha.h"

DTExpe::DTExpe(std::string cod, std::string desc, DTFecha f, std::set<std::string> turs)
{
    this->codigoReserva = cod;
    this->descripcion = desc;
    this->fecha = f;
    this->turistas = turs;
}