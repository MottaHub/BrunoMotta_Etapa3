#include "Motoboy.h"
#include <iostream>

using namespace std;

Motoboy::Motoboy(double distancia)
    : Entrega(distancia) {
}

double Motoboy::calcularFrete() {
    return 8.0 + distancia * 1.50;
}

void Motoboy::exibirPrazo() {
    cout << "Entrega no mesmo dia." << endl;
}

const char* Motoboy::getNome() {
    return "Motoboy";
}