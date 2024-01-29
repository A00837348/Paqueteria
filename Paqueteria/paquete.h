#ifndef PAQUETE_H
#define PAQUETE_H
#include "envio.h"

class paquete: public envio
{
    private:
        float largo, ancho, profundidad, peso, costoxkg;
    public:
        void setLargo{float 1};
        void setAncho{float a};
        void setProfundo{float p};
        void setPeso{float p};
        void setCostoKg{float c};
        float getLargo();
        float getAncho();
        float getProfundo();
        float getPeso();
        float getCostoKg();
        virtual ~Paquete();


    
    protected:
}