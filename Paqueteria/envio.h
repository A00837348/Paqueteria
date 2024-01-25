#ifndef ENVIO_H
#define ENVIO_H
#include "persona.h"


class Envio
{
    private:
        persona emisor;
        persona remitente;
        float costoe;
    public:
        envio();
        void setCosto();
        float getCosto();
        virtual float calculaCosto()=0;
        virtual ~envio();
    
    protected:
}