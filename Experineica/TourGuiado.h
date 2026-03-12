#include "Experiencia.h"

class TourGuiado: public Experiencia{
  private:
  std::string agencia;
  std::set<std::string> lugaresVisitados;

  
  public:
  TourGuiado(std::string,std::set<std::string>);
  ~TourGuiado();
  std::string get_agencia();
  virtual float calcularCosto();
}