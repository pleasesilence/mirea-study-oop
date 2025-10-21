#include <iostream>
#include <string>
using namespace std;

int main() {
    char firstLetterBig = 'Х';
    char firstLetterSm = 'х';

    string inputString;
    cout << "Введите строку: ";
    cin >> inputString;
    int lengthOfString = inputString.length();

    int n = 0;
    for (int i = 0; i < lengthOfString; i++) {
        if (inputString[i] == firstLetterBig || inputString[i] == firstLetterSm) {
            n++;
        }
    }
    cout << "Кол-во вхождений в строку: " << n << endl;
    return 0;
}