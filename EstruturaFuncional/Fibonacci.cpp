#include <iostream>

int calcularFibonacci(int n);

int main(){
    int num, indx, fib, ant2, ant1;
    
    std::cout << "Digite o número para fibonacci: ";
    std::cin >> num;

    std::cont << "O valor do número de Fibonacci será: " << calcularFibonacci(num);
    return 0;
}

int calcularFibonacci(int n){
    int indx, fib, ant1, ant2;

	if(n > 1) {

	    do {
			indx++;
			fib = ant1 + ant2;
			ant2 = ant1;
			ant1 = fib;
	    } while(indx < n);	
	
    } else {
		fib = n;
	}

	return fib;
}