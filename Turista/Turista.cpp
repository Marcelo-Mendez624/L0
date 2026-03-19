#include "Turista.h"

Turista::Turista(std::string ci, std::string nombre, std::string email)
{
    this->setCi(ci);
    this->setNombre(nombre);
    this->setEmail(email);
}

Turista::~Turista()
{
    this->colExperiencias.clear();
}

std::string Turista::toString()
{
    return getCi() + "->" + getNombre() + "/" + getEmail();
}

std::set<std::string> Turista::listarExperiencias(DTFecha desde, float min, float max)
{
    std::set<std::string> res;
    int anioDesde = desde.getAnio();
    int mesDesde = desde.getMes();
    int diaDesde = desde.getDia();

    // Iteramos directamente sobre el atributo de la clase
    std::set<Experiencia*>::iterator exp;
    for(exp = this->colExperiencias.begin(); exp != this->colExperiencias.end(); exp++)
    {
        float costo = (*exp)->calcularCosto();
        if ((min <= costo) && (costo <= max))
        {
            DTFecha fecha = ((*exp)->getDT()).getFecha();
            int anioFecha = fecha.getAnio();
            int mesFecha = fecha.getMes();
            int diaFecha = fecha.getDia();

            if ((anioDesde < anioFecha) || 
                (anioDesde == anioFecha && mesDesde < mesFecha) || 
                (anioDesde == anioFecha && mesDesde == mesFecha && diaDesde <= diaFecha)) 
            {
                res.insert((*exp)->getCodigoReserva());
            }
        }
    }
    return res;
}

void Turista::agregarExperiencia(Experiencia* exp) {
    if(exp != nullptr) {
        this->colExperiencias.insert(exp);
        exp->agregarTurista(this);
    }
}

void Turista::eliminarExperiencia(Experiencia* exp){
    if(exp != nullptr) {
        this->colExperiencias.erase(exp); // Solo borra localmente para no romper iteradores
    }
}
