#include <iostream>
using namespace std;

void inputNumbers(int* a, int* b) {
    cout << "Введите первое число: ";
    cin >> *a;
    cout << "Введите второе число: ";
    cin >> *b;
}

int main() {
    int num1, num2;
    
    inputNumbers(&num1, &num2);

    int maxNumber;
    if (num1 > num2) {
        maxNumber = num1;
    } else {
        maxNumber = num2;
    }
    
    cout << "Наибольшее: " << maxNumber << endl;
    
    return 0;
}