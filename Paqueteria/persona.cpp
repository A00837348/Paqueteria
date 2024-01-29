#include "persona.h"

persona::persona() {
    nombre = "";
    direccion = "";
}

void persona::setNombre(string n) {
    nombre = n;
}

string persona::getNombre() {
    return nombre;
}

void persona::setDireccion(string d) {
    direccion = d;
}

string persona::getDireccion() {
    return direccion;
}

persona::~persona() {
    
}