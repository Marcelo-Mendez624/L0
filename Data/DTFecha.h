class DTFecha {
private:
    int dia;
    int mes;
    int anio;
public:
    DTFecha(int d, int m, int a);
    int getDia() const { return dia; };
    int getMes() const { return mes; };
    int getAnio() const { return anio; };;
};