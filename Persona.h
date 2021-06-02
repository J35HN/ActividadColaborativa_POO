#ifndef Persona_h
#define Persona_h
#include <string>
#include <iostream>
class Persona
{
private:
    std::string nombre;
    std::string nacionalidad;

public:
    // Constructores
    Persona();
    Persona(std::string, std::string); // string nombre, string nacionalidad

    // Getters y Setters
    std::string getNombre() const;
    std::string getNacionalidad() const;
    void setNombre(std::string);
    void setNacionalidad(std::string);

    // Métodos
    virtual void imprime() = 0; // Convertir la clase en "abstracta"
};

// Constructores y destructor
Persona::Persona()
{
    nombre = "-";
    nacionalidad = "-";
}
Persona :: Persona(std::string name, std::string nat)
{
    nombre = name;
    nacionalidad = nat;
}

// Getters y Setters
std::string Persona :: getNombre() const{return nombre;}
std::string Persona :: getNacionalidad() const{return nacionalidad;}
void Persona :: setNombre(std::string name){nombre = name;}
void Persona :: setNacionalidad(std::string nat){nacionalidad = nat;}

// Métodos
void Persona :: imprime(){
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Nacionalidad: " << getNacionalidad() << std::endl;
}

#endif