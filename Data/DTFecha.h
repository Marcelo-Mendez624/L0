#ifndef DTFECHA_H
#define DTFECHA_H

class DTFecha
{
private:
    int dia;
    int mes;
    int anio;

public:
    //Constructor
    DTFecha();
    DTFecha(int d, int m, int a);

    //Getters
    int getDia() const { return dia; };
    int getMes() const { return mes; };
    int getAnio() const { return anio; };;
};

#endif
