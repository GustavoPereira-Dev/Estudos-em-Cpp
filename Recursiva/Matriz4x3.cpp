#include <iostream>
using namespace std;

void lerLinhaMatriz(int mt[][3], int i);
void lerColunaMatriz(int mt[][3], int i, int j);
int calcProdsVends(int mt[][3], int i);
int calcProdsVendsLinha(int mt[][3], int i, int j);
int calcProdsVendsColuna(int mt[][3], int i, int j);

int main() {
    int mt[4][3] = {0};
    lerLinhaMatriz(mt, 3);
    cout << "Total de produtos vendidos no mês: " << calcProdsVends(mt, 3) << endl;
    return 0;
}

void lerLinhaMatriz(int mt[][3], int i) {
    if (i < 0) {
        return;
    }

    lerLinhaMatriz(mt, i - 1);
    lerColunaMatriz(mt, i, 2);
}

void lerColunaMatriz(int mt[][3], int i, int j) {
    if (j < 0) {
        return;
    }

    lerColunaMatriz(mt, i, j - 1);
    cout << "Digite o " << (i + 1) << "º valor na linha e da " << (j + 1) << "º coluna: ";
    cin >> mt[i][j];
}

int calcProdsVends(int mt[][3], int i) {
    int vendas = 0;
    if (i < 0) {
        return vendas;
    }

    vendas = calcProdsVends(mt, i - 1);
    vendas += calcProdsVendsLinha(mt, i, 2);
    if (i < 3) {
        int aux = calcProdsVendsColuna(mt, i, 3);
    }
    return vendas;
}

int calcProdsVendsLinha(int mt[][3], int i, int j) {
    int vendasSemanais = 0;
    if (j < 0) {
        return vendasSemanais;
    }

    vendasSemanais = mt[i][j] + calcProdsVendsLinha(mt, i, j - 1);
    if (j == 2) {
        cout << "Vendas da " << (i + 1) << "ª semana dos produtos: " << vendasSemanais << endl;
    }

    return vendasSemanais;
}

int calcProdsVendsColuna(int mt[][3], int i, int j) {
    int vendasMensais = 0;
    if (j < 0) {
        return vendasMensais;
    }

    vendasMensais = mt[j][i] + calcProdsVendsColuna(mt, i, j - 1);
    if (j == 3) {
        cout << "Venda mensal do " << (i + 1) << "º produto: " << vendasMensais << endl;
    }

    return vendasMensais;
}
