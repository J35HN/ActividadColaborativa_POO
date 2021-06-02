#ifndef Barco_h
#define Barco_h

#include "Nave.h"

class Barco: public Nave
{
private:
    float largo;
public:
    // Constructores
    Barco();
    Barco(float, std::string, double, Piloto); // float Largo, string fabricante, double precio, Piloto piloto;
    
    // Getters y Setters
    float getLargo() const;
    void setLargo(float);
    // Métodos
    void imprime() override;
};

Barco::Barco(){
    largo = 0;
}

Barco::Barco(float l, std::string fab, double pr, Piloto pl):Nave(fab, pr, pl){
    largo = l;
}

float Barco::getLargo() const {
    return largo;
}

void Barco::setLargo(float l){
    largo = l;
}

void Barco::imprime(){
    Nave::imprime();
    std::cout << "-.-ATRIBUTOS BARCO-.-" << std::endl;
    std::cout << "Largo: " << getLargo() << std::endl;
    std::cout << "-.-.-.-.-.-.-.-.-.-.-" << std::endl << std::endl;
}

#endif