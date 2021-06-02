#ifndef Nave_h
#define Nave_h

#include "Piloto.h"

class Nave{
    public:
        Nave();
        Nave(std::string, double, Piloto); // std::string fabricante, double precio, Piloto piloto;
        std::string getFabricante() const;
        double getPrecio() const;
        void setFabricante(std::string);
        void setPrecio(double);
        void imprime();
    private:
        std::string fabricante;
        double precio;
        Piloto piloto;
};

Nave::Nave(){
    std::string fabricante = "-";
    double precio = 0;
}

Nave::Nave(std::string f, double pr, Piloto pl){
    fabricante = f;
    precio = pr;
    piloto = pl;
}

std::string Nave::getFabricante() const {
    return fabricante;
}

double Nave::getPrecio() const {
    return precio;
}

void Nave::setFabricante(std::string f){
    fabricante = f;
}

void Nave::setPrecio(double pr){
    precio = pr;
}

void Nave::imprime(){
    piloto.imprime();
    std::cout << "-.-ATRIBUTOS DE NAVE-.-" << std::endl;
    std::cout << "Fabricante: " << getFabricante() << std::endl;
    std::cout << "Precio: " << getPrecio() << std::endl;
    std::cout << "-..-.-.-.-.-.-.-.-.-.-" << std::endl;

}

#endif