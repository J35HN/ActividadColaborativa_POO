#ifndef Nave_h
#define Nave_h

#include "Piloto.h"

class Nave{
    public:
        Nave();
        Nave(std::string, double, Piloto); // string fabricante, double precio, Piloto piloto;
        std::string getFabricante() const;
        double getPrecio() const;
        void setFabricante(std::string);
        void setPrecio(double);
        void imprime();
    private:
        string fabricante;
        double precio;
        Piloto piloto;
};

Nave::Nave(){
    string fabricante = "-";
    double precio = 0;
}

Nave::Nave(string f, double pr, Piloto pl){
    fabricante = f;
    precio = pr;
    piloto = pl;
}

int Nave::getFabricante() const {
    return fabricante;
}

int Nave::getPrecio() const {
    return precio;
}

void Nave::setFabricante(int f){
    fabricante = f;
}

void Nave::setLicencia(int pr){
    precio = pr;
}

void Nave::imprime(){
    Piloto::imprime();
    std::cout << "-.-ATRIBUTOS DE NAVE-.-" << std::endl;
    std::cout << "Fabricante: " << getFabricante() << std::endl;
    std::cout << "Precio: " << getPrecio() << std::endl;
    std::cout << "-..-.-.-.-.-.-.-.-.-.-" << std::endl;

}

#endif