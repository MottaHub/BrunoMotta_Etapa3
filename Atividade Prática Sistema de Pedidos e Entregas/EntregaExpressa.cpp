#include "EntregaExpressa.h"
#include <iostream>

using namespace std;

EntregaExpressa::EntregaExpressa(double distancia)
    : Entrega(distancia) {
}

double EntregaExpressa::calcularFrete() {
    return 20.0 + distancia * 2.00;
}

void EntregaExpressa::exibirPrazo() {
    cout << "1 a 2 dias uteis." << endl;
}

const char* EntregaExpressa::getNome() {
    return "Entrega expressa";
}