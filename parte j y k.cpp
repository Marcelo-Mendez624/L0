void parte_j(){
   DTFecha fecha(10,12,2023);
   std::set<std::string> lista_exp= listarExperiencias(fecha,0,1000);
  //Iterador de listas
   std::set<std::string>::iterator it;

   for (it = lista_exp.begin(); it != lista_exp.end(); ++it) {
        std::cout << *it << std::endl;
    }
}


void parte_k(){
  //iterador de listas
   std::list<Experiencia*>::iterator it;
	
	 for (it = experiencias.begin(); it != experiencias.end(); it++) {
		std::cout << (*it)->getDT() << std::endl;
	}
}
