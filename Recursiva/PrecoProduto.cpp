#include <iostream>
using namespace std;

void lerProdutos(int mt[][2], int i);
int calcularVendas(int mt[][2], int i);

int main() {
    int mt[5][2] = {0};

    lerProdutos(mt, 4);

    cout << "O resultado final da comissão é: " << (calcularVendas(mt, 4) * 0.5) << endl;

    return 0;
}

void lerProdutos(int mt[][2], int i) {
    if (i < 0) {
        return;
    }

    lerProdutos(mt, i - 1);
    cout << "Digite quantidade de venda do " << (i + 1) << "º produto: ";
    cin >> mt[i][0];
    cout << "Digite o preço de venda do " << (i + 1) << "º produto: ";
    cin >> mt[i][1];
}

int calcularVendas(int mt[][2], int i) {
    int vendas = 0;
    if (i < 0) {
        return vendas;
    }

    cout << "O valor de venda do " << (i + 1) << "º produto é: " << (mt[i][0] * mt[i][1]) << " reais" << endl;
    cout << "O valor de comissão do " << (i + 1) << "º produto é: " << ((mt[i][0] * mt[i][1]) * 0.5) << " reais" << endl;

    vendas = (mt[i][0] * mt[i][1]) + calcularVendas(mt, i - 1);
    return vendas;
}
