#include <iostream>
#include <string>
using namespace std;

void compare() {
    int maxNum;
    bool isFirst = true;
    while (true) {
        int inputNum;
        cin >> inputNum;
        if (inputNum == 0) {
            if (isFirst) {
                cout << "Сразу введен ноль." << endl;
            } else {
                cout << "Введен ноль. Наибольшее: " << maxNum << endl;
            }
            break;
        } else {
            if (isFirst) {
                maxNum = inputNum;
                isFirst = false;
            } else {
                if (inputNum > maxNum) {
                    maxNum = inputNum;
                }
            }
        }
    }
}

int main() {
    compare();
    return 0;
}