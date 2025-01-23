#include <iostream>

int somaNumeros(int n) {
    if (n != 1) {
        return n + somaNumeros(n - 1);
    }
    return n;
}

int main() {
    int num = 100;

    std::cout << "O resultado da soma de 1 a 100 é: " << somaNumeros(num) << std::endl;

    return 0;
}
