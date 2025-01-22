#include <iostream>
#include <cmath>

float sequenciaPotencia();

int main() {
    float sum;
    
    std::cout << "A soma da série é: " << sequenciaPotencia() << std::endl;
    return 0;
}

float sequenciaPotencia(){
    float sum;
    for (int i = 1; i <= 15; i += 2) {
        sum += i / pow(i, 2);
    }

    return sum;
}