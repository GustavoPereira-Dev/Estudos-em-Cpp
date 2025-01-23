#include <iostream>

double somarNumeros(int n1, int n2) {
    if (n2 != n1) {
        return (static_cast<double>(n1 - n2) / (1 + n2)) + somarNumeros(n1, n2 + 1);
    }
    return static_cast<double>(1) / n1;
}

int main() {
    int num;
    
    std::cout << "Digite o número para a série (N/1) + (N-1/2) + (N-2/3) + ... + (1/N): ";
    std::cin >> num;
    
    std::cout << "O resultado da série " << num << " é: " << somarNumeros(num, 0) << std::endl;

    return 0;
}
