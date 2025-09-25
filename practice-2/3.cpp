#include <iostream>
#include <string>
using namespace std;

void compare() {
    int inputNum;
    cin >> inputNum;
    if (inputNum == 0) {
        cout << "Сразу введен ноль." << endl;
    } else {
        int maxNum;
        bool isFirst = true;
        while (true) {
            int thisInputNum;
            cin >> thisInputNum;
            if (isFirst) {
                maxNum = thisInputNum;
                isFirst = false;
            }
            if (thisInputNum == 0) {
                cout << "Введен ноль. Наибольшее: " << to_string(maxNum) << endl;
                break;
            } else {
                if (thisInputNum >= maxNum) {
                    maxNum = thisInputNum;
                }
            }
        }
    }
}

int main() {
    compare();

    return 0;
}