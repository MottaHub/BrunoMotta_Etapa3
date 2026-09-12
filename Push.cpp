#include <iostream>
#include "Push.h"

using namespace std;

Push::Push(string destinatario) : Notificacao(destinatario) {
}

void Push::enviar() {
    cout << "Enviando Push para " << destinatario << endl;
}