#include <iostream>
using namespace std;

void lerVetor(int vt[], int i);
void adicionarValores(int vt1[], int vt2[], int vt3[], int i);

int main() {
    int vt1[3] = {0}, vt2[3] = {0}, vt3[6] = {0};
    lerVetor(vt1, 2);
    lerVetor(vt2, 2);
    adicionarValores(vt1, vt2, vt3, 5);
    
    for (int i = 0; i < 6; i++) {
        cout << vt3[i] << endl;
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

void adicionarValores(int vt1[], int vt2[], int vt3[], int i) {
    if (i < 0) {
        return;
    }

    adicionarValores(vt1, vt2, vt3, i - 1);
    if (i <= 2) {
        vt3[i] = vt1[i];
    } else if (i >= 3) {
        vt3[i] = vt2[i - 3];
    }
}
