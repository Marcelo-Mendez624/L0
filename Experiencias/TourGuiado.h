#ifndef TOURGUIADO_H
#define TOURGUIADO_H

#include "Experiencia.h"

class TourGuiado: public Experiencia
{
private:
    std::string agencia;
    std::set<std::string> lugaresVisitados;

public:
    //Constructor y destructor
    TourGuiado(std::string,std::string,int,DTFecha,std::string,std::set<std::string>);
    ~TourGuiado();

    //Getters
    std::string getAgencia();

    //Misc
    virtual float calcularCosto();
};
