#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H

#include <string>

using namespace std;

class Notificacao {
protected:
    string destinatario;

public:
    Notificacao(string destinatario);

    virtual void enviar() = 0;
};

#endif