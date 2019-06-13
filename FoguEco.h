#ifndef FOGUECO
#define FOGUECO

#include "ComunicaoESP.h"
#include "FoguEco.h"

class FoguEco {
    public:
        FoguEco();

    private:
        ComunicaoESP comunicacaoESP;
        SmartFogao smartFogao;
};

#endif