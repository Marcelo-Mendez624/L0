#include <string>
#include "Data/DTFecha.h"
#include "Data/DTExperiencia.h"

class Experiencia
{
public:
    Experiencia();
    ~Experiencia();

    // Variables privadas y funciones
private:
    std::string codigoReserva;
    std::string descripcion;
    int precioBase;
    DTFecha fecha;
    std::set<Turista*> colTuristas;

    // Getters y Setters
public:
    std::string getCodigoReserva() { return codigoReserva; }
    DTExpe getDT();
    virtual float calcularCosto() = 0;
};

