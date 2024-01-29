#include "envio.h"

Envio::Envio(const Persona& remitente, const Persona& destinatario, float costo) : remitente(remitente), destinatario(destinatario), costoEnvio(costo) {}

float Envio::getCosto() const {
    return costoEnvio;
}