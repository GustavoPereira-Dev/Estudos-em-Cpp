#include <iostream>

int somaInt(int num1, int num2);

int main(){
    int n1, n2, soma;

    std::cout << "Digite a primeiro número: ";
    std::cin >> n1;

    std::cout << "Digite a segundo número: ";
    std::cin >> n2;

    std::cout << "O resultado da soma de " << n1 << " + " << n2 << " inteiros é " << somaInt(n1,n2);

    return 0;
}

int somaInt(int num1, int num2){
    return num1 + num2;
}