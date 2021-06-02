#ifndef Piloto_h
#define Piloto_h
#include <iostream>

#include "Persona.h"

class Piloto:public Persona{
    public:
        // Constructores y destructor
        Piloto();
        Piloto(int, std::string, std::string); // int licencia, string nombre, string nacionalidad
        // Getters y Setters
        int getNumeroLicencia() const;
        void setNumeroLicencia(int);
        // Métodos
        void imprime() override;
    private:
        int numeroLicencia;
};
Piloto::Piloto(){
    numeroLicencia = 0;
}

Piloto::Piloto(int nl, std::string name, std::string nat): Persona(name, nat){
    numeroLicencia = nl;
}

int Piloto::getNumeroLicencia() const {
    return numeroLicencia;
}

void Piloto::setNumeroLicencia(int nl){
    numeroLicencia = nl;
}

void Piloto :: imprime(){
    std::cout << "-.-.-ATRIBUTOS DEL PILOTO-.-.-" << std::endl;
    Persona::imprime();
    //std::cout << "Nombre: " << Persona::getNombre() << std::endl;
    //std::cout << "Nacionalidad: " << Persona::getNacionalidad() << std::endl;
    //std::cout << "Numero de licencia: " << getNumeroLicencia() << std:: endl;
}

#endif