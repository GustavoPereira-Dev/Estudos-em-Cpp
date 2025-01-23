#include <iostream>
#include <string>
using namespace std;

string calcTab(int n, int i);

int main() {
    int num;
    cout << "Digite o número para tabuada: ";
    cin >> num;
    cout << calcTab(num, 1);
    return 0;
}

string calcTab(int n, int i) {
    if (i > 10) {
        return "";
    }
    return to_string(n) + " x " + to_string(i) + " = " + to_string(n * i) + "\n" + calcTab(n, i + 1);
}
