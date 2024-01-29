#ifndef SOBRE_H
#define SOBRE_H
#include "envio.h"

class Sobre::Envio
{
    private:
        float largo, ancho, cargo;
    public:
      Sobre();
      void setLargo{float 1};
      void setAncho{float a};  
      void setCargo{};
      float getLargo();
      float getAncho();
      float getCargo();
      float calculaCosto();
      virtual ~Sobre();  
    protected:
}