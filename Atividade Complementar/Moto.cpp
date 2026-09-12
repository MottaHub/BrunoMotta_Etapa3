#include "Moto.h"
#include <iostream>

using namespace std;

Moto::Moto(string modelo) : Veiculo(modelo) {
}

void Moto::mover() {
    cout << "Moto " << modelo << " esta se movimentando pela estrada." << endl;
}