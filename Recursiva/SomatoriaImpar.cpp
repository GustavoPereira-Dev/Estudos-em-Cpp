#include <iostream>
#include <string>
using namespace std;

int somatoriaImpar(int n1, int n2, int indx, int cont);
int verificarMaior(int n1, int n2);

int main() {
    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "A somatória de números ímpares entre os dois é: " 
         << somatoriaImpar(num1, num2, verificarMaior(num1, num2), 0) 
         << endl;

    return 0;
}

int somatoriaImpar(int n1, int n2, int indx, int cont) {
    int soma = 0;

    cout << indx << endl;
    if ((indx == n1 && cont > 0) || (indx == n2 && cont > 0)) {
        return 0;
    }

    soma = somatoriaImpar(n1, n2, indx - 1, cont + 1);
    if (indx % 2 == 1) {
        soma += indx;
    }
    return soma;
}

int verificarMaior(int n1, int n2) {
    return (n2 > n1) ? n2 : n1;
}
