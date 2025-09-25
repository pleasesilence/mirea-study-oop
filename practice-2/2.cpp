#include <iostream>
#include <string>
using namespace std;

void compare() {
    int inputLength, maxNum;
    cout << "Введите количество чисел для ввода:"  << endl;
    cin >> inputLength;
    
    maxNum;

    if (inputLength == 0 || inputLength < 0) {
        cout << "Невозможное число. Введите другое." << endl;
    } else if (inputLength == 1) {
        int thisInputNum;
        cin >> thisInputNum;
        cout << "Единственное число: " << thisInputNum << endl;
    } else {
        for (int i = 0; i < inputLength; i++) {
            int thisInputNum, *prevInputNum;
            if (i == 1) {
                prevInputNum = &thisInputNum;
                if (*prevInputNum < thisInputNum) {
                    maxNum = thisInputNum;
                }
            }
            cin >> thisInputNum;
            if (thisInputNum > maxNum) {
                maxNum = thisInputNum;
            }
        }

        cout << "Наибольшее число: " << to_string(maxNum) << endl;
    }

    
}

int main() {
    compare();

    return 0;
}