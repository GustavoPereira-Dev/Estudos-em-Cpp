#include <iostream>

float calcularDelta(float a, float b, float c);

int main(){
    float a, b, c, delta, x0, x1;

    std::cout << "Digite o valor de A: ";
    std::cin >> a;

    std::cout << "Digite o valor de B: ";
    std::cin >> b;

    std::cout << "Digite o valor de C: ";
    std::cin >> c;

    delta = calcularDelta();

    std::cout << "Valor do Delta é: " << delta;

	x0 = (b + Math.sqrt(delta)) / (2 * a);
	x1 = (b - Math.sqrt(delta)) / (2 * a);

    std::cout << "X0: " << x0 << "\nX1: " << x1;

    return 0;
}

float calcularDelta(float a, float b, float c){
    return (b * b) - (4 * a * c);
}