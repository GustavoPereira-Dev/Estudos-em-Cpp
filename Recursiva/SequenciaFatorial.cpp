#include <iostream>

int calcFat(int n) {
    if (n > 1) {
        return n * calcFat(n - 1);
    }
    return 1;
}

double somarFatoriais(int n) {
    if (n != 1) {
        return (1.0 * calcFat(n)) + somarFatoriais(n - 1);
    }
    return 1.0;
}

int main() {
    int num;

    std::cout << "Digite o número para a série (N)! + (N-1)! + (N-2)! + ... + (1)!: ";
    std::cin >> num;

    std::cout << "O resultado da série " << num << " é: " << somarFatoriais(num) << std::endl;

    return 0;
}
