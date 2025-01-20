#include <iostream>

int main(){
    float a, b, c, delta, x0, x1;

    std::cout << "Digite o valor de A: ";
    std::cin >> a;

    std::cout << "Digite o valor de B: ";
    std::cin >> b;

    std::cout << "Digite o valor de C: ";
    std::cin >> c;
    
	delta = (b * b) - (4 * a * c);

    std::cout << "O valor de delta é: " << delta;

	if(delta > 0) {
		x0 = (b + Math.sqrt(delta)) / (2 * a);
		x1 = (b - Math.sqrt(delta)) / (2 * a);
		std::cout << "O resultado de x0 é" << x0 << " e do x1 é " << x1;
	} else {
		std::cout << "Raiz inexistente";
	}

    return 0;
}