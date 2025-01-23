#include <iostream>
using namespace std;

void lerLinhaMatriz(int mt[][4], int i, int exp);
void lerColunaMatriz(int mt[][4], int i, int j, int exp);

int main() {
    int mt[4][4] = {0};
    lerLinhaMatriz(mt, 3, 64);
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mt[i][j] << endl;
        }
    }
    return 0;
}

void lerLinhaMatriz(int mt[][4], int i, int exp) {
    if (i < 0) {
        return;
    }
    
    lerLinhaMatriz(mt, i - 1, exp / 4);
    lerColunaMatriz(mt, i, 3, exp);
}

void lerColunaMatriz(int mt[][4], int i, int j, int exp) {
    if (j < 0) {
        return;
    }
    
    lerColunaMatriz(mt, i, j - 1, exp);
    if (i != j) {
        cout << "Digite o " << (i + 1) << "º valor na linha e da " << (j + 1) << "º coluna: ";
        cin >> mt[i][j];
    } else {
        mt[i][j] = exp;
    }
}
