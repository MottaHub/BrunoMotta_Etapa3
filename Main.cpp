#include <iostream>
#include <vector>

#include "Email.h"
#include "SMS.h"
#include "Push.h"
#include "MensagemApp.h"

using namespace std;

int main() {

    vector<Notificacao*> notificacoes;

    notificacoes.push_back(new Email("brunomottaboesing@email.com"));
    notificacoes.push_back(new SMS("519999999"));
    notificacoes.push_back(new Push("Bruno"));
    notificacoes.push_back(new MensagemApp("Bruno", "WhatsApp"));

    for (Notificacao* notificacao : notificacoes) {
        notificacao->enviar();
    }

    return 0;
}