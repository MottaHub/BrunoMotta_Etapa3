#ifndef PUSH_H
#define PUSH_H

#include "Notificacao.h"

class Push : public Notificacao {
public:
    Push(string destinatario);

    void enviar() override;
};

#endif