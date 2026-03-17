#include "DTFecha.h"

DTFecha::DTFecha()
{
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
}

DTFecha::DTFecha(int d, int m, int a) :
    dia(d),
    mes(m),
    anio(a)
{
}