#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

using namespace std;

class Pedido {
private:
    string nomeCliente;
    double valorCompra;

public:
    Pedido(string nomeCliente, double valorCompra);

    string getNomeCliente();
    double getValorCompra();

    void setNomeCliente(string nomeCliente);
    void setValorCompra(double valorCompra);

    void exibirDados();
};

#endif