#ifndef Avion_h
#define Avion_h

#include "Nave.h"

class Avion: public Nave
{
private:
    double alturaMaxima;
public:
    // Constructores
    Avion();
    Avion(double, std::string, double, Piloto); // double alturaMaxima, string fabricante, double precio, Piloto piloto;
    // Getters y Setters
    double getAlturaMaxima() const;
    void setAlturaMaxima(double);
    // Métodos
    void imprime() override;
};

Avion::Avion(){
    alturaMaxima = 0;
}

Avion::Avion(double a, std::string fab, double pr, Piloto pl):Nave(fab, pr, pl){
    alturaMaxima = a;
}

double Avion::getAlturaMaxima() const {
    return alturaMaxima;
}

void Avion::setAlturaMaxima(double a){
    alturaMaxima = a;
}

void Avion::imprime(){
    Nave::imprime();
    std::cout << "-.-ATRIBUTOS AVION-.-" << std::endl;
    std::cout << "Altura Maxima: " << getAlturaMaxima() << std::endl;
    std::cout << "-.-.-.-.-.-.-.--.-.-" << std::endl << std::endl;
}

#endif