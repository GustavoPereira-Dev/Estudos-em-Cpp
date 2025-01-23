#include <iostream>

double somarNumeros(int n) {
    if (n != 1) {
        return 1.0 / n + somarNumeros(n - 1);
    }
    return 1.0;
}

int main() {
    int num;
    
    std::cout << "Digite o número para a série (1/1) + (1/2) + (1/3) + ... + (1/N): ";
    std::cin >> num;
    
    std::cout << "O resultado da série " << num << " é: " << somarNumeros(num) << std::endl;

    return 0;
}
