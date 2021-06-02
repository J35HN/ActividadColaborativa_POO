#ifndef Nave_h
#define Nave_h

#include "Piloto.h"

class Nave{
    public:
        // Constructores
        Nave();
        Nave(string, double, Piloto); // string fabricante, double precio, Piloto piloto;
        // Getters y Setters
        string getFabricante() const;
        double getPrecio() const;
        void setFabricante(std::string);
        void setPrecio(double);
        // Métodos
        virtual void imprime() = 0; // Hace la clase abstracta
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
}

#endif