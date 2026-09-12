#include "Bicicleta.h"
#include <iostream>

using namespace std;

Bicicleta::Bicicleta(string modelo) : Veiculo(modelo) {
}

void Bicicleta::mover() {
    cout << "Bicicleta " << modelo << " esta se movimentando pela ciclovia." << endl;
}