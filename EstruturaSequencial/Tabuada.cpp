#include <iostream>

int main(){
    int num, indx, mult;

    std::cout << "Digite o número que deseja fazer uma tabuada de 1 até 10: ";
    std::cin >> num;
	
    while(indx < 10) {
		indx++;
		mult = (num * indx);
		std::cout << num << " x " << indx << " = " << mult;
	}
    
    return 0;
}