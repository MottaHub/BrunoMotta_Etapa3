#include <iostream>
#include "MensagemApp.h"

using namespace std;

MensagemApp::MensagemApp(string destinatario, string nomeAplicativo)
    : Notificacao(destinatario) {
    this->nomeAplicativo = nomeAplicativo;
}

void MensagemApp::enviar() {
    cout << "Enviando mensagem pelo "
         << nomeAplicativo
         << " para "
         << destinatario
         << endl;
}