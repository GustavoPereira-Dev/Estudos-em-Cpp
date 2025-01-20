#include <iostream>

int main(){
    float celsius, fahrenheit;

    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius;
    
    fahrenheit = (9 * celsius + 160) / 5;

    std::cout << "A temperatura em Fahrenheit é: " << fahrenheit;

    return 0;
}