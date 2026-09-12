#include <iostream>
#include "SMS.h"

using namespace std;

SMS::SMS(string destinatario) : Notificacao(destinatario) {
}

void SMS::enviar() {
    cout << "Enviando SMS para " << destinatario << endl;
}