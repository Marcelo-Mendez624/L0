#include "Experiencia.h"
#include "Turista.h"

Experiencia::Experiencia(std::string cod, std::string desc, int precio, DTFecha f) 
    : 
    codigoReserva(cod),
    descripcion(desc),
    precioBase(precio),
    fecha(f) 
{
    
}

Experiencia::~Experiencia()
{

}

DTExpe Experiencia::getDT() {
    std::set<std::string> setTuristas;

    std::set<Turista*>::iterator it;

    for (it = this->colTuristas.begin(); it != this->colTuristas.end(); ++it) 
    {
        setTuristas.insert((*it)->getCi());
    }

    return DTExpe(this->codigoReserva, this->descripcion, this->fecha, setTuristas);
}

std::ostream& operator<<(std::ostream& os, const Experiencia& exp)
{
    //Traemos DTExpe desde la experiencia exp
    DTExpe DT = exp.getDT();

    //codigoReserva->descripcion(fecha)/
    os << DT.getCodigoReserva() << "->" << DT.getDescripcion() << "("
       << DT.getFecha() << ")/";
    
    //Inicializamos iterador MILANESAAAAAAAAAAAAAAAA
    std::set<std::string>::iterator milanesa;

    //Iteramos cada elemento del conjunto turistas, agregamos a os y agregamos la coma
    for(milanesa = DT.turistas.begin(); milanesa != DT.turistas.end(); milanesa++)
    {
        os << (*milanesa);

        std::set<std::string>::iterator sig = milanesa;
        sig++;
        if (sig != DT.turistas.end())
            os << ",";
    }

    return os;
}
