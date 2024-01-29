#include "paquete.h"

Paquete::Paquete(const Persona& remitente, const Persona& destinatario, float costo, float largo, float ancho, float profundidad, float peso, float costoPorKg)
    : Envio(remitente, destinatario, costo), largo(largo), ancho(ancho), profundidad(profundidad), peso(peso), costoPorKg(costoPorKg) {}

float Paquete::calculaCosto() const {
    return getCosto() + (peso * costoPorKg);
}