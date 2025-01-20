#include <iostream>

int main(){
    int ang1, ang2, ang3;

    std::cout << "Digite o primeiro ângulo: ";
    std::cin >> ang1;

    std::cout << "Digite o primeiro ângulo: ";
    std::cin >> ang2;

    ang3 = (ang1 + ang2) - 180;

    std::cout << "O valor do terceiro ângulo é: " << ang3 << " graus";

    return 0;
}