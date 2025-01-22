#include <iostream>

typedef std::string String;

String maiorNumero(int n1, int n2);

int main(){
    int num1, num2;
    
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << maiorNumero(num1, num2);

    return 0;
}

String maiorNumero(int n1, int n2){
    if(n1 > n2) {
		  return "O maior número é o primeiro";  
	  } else {
		  return "O maior número é o segundo";
    }
}