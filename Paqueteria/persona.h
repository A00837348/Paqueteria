#ifndef PERSONA_H
#define PERSONA_H


using namespace std;

class persona
{
    private:
        string nombre;
        string direccion;
    public:
        persona();
        void setNombre(string n);
        string getNombre();
        void getDireccion(string d);
        string getDireccion();
        virtual ~persona();
        
    protected:
}