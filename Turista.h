#include <string>
class Turista
{
public: 
    Turista();
    ~Turista();

private:
    std::string ci;
    std::string nombre;
    std::string email;

public:
    std::string getCi() { return ci; }
};