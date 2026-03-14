
#include "EventoCultural.h"

EventoCultural::EventoCultural() {}

EventoCultural::~EventoCultural() {}

float EventoCultural::calcularCosto{

    int cantTuristas = colTuristas.size();

    float costo = precioBase * cantTuristas;

    if (usoCupon) {
        costo -= 5 * cantTuristas;
    }
    
    return costo;
}
