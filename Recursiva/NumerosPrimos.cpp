#include <iostream>
#include <string>
using namespace std;

int mostrarNumerosPrimos1(int num1, int num2, int indx);
int mostrarNumerosPrimos2(int num1, int num2, int indx, int indxMod);
int verificarMenor(int num1, int num2);
int verificarMaior(int num1, int num2);

int main() {
    int n1, n2;
    cout << "Digite o 1º número: ";
    cin >> n1;
    cout << "Digite o 2º número: ";
    cin >> n2;

    cout << mostrarNumerosPrimos1(n2, n2, verificarMaior(n1, n2)) << endl;

    return 0;
}

int mostrarNumerosPrimos1(int num1, int num2, int indx) {
    cout << "a" << endl;
    if (indx + 1 < num1 || indx + 1 < num2) {
        return 0;
    }

    mostrarNumerosPrimos1(num1, num2, indx - 1);
    mostrarNumerosPrimos2(num1, num2, indx - 1, indx + 1);
    return 0;
}

int mostrarNumerosPrimos2(int num1, int num2, int indx, int indxMod) {
    if (indxMod < 0) {
        return 0;
    }

    indxMod = mostrarNumerosPrimos2(num1, num2, indx - 1, indx - 1);
    if (indxMod == 0) {
        cout << indx << " a" << endl;
    } else if (indx % indxMod == 0) {
        cout << indx << " b" << endl;
        indxMod = (indx - indx) - 1;
    }
    return 0;
}

int verificarMenor(int num1, int num2) {
    return (num2 < num1) ? num2 : num1;
}

int verificarMaior(int num1, int num2) {
    return (num2 > num1) ? num2 : num1;
}
