#ifndef ENTREGAEXPRESSA_H
#define ENTREGAEXPRESSA_H

#include "Entrega.h"

class EntregaExpressa : public Entrega {
public:
    EntregaExpressa(double distancia);

    double calcularFrete() override;
    void exibirPrazo() override;
    const char* getNome() override;
};

#endif