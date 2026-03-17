#include "Experiencia.h"
#include <string>

class EventoCultural : public Experiencia
{
private:
    std::string ubicacion;
    bool usoCupon;

public:
    //Constructor y destructor
    EventoCultural(
        std::string cod,
        std::string desc,
        int precio,
        DTFecha fecha,
        std::string ubic,
        bool cupon
    );
    ~EventoCultural();

    //Getters
    bool getCupon(); 
    std::string getUbicacion(); 

    //Misc
    float calcularCosto () override;  
};