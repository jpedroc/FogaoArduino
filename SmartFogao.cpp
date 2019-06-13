#include "SmartFogao.h"

SmartFogao::SmartFogao(
    uint8_t portRele,
    uint8_t portSensorDeFogo,
    uint8_t portControleTemperatura,
    uint8_t portSensorDeTemperatura,
    uint8_t portSensorDeGas
    )
{
    this->portRele = portRele;
    this->portSensorDeFogo = portSensorDeFogo;
    this->portControleTemperatura = portControleTemperatura;
    this->portSensorDeTemperatura = portSensorDeTemperatura;
    this->portSensorDeGas = portSensorDeGas;
    
    // TODO -> Inserir os pinMode()'s

    estaLigado = false;
}

void SmartFogao::ligar() {
    // Deve ser chamada sempre que for instanciado um novo SmartFogao.
    // O fogao só funcionará se estiver ligado.
    estaLigado = true;
}

void SmartFogao::desligar() {
    // É chamada sempre que se desejar interromper o funcionamento do fogao.
    // O fogão não funcionará se estiver desligado.
    estaLigado = false;
}

bool SmartFogao::getEstaLigado() {
    // Retorna o estado atual do fogão. (Ligado / Desligado)
    return estaLigado;
}

uint8_t SmartFogao::getPortRele() {
    return portRele;
}

uint8_t SmartFogao::getPortSensorDeFogo() {
    return portSensorDeFogo;
}

uint8_t SmartFogao::getPortControleTemperatura() {
    return portControleTemperatura;
}

uint8_t SmartFogao::getPortSensorDeTemperatura() {
    return portSensorDeTemperatura;
}

uint8_t SmartFogao::getPortSensorDeGas() {
    return portSensorDeGas;
}

// TODO -> Inserir os SET's
