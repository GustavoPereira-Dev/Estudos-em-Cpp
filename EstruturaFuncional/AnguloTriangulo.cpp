#include <iostream>


int terceiroAngulo(int ang1, int ang2);

int main(){
    int ang1, ang2;

    std::cout << "Digite o primeiro ângulo: ";
    std::cin >> ang1;

    std::cout << "Digite o primeiro ângulo: ";
    std::cin >> ang2;

    std::cout << "O valor do terceiro ângulo é: " << terceiroAngulo(ang1, ang2) << " graus";

    return 0;
}

int terceiroAngulo(int ang1, int ang2){
    return 180 - (ang1 + ang2);
}