#include <iostream>
using namespace std;

void lerVetor(int vt[], int i);
int somaImpares(int vt[], int i);
void mediaValores(int vt[], int quant, int i, int res[]);

int main() {
    int vt[50] = {0}, res[2] = {0};
    lerVetor(vt, 9);
    cout << "Resultado da soma dos ímpares é: " << somaImpares(vt, 9) << endl;

    mediaValores(vt, 0, 9, res);
    
    if (res[1] == 0) {
        cout << "A média dos valores é nula (não existe nenhum número nesse intervalo)" << endl;
    } else {
        cout << "A média dos valores entre 10 e 200 é: " << (res[0] / res[1]) << endl;
    }

    return 0;
}

void lerVetor(int vt[], int i) {
    if (i < 0) {
        return;
    }

    lerVetor(vt, i - 1);
    cout << "Digite o valor do " << (i + 1) << "º índice: ";
    cin >> vt[i];
}

int somaImpares(int vt[], int i) {
    if (i < 0) {
        return 0;
    }

    int soma = somaImpares(vt, i - 1);
    if (vt[i] % 2 == 1) {
        soma += vt[i];
    }
    return soma;
}

void mediaValores(int vt[], int quant, int i, int res[]) {
    if (i < 0) {
        return;
    }

    mediaValores(vt, quant, i - 1, res);
    if (vt[i] >= 10 && vt[i] <= 200) {
        res[0] += vt[i];
        res[1] += 1;
    }
}
