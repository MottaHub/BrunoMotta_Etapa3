#ifndef VEICULO_H
#define VEICULO_H

#include <string>

using namespace std;

class Veiculo {
protected:
    string modelo;

public:
    Veiculo(string modelo);
    virtual void mover() = 0;
    virtual ~Veiculo();
};

#endif