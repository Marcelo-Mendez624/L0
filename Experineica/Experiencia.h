#include <string>
#include "Data/Fecha.h"


class Experiencia
{
public:
    Experiencia();
    ~Experiencia();

    // Variables privadas y funciones
private:
    std::string CodigoReserva;
    std::string descripcion;
    int precioBase;
    DTFecha fecha;


    // Getters y Setters
public:
    std::string getCodigoReserva() { return CodigoReserva; }
    
    virtual float calcularCosto() = 0;
};

