#include <iostream>

int main(){
    int num, indx, fib, ant2, ant1;
    
    std::cout << "Digite o número para fibonacci: ";
    std::cin >> num;

    if(num > 1) {

	    do {
			indx++;
			fib = ant1 + ant2;
			ant2 = ant1;
			ant1 = fib;
	    } while(indx < num);	
	
    } else {
		fib = num;
	}

    std::cont << "O valor do número de Fibonacci será: " << fib;
    return 0;
}