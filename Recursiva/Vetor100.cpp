#include <iostream>
using namespace std;

int calcMaior(int vt[], int i);
int calcMenor(int vt[], int i);
void lerVetor(int vt[], int i);
void mediaValores(int vt[], int quant, int i, int media[]);

int main() {
    int vt[100] = {0}, media[2] = {0};
    lerVetor(vt, 99);
    cout << "Maior valor: " << calcMaior(vt, 9) << "; Menor valor: " << calcMenor(vt, 99) << endl;

    mediaValores(vt, 0, 99, media);
    cout << "Média dos valores: " << (media[0] / media[1]) << endl;

    return 0;
}

int calcMaior(int vt[], int i) {
    if (i < 0) {
        return INT_MIN;
    }

    int n = calcMaior(vt, i - 1);
    if (i == 0 || vt[i] > n) {
        n = vt[i];
    }

    return n;
}

int calcMenor(int vt[], int i) {
    if (i < 0) {
        return INT_MAX;
    }

    int n = calcMenor(vt, i - 1);
    if (i == 0 || vt[i] < n) {
        n = vt[i];
    }

    return n;
}

void mediaValores(int vt[], int quant, int i, int media[]) {
    if (i < 0) {
        return;
    }

    mediaValores(vt, quant, i - 1, media);
    media[0] += vt[i];
    media[1] += 1;
}

void lerVetor(int vt[], int i) {
    if (i < 0) {
        return;
    }

    lerVetor(vt, i - 1);
    cout << "Digite o valor do " << (i + 1) << "º índice: ";
    cin >> vt[i];
}
