#include <iostream>
using namespace std;

void lerVetores(int vt[], int i);
int somaIndices(int vt[], int i);

int main() {
    int vt[5] = {0};

    lerVetores(vt, 4);
    cout << "Soma dos índices: " << somaIndices(vt, 4) << endl;

    return 0;
}

void lerVetores(int vt[], int i) {
    if (i < 0) {
        return;
    }
    
    lerVetores(vt, i - 1);
    cout << "Digite o índice do " << (i + 1) << "º vetor: ";
    cin >> vt[i];
}

int somaIndices(int vt[], int i) {
    if (i < 0) {
        return 0;
    }
    
    return somaIndices(vt, i - 1) + vt[i];
}
