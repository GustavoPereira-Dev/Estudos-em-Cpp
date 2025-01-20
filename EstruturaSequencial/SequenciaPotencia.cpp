#include <iostream>
#include <cmath>

int main() {
    float sum;

    for (int i = 1; i <= 15; i += 2) {
        sum += i / pow(i, 2);
    }
    
    std::cout << "A soma da série é: " << sum << std::endl;
    return 0;
}
