#include <iostream>

int main(){
    int num, fat, indx, indxFat;
    float seq;

    std::cout << "Digite o número da sequência de fatorial: ";
    std::cin >> num;
    
	if(num < 2) {
		fat = 1;
	}
		
	while(indx < num) {
		indx++;
			
		for(indxFat = indx; indxFat > 1; indxFat--) {
			fat = fat + (num * num);
		}
			
		seq = seq + (1 / fat);
		fat = 0;
	}

    std::cout << "O resultado da sequência de fatorial é " << seq;

    return 0;
}