#ifndef ENTREGANORMAL_H
#define ENTREGANORMAL_H

#include "Entrega.h"

class EntregaNormal : public Entrega {
private:
    double valorCompra;

public:
    EntregaNormal(double distancia, double valorCompra);

    double calcularFrete() override;
    void exibirPrazo() override;
    const char* getNome() override;
};

#endif