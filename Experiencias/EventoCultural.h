#ifndef EVENTOCULTURAL_H
#define EVENTOCULTURAL_H

#include "Experiencia.h"
#include "../Data/DTFecha.h"
#include <string>

class EventoCultural : public Experiencia {

    private:

        std::string ubicacion;
        bool usoCupon;

    public:

        float calcularCosto () override;  
        
        //getters
        bool getCupon(); 
        std::string getUbicacion(); 

        //constructor/destructor
        EventoCultural(
            std::string cod,
            std::string desc,
            int precio,
            DTFecha fecha,
            std::string ubic,
            bool cupon
        );

        ~EventoCultural();

};

#endif