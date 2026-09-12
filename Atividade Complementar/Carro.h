#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

class Carro : public Veiculo {
public:
    Carro(string modelo);
    void mover() override;
};

#endif