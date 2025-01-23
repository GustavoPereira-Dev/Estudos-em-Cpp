#include <iostream>
#include <string>
using namespace std;

int calcFib(int a1, int a2, int indx);

int main() {
    int num, fib = 0;

    cout << "Digite o número para Fibonacci: ";
    cin >> num;

    if (num > 1) {
        calcFib(1, 0, num);
    } else {
        fib = num;
    }

    cout << calcFib(1, 0, num) << endl;

    return 0;
}

int calcFib(int a1, int a2, int indx) {
    if (indx == 1) {
        return a1 + a2;
    }

    return calcFib(a2, a1 + a2, indx - 1);
}
