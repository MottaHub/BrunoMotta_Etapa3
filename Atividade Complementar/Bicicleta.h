#ifndef BICICLETA_H
#define BICICLETA_H

#include "Veiculo.h"

class Bicicleta : public Veiculo {
public:
    Bicicleta(string modelo);
    void mover() override;
};

#endif