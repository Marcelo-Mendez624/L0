#include "TourGuiado.h"

TourGuiado::TourGuiado(std::string a,td::set<std::string> set_lugares){
  this->agencia=a;
  this->lugaresVisitados=set_lugares;
}
std::string TourGuiado::get_agencia(){
  return this->agencia;
}

virtual float TourGuiado::calcularCosto(){
int precio_base= this->precioBase;
int cant_lugares=this->lugaresVisitados.size();
DTExpe exp =this->getDT;
int cant_turistas= exp.getTuristas.size();
float res= precio_base + 2*cant_lugares*cant_turistas;
return res;
}