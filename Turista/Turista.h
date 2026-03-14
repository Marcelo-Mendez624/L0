#include <string>


class Turista
{
public: 

private:
    std::string ci;
    std::string nombre;
    std::string email;

public:
    //Constructor y destructor
    class Turista Turista(std::string ci; std::string nombre; std::string email);
    ~Turista();

    //Getters
    std::string getCi() { return ci; }
    std::string getNombre() { return nombre; }
    std::string getEmail() { return email; }

    //Setters
    void setCi(std::string ci) { this->ci = ci; }
    void setNombre(std::string nombre) { this->nombre = nombre; }
    void setEmail(std::string email) { this->email = email; }

    //Misc
    std::string toString();
    std::set<std::string> listarExperiencias(desde: DTFecha, min: float, max: float);
};