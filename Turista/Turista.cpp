#include "Turista.h"

Turista::Turista(std::string ci, std::string nombre, std::string email)
{
    this->setCi(ci);
    this->setNombre(nombre);
    this->setEmail(email);
}

Turista::~Turista()
{

}

std::string Turista::toString()
{
    return getCi() + "->" + getNombre() + "/" + getEmail();
}

std::set<std::string> Turista::listarExperiencias(DTFecha desde, float min, float max)
{
    
}