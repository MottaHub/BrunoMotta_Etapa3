#ifndef MOTO_H
#define MOTO_H

#include "Veiculo.h"

class Moto : public Veiculo {
public:
    Moto(string modelo);
    void mover() override;
};

#endif