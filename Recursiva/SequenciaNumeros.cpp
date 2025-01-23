#include <iostream>
using namespace std;

void lerLimiteMatriz(int mt[][8], int z);
void lerLinhaMatriz(int mt[][8], int z, int i);
void lerColunaMatriz(int mt[][8], int z, int i, int j);

int main() {
    int mt[8][8] = {0};

    lerLimiteMatriz(mt, 4);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

void lerLimiteMatriz(int mt[][8], int z) {
    if (z < 1) {
        return;
    }

    lerLimiteMatriz(mt, z - 1);
    lerLinhaMatriz(mt, z, 8 - z);
}

void lerLinhaMatriz(int mt[][8], int z, int i) {
    if (i < z - 1) {
        return;
    }

    lerLinhaMatriz(mt, z, i - 1);
    lerColunaMatriz(mt, z, i, 8 - z);
}

void lerColunaMatriz(int mt[][8], int z, int i, int j) {
    if (j < z - 1) {
        return;
    }

    lerColunaMatriz(mt, z, i, j - 1);
    mt[i][j] = z;
}
