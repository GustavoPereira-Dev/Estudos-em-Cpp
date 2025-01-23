#include <iostream>

int somarNumeros(int n) {
    if (n != 1) {
        return n + somarNumeros(n - 1);
    }
    return 1;
}

int main() {
    int num;
    
    std::cout << "Digite o número para a série (N) + (N-1) + (N-2) + ... + (1): ";
    std::cin >> num;
    
    std::cout << "O resultado da série " << num << " é: " << somarNumeros(num) << std::endl;

    return 0;
}
