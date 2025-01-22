#include <iostream>

float nota1, nota2, nota3, nota4;

void calcularMedia();

int main(){
    std::cout << "Digite a primeira nota do aluno: ";
    std::cin >> nota1;

    std::cout << "Digite a segunda nota do aluno: ";
    std::cin >> nota2;

    std::cout << "Digite a terceira nota do aluno: ";
    std::cin >> nota3;

    std::cout << "Digite a quarta nota do aluno: ";
    std::cin >> nota4;

    return 0;
}

void calcularMedia(){
    float media;
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
		
	if(media >= 6) {
		std::cout << "APROVADO";
	} else if(media >= 3 && media < 6) {
		std::cout << "EXAME";
	} else {
		std::cout << "RETIDO";
	}
}