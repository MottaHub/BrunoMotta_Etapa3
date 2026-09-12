#ifndef MENSAGEMAPP_H
#define MENSAGEMAPP_H

#include "Notificacao.h"

class MensagemApp : public Notificacao {
private:
    string nomeAplicativo;

public:
    MensagemApp(string destinatario, string nomeAplicativo);

    void enviar() override;
};

#endif