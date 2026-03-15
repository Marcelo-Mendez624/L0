#include <iostream>
#include <list>
#include <map>
#include <string>
#include <set>

#include "Turista.h"

// EXPERIENCIAS
#include "Experiencia.h"
#include "Alojamiento.h"

//  DATA TYPES
#include "DTFecha.h"
#include "Data/Regimen.h"


std::list<Experiencia*> experiencias;
std::map<std::string, Experiencia*> map_experiencias;

std::list<Turista*> turistas;
std::map<std::string, Turista*> map_turistas;

void coleccion_guardarExperiencia(Experiencia* exp){
	experiencias.push_back(exp);
	std::pair<std::string, Experiencia*> entry(exp->getCodigoReserva(), exp);
    map_experiencias.insert(entry);
}
void coleccion_eliminarExperiencia(Experiencia* exp){
	experiencias.remove(exp);
	map_experiencias.erase(exp->getCodigoReserva());
}

void coleccion_guardarTurista(Turista* tur){
	turistas.push_back(tur);
	std::pair<std::string, Turista*> entry(tur->getCi(), tur);
    map_turistas.insert(entry);
}

Turista* coleccion_getTurista(std::string ci){
	return map_turistas[ci];
}

Experiencia* coleccion_getExperiencia(std::string codigoReserva){
	return map_experiencias[codigoReserva];
}

void parte_a()
{
  //primer objeto de Alojamiento
	std::string codigo = "ALX5489";
	std::string desc = "Hotel moderno";
	std::string name = "Hotel Lindorf";

	DTFecha miFecha(18, 5, 2020);

	TipoRegimen miRegimen = TipoRegimen::AllInclusive;

	Alojamiento* alojamiento1 = new Alojamiento(codigo, desc, 30, miFecha, name, miRegimen, 5);

  coleccion_guardarExperiencia(alojamiento1);

   //segundo objeto de Alojamiento
   codigo="ALJ4789";
   desc="Todas las habitaciones con vista al mar";
   name= "Hotel SeaView";

  
   DTFecha miFecha2(10, 2, 2025);
  
   miRegimen= MediaPension;
   
   Alojamiento* alojamiento2= new Alojamiento(codigo,desc,100, miFecha2,name, miRegimen, 15);

   coleccion_guardarExperiencia(alojamiento2);

}

void parte_b(){
  // primer objeto de TourGuiado
    std::string codigo="TGO4657";
    std::string des="Plazas de Montevideo";
    std::string agencia="Paseos SA";

    DTFecha fecha1(28,8,2024);
  
    std::set<std::string> lugaresVisitados;
    lugaresVisitados.insert("Plaza Independencia");
    lugaresVisitados.insert("Plaza Matriz");
  
    TourGuiado* tour1= new TourGuiado(codigo,des,10,fecha1,agencia,lugaresVisitados);

    coleccion_guardarExperiencia(tour1);

  //segundo objeto de TourGuiado
    codigo="TGR3257";
    des="Puntos emblematicos";
    agencia="Recorre";

    DTFecha fecha2(29,8,2024);
  
    lugaresVisitados.clear();
    lugaresVisitados.insert("Puerta de la Ciudadela");
    lugaresVisitados.insert("Mausoleo");
    lugaresVisitados.insert("Cabildo");
    lugaresVisitados.insert("Palacio Salvo");

    TourGuiado* tour2=new TourGuiado(codigo,des,5,fecha2,agencia,lugaresVisitados);

    coleccion_guardarExperiencia(tour2);
}

void parte_c(){
  std::string codigo="ECP1346";
  std::string des="Danza en el Solis";
  DTFecha fecha(29,10,2025);
  std::string ubicacion="Teatro Solis";

  EventoCultural* evento=new EventoCultural(codigo,des,10,fecha,ubicacion,true);

  coleccion_guardarExperiencia(evento);
}

void parte_d(){

	// Iterador para listas
	std::list<Experiencia*>::iterator pure;
	
	for (pure = experiencias.begin(); pure != experiencias.end(); pure++) {
		std::cout << **pure << std::endl;
	}
}

void parte_e(){
	Turista *t1;
	Turista *t2;

	t1 = new Turista("4.951.278-9", "Vanesa Castro", "vcastro.uy@servidor.net");
	t2 = new Turista("1.535.442-0", "Karen Santos", "karen.s89@internet.uy");

	coleccion_guardarTurista(t1);
	coleccion_guardarTurista(t2);
}

void parte_f(){

	std::list<Turista*>::iterator bondiola;

	for (bondiola = turistas.begin(); bondiola != turistas.end(); bondiola++) {
		std::cout << (*bondiola)->toString() << std::endl;
	}
}

void parte_g(){
	Turista *t1 = map_turistas["4.951.278-9"];	// Vanesa Castro
	Turista *t2 = map_turistas["1.535.442-0"];	// Karen Santos

	Experiencia *exp1 = map_experiencias["ALX5489"];	// Para Vanesa Castro
	Experiencia *exp2 = map_experiencias["ALJ4789"];	// Para Vanesa Castro
	Experiencia *exp3 = map_experiencias["TGR3257"];	// Para Vanesa Castro
	Experiencia *exp4 = map_experiencias["ECP1346"];	// Para Vanesa Castro
	Experiencia *exp5 = map_experiencias["TGO4657"];	// Para Karen Santos
	Experiencia *exp6 = map_experiencias["TGR3257"];	// Para Karen Santos

	(t1->getExperiencias()).insert(exp1);
	(t1->getExperiencias()).insert(exp2);
	(t1->getExperiencias()).insert(exp3);
	(t1->getExperiencias()).insert(exp4);
	(t2->getExperiencias()).insert(exp5);
	(t2->getExperiencias()).insert(exp6);
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
}

void cleanUp(){
}

int main() {
	std::cout << "parte_a" <<  std::endl;
	parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}
