#include <iostream>

int diferencaValores(int n1, int n2);

int main(){
    int num1, num2, dValor;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;



    std::cout << "A diferença entre os números é de " << diferencaValores(num1, num2);

    return 0;
}

int diferencaValores(int n1, int n2){
    if(n1 > n2) {
		  return n1 - n2;
	  } else {
		  return n2 - n1;
    }
}