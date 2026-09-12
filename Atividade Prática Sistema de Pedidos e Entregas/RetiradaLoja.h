#ifndef RETIRADALOJA_H
#define RETIRADALOJA_H

#include "Entrega.h"

class RetiradaLoja : public Entrega {
public:
    RetiradaLoja(double distancia);

    double calcularFrete() override;
    void exibirPrazo() override;
    const char* getNome() override;
};

#endif