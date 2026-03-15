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
    std::set<Experiencia*> aux = this->getExperiencias();
    std::set<std::string> res;
    int anioDesde = desde.getAnio();
    int mesDesde = desde.getMes();
    int diaDesde = desde.getDia();

    std::set<Experiencia*>::iterator papafrita;
    for(papafrita = aux.begin(); papafrita != aux.end(); papafrita++)
    {
        float costo = (*papafrita)->calcularCosto();
        if ((min <= costo) && (costo <= max))
        {
            DTFecha fecha = ((*papafrita)->getDT()).getFecha();
            int anioFecha = fecha.getAnio();
            int mesFecha = fecha.getMes();
            int diaFecha = fecha.getDia();
        }
    }
}