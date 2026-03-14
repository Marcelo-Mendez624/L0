
#include "EventoCultural.h"

EventoCultural::EventoCultural(
    std::string cod,
    std::string desc,
    int precio,
    DTFecha fecha,
    std::string ubic,
    bool cupon
): Experiencia(cod, desc, precio, fecha) {
    
    this->ubicacion = ubic;
    this->usoCupon = cupon;

}

EventoCultural::~EventoCultural() {}

bool EventoCultural::getCupon(){
    return this->usoCupon;
}

std::string EventoCultural::getUbicacion(){
    return this->ubicacion;
}

float EventoCultural::calcularCosto() {

    DTExpe exp = this->getDT();
    
    int cantTuristas = exp.getTuristas().size();
    int precioBase= this->precioBase;
    float costo = precioBase * cantTuristas;
    bool usoCupon = this->getCupon();

    if (usoCupon) {
        costo -= 5 * cantTuristas;
    }
    
    return costo;
}
