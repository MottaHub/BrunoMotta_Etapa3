#ifndef ENTREGA_H
#define ENTREGA_H

class Entrega {
protected:
    double distancia;

public:
    Entrega(double distancia);

    virtual double calcularFrete() = 0;
    virtual void exibirPrazo() = 0;
    virtual const char* getNome() = 0;

    virtual ~Entrega();
};

#endif