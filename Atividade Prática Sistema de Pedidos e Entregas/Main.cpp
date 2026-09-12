#include <iostream>
#include <iomanip>
#include <string>

#include "Pedido.h"
#include "Entrega.h"
#include "RetiradaLoja.h"
#include "EntregaNormal.h"
#include "EntregaExpressa.h"
#include "Motoboy.h"

using namespace std;

int main() {
    string nomeCliente;
    double valorCompra;
    double distancia;
    int opcao;

    cout << fixed << setprecision(2);

    cout << "===== SISTEMA DE PEDIDOS =====" << endl;

    cout << "Nome do cliente: ";
    getline(cin, nomeCliente);

    cout << "Valor da compra: R$ ";
    cin >> valorCompra;

    if (valorCompra < 0) {
        cout << "Erro: o valor da compra nao pode ser negativo." << endl;
        return 0;
    }

    cout << "Distancia ate o endereco (km): ";
    cin >> distancia;

    if (distancia < 0) {
        cout << "Erro: a distancia nao pode ser negativa." << endl;
        return 0;
    }

    Pedido pedido(nomeCliente, valorCompra);

    cout << endl;
    cout << "===== FORMA DE ENTREGA =====" << endl;
    cout << "1 - Retirada na loja" << endl;
    cout << "2 - Entrega normal" << endl;
    cout << "3 - Entrega expressa" << endl;
    cout << "4 - Motoboy" << endl;

    cout << "Escolha: ";
    cin >> opcao;

    Entrega* entrega = nullptr;

    switch (opcao) {
        case 1:
            entrega = new RetiradaLoja(distancia);
            break;

        case 2:
            entrega = new EntregaNormal(distancia, valorCompra);
            break;

        case 3:
            entrega = new EntregaExpressa(distancia);
            break;

        case 4:
            if (distancia > 20) {
                cout << "Erro: a entrega por motoboy esta disponivel "
                     << "somente para distancias de ate 20 km." << endl;
                return 0;
            }

            entrega = new Motoboy(distancia);
            break;

        default:
            cout << "Erro: opcao de entrega invalida." << endl;
            return 0;
    }

    double frete = entrega->calcularFrete();

    double desconto = 0.0;
    string cupom;

    cout << endl;
    cout << "Deseja utilizar um cupom? ";
    cin >> cupom;

    if (cupom == "DESCONTO10") {
        desconto = valorCompra * 0.10;
    }

    double valorComDesconto = valorCompra - desconto;
    double total = valorComDesconto + frete;

    cout << endl;
    cout << "===== RESUMO DO PEDIDO =====" << endl;

    pedido.exibirDados();

    cout << "Forma de entrega: " << entrega->getNome() << endl;

    cout << "Desconto: R$ " << desconto << endl;
    cout << "Frete: R$ " << frete << endl;
    cout << "Total: R$ " << total << endl;

    cout << "Prazo: ";
    entrega->exibirPrazo();

    delete entrega;

    return 0;
}