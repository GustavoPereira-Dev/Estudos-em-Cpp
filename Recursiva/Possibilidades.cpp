#include <iostream>
using namespace std;

int verificarPossibilidade1(int n1);
int verificarPossibilidade2(int n1, int n2);

int main() {
    cout << "A quantidade de possibilidades da soma de 2 dados terem como resultado 7 é: " << verificarPossibilidade1(7) << endl;
    return 0;
}

int verificarPossibilidade1(int n1) {
    int pos = 0;
    if (n1 < 0) {
        return pos;
    }

    pos = verificarPossibilidade1(n1 - 1);
    if (verificarPossibilidade2(n1, 7) == 1) {
        pos++;
    }
    return pos;
}

int verificarPossibilidade2(int n1, int n2) {
    int conf = 0;
    if (n2 < 0) {
        return conf;
    }

    conf = verificarPossibilidade2(n1, n2 - 1);
    if (n1 + n2 == 7) {
        cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl;
        conf++;
    }

    return conf;
}
