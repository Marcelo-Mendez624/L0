

TourGuiado::TourGuiado(std::string a,td::set<std::string> set_lugares){
  this->agencia=a;
  this->lugaresVisitados=set_lugares;
}
std::string TourGuiado::get_agencia(){
  return this->agencia;
}

virtual float TourGuiado::calcularCosto(){
  
}