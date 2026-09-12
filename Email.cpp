#include <iostream>
#include "Email.h"

using namespace std;

Email::Email(string destinatario) : Notificacao(destinatario) {
}

void Email::enviar() {
    cout << "Enviando Email para " << destinatario << endl;
}