#include "Experiencia.h"
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
        EventoCultural();
        ~EventoCultural();

};
