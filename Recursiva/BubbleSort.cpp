#include <iostream>
using namespace std;

void lerVetor(int vt[], int i);
void bSort1(int vt[], int i);
void bSort2(int vt[], int i, int j);

int main() {
    int vt[20] = {0};
    lerVetor(vt, 19);
    bSort1(vt, 19);
    for (int i = 0; i < 20; i++) {
        cout << vt[i] << endl;
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

void bSort1(int vt[], int i) {
    if (i < 0) {
        return;
    }
    bSort2(vt, 0, i);
    bSort1(vt, i - 1);
}

void bSort2(int vt[], int i, int j) {
    int aux;
    if (j <= i) {
        return;
    }
    bSort2(vt, i, j - 1);
    if (vt[j] < vt[j - 1]) {
        aux = vt[j];
        vt[j] = vt[j - 1];
        vt[j - 1] = aux;
        bSort2(vt, i, j - 1);
    }
}
