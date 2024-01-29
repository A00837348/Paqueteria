#include "sobre.h"

Sobre::Sobre(const Persona& remitente, const Persona& destinatario, float costo, float largo, float ancho, float cargoAdicional)
    : Envio(remitente, destinatario, costo), largo(largo), ancho(ancho), cargoAdicional(cargoAdicional) {}

float Sobre::calculaCosto() const {
    if (largo > 25 || ancho > 30) {
        return getCosto() + cargoAdicional;
    } else {
        return getCosto();
    }
}