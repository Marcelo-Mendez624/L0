
#include "EventoCultural.h"

EventoCultural::EventoCultural() {}

EventoCultural::~EventoCultural() {}

bool EventoCultural::getCupon(){

    return this->usoCupon;
}


float EventoCultural::calcularCosto() {

    DTExpe exp = this->getDT();
    
    int cantTuristas = exp.getTuristas().size();
    int precioBase= this->getPrecioBase();
    float costo = precioBase * cantTuristas;
    bool usoCupon = this->getCupon();

    if (usoCupon) {
        costo -= 5 * cantTuristas;
    }
    
    return costo;
}
