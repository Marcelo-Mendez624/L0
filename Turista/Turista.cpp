#include "Turista.h"

class Turista Turista::Turista(std::string ci; std::string nombre; std::string email)
{
    class Turista res;
    res.setCi(ci);
    res.setNombre(nombre);
    res.setEmail(email);

    return res;
}

Turista::~Turista()
{

}

std::string Turista::toString()
{
    return getCi() + "->" + getNombre() + "/" + getEmail();
}

std::set<std::string> Turista::listarExperiencias(desde: DTFecha, min: float, max: float)
{
    
}