#include <iostream>
using namespace std;

void lerVetores(int vt[], int i);
int somaIndices(int vt[], int i);

int main() {
    int vt[4] = {0};

    lerVetores(vt, 3);
    cout << "A média das notas é: " << somaIndices(vt, 3) << endl;

    return 0;
}

void lerVetores(int vt[], int i) {
    if (i < 0) {
        return;
    }

    lerVetores(vt, i - 1);
    cout << "Digite o valor da " << (i + 1) << "ª nota: ";
    cin >> vt[i];
}

int somaIndices(int vt[], int i) {
    if (i < 0) {
        return 0;
    }

    int soma = somaIndices(vt, i - 1) + vt[i];
    if (i == 3) {
        soma /= 4;
    }
    return soma;
}
