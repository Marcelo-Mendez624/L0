#include <string>

class Experiencia
{
public:
    Experiencia();
    ~Experiencia();

    // Variables privadas y funciones
private:
    std::string CodigoReserva;

    // Getters y Setters
public:
    std::string getCodigoReserva() { return CodigoReserva; }

    float calcularCosto();
};

