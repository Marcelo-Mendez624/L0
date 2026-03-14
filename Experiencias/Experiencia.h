#include <string>
#include <set>
#include "Data/DTFecha.h"
#include "Data/DTExperiencia.h"

class Turista; 


class Experiencia
{
public:
    Experiencia(std::string cod, std::string desc, int precio, DTFecha f);
    virtual ~Experiencia();

protected:
    std::string codigoReserva;
    std::string descripcion;
    int precioBase;
    DTFecha fecha;
    std::set<Turista*> colTuristas;     //Pseudoatributo/link

public:
    std::string getCodigoReserva() { return codigoReserva; }
    DTExpe getDT();
    virtual float calcularCosto() = 0;
    friend std::ostream& operator<<(std::ostream& os, const Experiencia& exp);
};