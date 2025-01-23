#include <iostream>
using namespace std;

void lerLinhaMatriz(int mt[][8], int i);
void lerColunaMatriz(int mt[][8], int i, int j);
void lerLinhaPecas(int mt[][8], int quantPec[], int i);
void lerColunaPecas(int mt[][8], int quantPec[], int i, int j);

int main() {
    int mt[8][8] = {0};
    int quantPec[7] = {0};

    lerLinhaMatriz(mt, 7);
    lerLinhaPecas(mt, quantPec, 7);

    for (int i = 0; i < 7; i++) {
        cout << "O valor de peças da seção " << (i + 1) << " é: " << quantPec[i] << endl;
    }

    return 0;
}

void lerLinhaMatriz(int mt[][8], int i) {
    if (i < 0) {
        return;
    }

    lerLinhaMatriz(mt, i - 1);
    lerColunaMatriz(mt, i, 7);
}

void lerColunaMatriz(int mt[][8], int i, int j) {
    if (j < 0) {
        return;
    }

    lerColunaMatriz(mt, i, j - 1);
    cout << "Digite o " << (i + 1) << "º valor na linha e da " << (j + 1) << "º coluna: ";
    cin >> mt[i][j];
}

void lerLinhaPecas(int mt[][8], int quantPec[], int i) {
    if (i < 0) {
        return;
    }

    lerLinhaPecas(mt, quantPec, i - 1);
    lerColunaPecas(mt, quantPec, i, 7);
}

void lerColunaPecas(int mt[][8], int quantPec[], int i, int j) {
    if (j < 0) {
        return;
    }

    lerColunaPecas(mt, quantPec, i, j - 1);
    int pec = mt[i][j] - 1;
    if (pec >= 0 && pec < 7) {
        quantPec[pec] += 1;
    }
}
