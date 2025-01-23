#include <iostream>
using namespace std;

int quantidadeAnos(double ana, double maria);

int main() {
    cout << quantidadeAnos(1.10, 1.5) << endl;
    return 0;
}

int quantidadeAnos(double ana, double maria) {
    int anos = 0;
    if (ana >= maria) {
        return 0;
    }

    anos = 1 + quantidadeAnos(ana + 0.03, maria + 0.02);
    return anos;
}
