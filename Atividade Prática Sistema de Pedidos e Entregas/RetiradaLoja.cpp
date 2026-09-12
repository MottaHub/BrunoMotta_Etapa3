#include "RetiradaLoja.h"
#include <iostream>

using namespace std;

RetiradaLoja::RetiradaLoja(double distancia) : Entrega(distancia) {
}

double RetiradaLoja::calcularFrete() {
    return 0.0;
}

void RetiradaLoja::exibirPrazo() {
    cout << "Disponivel para retirada." << endl;
}

const char* RetiradaLoja::getNome() {
    return "Retirada na loja";
}