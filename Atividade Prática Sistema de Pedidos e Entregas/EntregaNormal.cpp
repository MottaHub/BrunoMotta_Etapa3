#include "EntregaNormal.h"
#include <iostream>

using namespace std;

EntregaNormal::EntregaNormal(double distancia, double valorCompra)
    : Entrega(distancia) {
    this->valorCompra = valorCompra;
}

double EntregaNormal::calcularFrete() {
    if (valorCompra > 500.00) {
        return 0.0;
    }

    return 10.0 + distancia * 1.20;
}

void EntregaNormal::exibirPrazo() {
    cout << "3 a 5 dias uteis." << endl;
}

const char* EntregaNormal::getNome() {
    return "Entrega normal";
}