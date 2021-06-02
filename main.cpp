/*
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Actividad Colaborativo de Programación
_______________________________________

Autores: 
- Joel Isais Solano Ocampo | A01639239
- Jeshua Nava Avila | A01639282

Matería:
- TC1030.11 | Programación Orientado a Objetos

Profesora:
- Fabiola Uribe Plata

Fecha de entrega:
- 02/06/2021
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
*/
//#include <iostream> // Ya se incluye en Piloto.h
#include <fstream>
using namespace std;

#include "Automovil.h"
#include "Barco.h"
#include "Avion.h"

// Función que carga los datos del archivo "entrada.txt",
// Regresa la cantidad de naves creadas.
int cargaDatos(Nave* arr[]){
    ifstream archivo;
    string tipoNave, fabricante, nombre, nacionalidad, color, temp;
    double alturaMaxima, precio;
    int licencia, cantDatos=0;
    float largo;
    archivo.open("entrada.txt");
    while(archivo >> tipoNave){
        if(tipoNave == "Avion"){
            // Leemos nuestros datos
            archivo >> fabricante >> precio >> alturaMaxima;
            archivo >> temp >> nombre >> nacionalidad >> licencia;
            // Creamos nuestro piloto y Avion. Guardamos dentro de un arreglo.
            Piloto pilot(licencia, nombre, nacionalidad);
            arr[cantDatos] = new Avion(alturaMaxima, fabricante, precio, pilot);
            cantDatos++;
        } else if (tipoNave == "Barco"){
            // Leemos nuestros datos
            archivo >> fabricante >> precio >> largo;
            archivo >> temp >> nombre >> nacionalidad >> licencia;

            // Creamos nuestro pilot y Barco. Guardamos dentro de un arreglo.
            Piloto pilot(licencia, nombre, nacionalidad);
            arr[cantDatos] = new Barco(largo, fabricante, precio, pilot);
            cantDatos++;
        } else if (tipoNave == "Auto") {
            // Leemos nuestros datos
            archivo >> fabricante >> precio >> color;
            archivo >> temp >> nombre >> nacionalidad >> licencia;

            // Creamos nuestro piloto y Avion. Guardamos dentro de un arreglo
            Piloto pilot(licencia, nombre, nacionalidad);

            arr[cantDatos] = new Automovil(color, fabricante, precio, pilot);
            cantDatos++;
        }
    }
    archivo.close();
    return cantDatos;
}

int main()
{
    // Declaramos nuestro arreglo de objetos Nave
    Nave* arregloNaves[10];
    int numDatos = cargaDatos(arregloNaves);
    
    // Iteramos nuestro arreglo para imprimir nuestros datos de la nave.
    for(int i=0; i<numDatos; i++){
        // Dynamic cast, para llamar al método imprime adecuado, y no la de Nave::imprime().
        if(Avion* c=dynamic_cast<Avion*>(arregloNaves[i])){
            c -> imprime();
        }
        if(Barco* c=dynamic_cast<Barco*>(arregloNaves[i])){
            c -> imprime();
        }
        if(Automovil* c=dynamic_cast<Automovil*>(arregloNaves[i])){
            c -> imprime();
        }
        
        //arregloNaves[i] -> imprime();
    }
    
    return 0;
}