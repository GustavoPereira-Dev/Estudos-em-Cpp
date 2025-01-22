#include <iostream>

float celsiusFahrenheit(float celsius);

int main(){
    float celsius, fahrenheit;

    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius;

    std::cout << "A temperatura em Fahrenheit é: " << celsiusFahrenheit(celsius);

    return 0;
}

float celsiusFahrenheit(float celsius){
    return (9 * celsius + 160) / 5;
}