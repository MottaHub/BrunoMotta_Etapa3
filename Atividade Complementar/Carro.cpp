#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro(string modelo) : Veiculo(modelo) {
}

void Carro::mover() {
    cout << "Carro " << modelo << " esta se movimentando pela estrada." << endl;
}