#include "Pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido(string nomeCliente, double valorCompra) {
    this->nomeCliente = nomeCliente;
    this->valorCompra = valorCompra;
}

string Pedido::getNomeCliente() {
    return nomeCliente;
}

double Pedido::getValorCompra() {
    return valorCompra;
}

void Pedido::setNomeCliente(string nomeCliente) {
    this->nomeCliente = nomeCliente;
}

void Pedido::setValorCompra(double valorCompra) {
    this->valorCompra = valorCompra;
}

void Pedido::exibirDados() {
    cout << "Cliente: " << nomeCliente << endl;
    cout << "Valor da compra: R$ " << valorCompra << endl;
}