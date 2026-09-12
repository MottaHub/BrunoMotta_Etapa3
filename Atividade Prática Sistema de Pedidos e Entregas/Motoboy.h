#ifndef MOTOBOY_H
#define MOTOBOY_H

#include "Entrega.h"

class Motoboy : public Entrega {
public:
    Motoboy(double distancia);

    double calcularFrete() override;
    void exibirPrazo() override;
    const char* getNome() override;
};

#endif