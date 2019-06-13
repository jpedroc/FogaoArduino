#ifndef SMARTFOGAO
#define SMARTFOGAO

class SmartFogao {
    public:
        SmartFogao(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
        void ligar();
        void desligar();
        void funcionar();
        void atualizarPortas();
        bool portValido();

        bool getEstaLigado()
        uint8_t getPortRele();
        uint8_t getPortSensorDeFogo();
        uint8_t getPortControleTemperatura();
        uint8_t getPortSensorDeTemperatura();
        uint8_t getPortSensorDeGas();
        void setPortRele();
        void setPortSensorDeFogo();
        void setPortControleTemperatura();
        void setPortSensorDeTemperatura();
        void setPortSensorDeGas();
    
    private:
        bool estaLigado;
        uint8_t portRele;
        uint8_t portSensorDeFogo;
        uint8_t portControleTemperatura;
        uint8_t portSensorDeTemperatura;
        uint8_t portSensorDeGas;
};

#endif SMARTFOGAO