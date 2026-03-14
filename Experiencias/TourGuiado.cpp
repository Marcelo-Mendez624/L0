#include "TourGuiado.h"

TourGuiado::TourGuiado(std::string cod,std::string des, int precio, DTFecha fecha, std::string a,std::set<std::string> set_lugares): Experiencia(cod,des,precio,fecha){

    this->agencia=a;
    this->lugaresVisitados=set_lugares;
    
}
std::string TourGuiado::getAgencia(){

    return this->agencia;
}

float TourGuiado::calcularCosto(){
    int precio_base= this->precioBase;
    int cant_lugares=this->lugaresVisitados.size();
    DTExpe exp =this->getDT();
    int cant_turistas= exp.getTuristas().size();
    float res= precio_base + 2*cant_lugares*cant_turistas;

  return res;
}