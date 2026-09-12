#ifndef EMAIL_H
#define EMAIL_H

#include "Notificacao.h"

class Email : public Notificacao {
public:
    Email(string destinatario);

    void enviar() override;
};

#endif