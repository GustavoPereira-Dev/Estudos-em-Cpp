#include <iostream>
using namespace std;

void lerVetor(int vt[], int i);
int pesquisaBinaria(int vt[], int inicio, int fim, int vProc);
void bSort1(int vt[], int i);
void bSort2(int vt[], int i, int j);

int main() {
    int vt[20] = {0};
    lerVetor(vt, 19);
    
    int vProc;
    cout << "Digite o valor procurado no vetor: ";
    cin >> vProc;
    cout << pesquisaBinaria(vt, 0, 19, vProc) << endl;

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

int pesquisaBinaria(int vt[], int inicio, int fim, int vProc) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vt[meio] == vProc) {
            return meio;
        } else if (vt[meio] < vProc) {
            return pesquisaBinaria(vt, meio + 1, fim, vProc);
        } else {
            return pesquisaBinaria(vt, inicio, meio - 1, vProc);
        }
    } else {
        return -1;
    }
}

void bSort1(int vt[], int i) {
    if (i < 0) {
        return;
    }

    bSort2(vt, 0, i);
    bSort1(vt, i - 1);
}

void bSort2(int vt[], int i, int j) {
    if (j <= i) {
        return;
    }

    bSort2(vt, i, j - 1);
    if (vt[j] < vt[j - 1]) {
        int aux = vt[j];
        vt[j] = vt[j - 1];
        vt[j - 1] = aux;
        bSort2(vt, i, j - 1);
    }
}
