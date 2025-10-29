#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int a, b;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;

    cout << "Наибольшее: " << max(a,b) << endl;

    return 0;
}