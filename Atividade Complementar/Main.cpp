#include <iostream>

#include "Carro.h"
#include "Bicicleta.h"
#include "Moto.h"

using namespace std;

int main() {
    Carro carro1("Onix");
    Carro carro2("Gol");

    Bicicleta bicicleta1("Caloi");
    Bicicleta bicicleta2("Monark");

    Moto moto1("Honda CB 500");

    Veiculo* veiculos[5];

    veiculos[0] = &carro1;
    veiculos[1] = &carro2;
    veiculos[2] = &bicicleta1;
    veiculos[3] = &bicicleta2;
    veiculos[4] = &moto1;

    for (int i = 0; i < 5; i++) {
        veiculos[i]->mover();
    }

    return 0;
}