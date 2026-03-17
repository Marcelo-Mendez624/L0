#ifndef TURISTA_H
#define TURISTA_H

#include <string>
#include <../Experiencias/Experiencia.h>


class Turista
{
private:
    std::string ci;
    std::string email;
    std::string nombre;

protected:
    std::set<Experiencia*> colExperiencias;     //Pseudoatributo/link

public:
    //Constructor y destructor
    Turista(std::string ci, std::string nombre, std::string email);
    ~Turista();

    //Getters
    std::string getCi() { return ci; }
    std::string getEmail() { return email; }
    std::string getNombre() { return nombre; }
    std::set<Experiencia*> getExperiencias() { return colExperiencias; }

    //Setters
    void setCi(std::string ci) { this->ci = ci; }
    void setEmail(std::string email) { this->email = email; }
    void setNombre(std::string nombre) { this->nombre = nombre; }

    //Misc
    std::string toString();
    std::set<std::string> listarExperiencias(DTFecha desde, float min, float max);
    void agregarExperiencia(Experiencia* exp);
    void eliminarExperiencia(Experiencia* exp);
};

#endif
