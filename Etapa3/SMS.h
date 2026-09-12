#ifndef SMS_H
#define SMS_H

#include "Notificacao.h"

class SMS : public Notificacao {
public:
    SMS(string destinatario);

    void enviar() override;
};

#endif