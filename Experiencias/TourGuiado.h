#include "Experiencia.h"

class TourGuiado: public Experiencia{
  private:
  std::string agencia;
  std::set<std::string> lugaresVisitados;

  public:
  TourGuiado(std::string,std::string,int,DTFecha,std::string,std::set<std::string>);
  ~TourGuiado();
  std::string getAgencia();
  virtual float calcularCosto();
};