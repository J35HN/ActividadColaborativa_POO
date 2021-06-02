#ifndef Automovil_h
#define Automovil_h

#include "Nave.h"

class Automovil: public Nave
{
private:
    std::string color;
public:
    Automovil();
    Automovil(std::string, std::string, double, Piloto); // string color, string fabricante, double precio, Piloto piloto;
    ~Automovil();
    std::string getColor() const;
    void setColor(std::string);
    void imprime();
};

Automovil::Automovil(){
    color = "-";
}

Automovil::Automovil(std::string c, std::string fab, double pr, Piloto pl):Nave(fab, pr, pl){
    color = c;
}

Automovil::~Automovil(){}

std::string Automovil::getColor() const {
    return color;
}

void Automovil::setColor(std::string c){
    color = c;
}

void Automovil::imprime(){
    Nave::imprime();
    std::cout << "-.-ATRIBUTOS AUTOMOVIL-.-" << std::endl;
    std::cout << "Color: " << getColor() << std::endl;
    std:: cout << "-.-.-.-.-.-.-.-.-.-.-.-" << std::endl;
}

#endif