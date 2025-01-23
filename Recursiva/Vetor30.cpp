#include <iostream>
#include <string>
using namespace std;

void lerVetor(int vt[], int i);
int mediaValores(int vt[], int i);
string* calcDiferencaMedia(double media, int vt[], int i);

int main() {
    int vt[30] = {0};
    string* textos = new string[2];

    lerVetor(vt, 29);
    int media = mediaValores(vt, 29);
    cout << "Média: " << media << endl;
    textos = calcDiferencaMedia(media, vt, 29);
    cout << "Quantidade de valores acima da média: " << textos[0] << "; Índice dos valores abaixo da média: " << textos[1] << endl;

    delete[] textos;
    return 0;
}

void lerVetor(int vt[], int i) {
    if (i < 0) {
        return;
    }

    lerVetor(vt, i - 1);
    cout << "Digite o valor do " << (i + 1) << "º índice: ";
    cin >> vt[i];
}

int mediaValores(int vt[], int i) {
    if (i < 0) {
        return 0;
    }

    int media = vt[i] + mediaValores(vt, i - 1);
    if (i == 29) {  // Alterado para corresponder ao tamanho do vetor
        media /= 30;
    }

    return media;
}

string* calcDiferencaMedia(double media, int vt[], int i) {
    string* textos = new string[2]{"0", ""};
    if (i < 0) {
        return textos;
    }

    string* prevTextos = calcDiferencaMedia(media, vt, i - 1);
    textos[0] = prevTextos[0];
    textos[1] = prevTextos[1];
    delete[] prevTextos;

    if (vt[i] > media) {
        textos[0] = to_string(stoi(textos[0]) + 1);
    } else if (vt[i] < media) {
        textos[1] += to_string(i) + " ";
    }

    return textos;
}
