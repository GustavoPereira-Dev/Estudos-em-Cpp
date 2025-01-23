#include <iostream>
using namespace std;


void calcGraos(int i, int variavel[]);

int main() {
    int variavel[65] = {0};
    variavel[0] = 1; // Inicia com 1 grão

    calcGraos(64, variavel);

    bool leading_zero = true;
    for (int j = 65 - 1; j >= 0; j--) {
        if (variavel[j] != 0) leading_zero = false;
        if (!leading_zero) cout << variavel[j];
    }
    cout << endl;

    return 0;
}

void calcGraos(int i, int variavel[]) {
    if (i == 1) return;

    calcGraos(i - 1, variavel);

    int carry = 0;
    for (int k = 0; k < 65; k++) {
        int sum = variavel[k] * 2 + carry;
        variavel[k] = sum % 10;
        carry = sum / 10;
    }
}
