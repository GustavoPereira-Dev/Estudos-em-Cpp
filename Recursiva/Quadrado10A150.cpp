#include <iostream>
#include <string>

std::string calcularQuadrado(int n) {
    if (n <= 10) {
        return "";
    }

    std::string str = "O quadrado de: " + std::to_string(n) + " é: " + std::to_string(n * n) + "\n" + calcularQuadrado(n - 1);
    return str;
}

int main() {
    std::cout << calcularQuadrado(150);
    return 0;
}
