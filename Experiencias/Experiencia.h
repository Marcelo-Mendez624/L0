#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

#include <string>
#include <set>
#include "../Data/DTFecha.h"
#include "../Data/DTExpe.h"

class Turista;                          //Definida en Turista.h

class Experiencia
{
protected:
    std::string codigoReserva;
    std::string descripcion;
    int precioBase;
    DTFecha fecha;
    std::set<Turista*> colTuristas;     //Pseudoatributo/link

public:
    //Constructor y destructor
    Experiencia(std::string cod, std::string desc, int precio, DTFecha f);
    virtual ~Experiencia();

    //Getters
    DTExpe getDT();
    std::string getCodigoReserva() { return codigoReserva; }

    //Misc
    virtual float calcularCosto() = 0;
    friend std::ostream& operator<<(std::ostream& os, const DTExpe& exp);
    void agregarTurista(Turista* turista);
    void eliminarTurista(Turista* turista);
};

#endif