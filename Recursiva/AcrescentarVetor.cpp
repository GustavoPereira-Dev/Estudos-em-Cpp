#include <iostream>
using namespace std;

void lerVetores(int vt[], int i);
void acrescentarValores(int vt[], int i);

int main() {
    int i;
    int vt1[10] = {0}, vt2[10] = {0};

    lerVetores(vt1, 9);
    for (int j = 0; j < 10; j++) {
        vt2[j] = vt1[j];
    }
    acrescentarValores(vt2, 9);
    vt2[9] = 99;

    for (i = 0; i < 10; i++) {
        cout << "Primeiro vetor: " << vt1[i] << "; Segundo Vetor: " << vt2[i] << endl;
    }

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

void acrescentarValores(int vt[], int i) {
    if (i < 0) {
        return;
    }

    if (vt[i] % 2 == 0) {
        vt[i] = vt[i] * 5;
    } else if (vt[i] % 2 == 1) {
        vt[i] = vt[i] + 5;
    }

    acrescentarValores(vt, i - 1);
}
