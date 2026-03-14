#include "Experiencia.h"
#include <string>

class EventoCultural : public Experiencia {

    private:

        std::string ubicacion;
        bool usoCupon;

    public:

        float calcularCosto () override;  
        std::string getCupon();  

        EventoCultural();
        ~EventoCultural();

};
