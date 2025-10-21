#include <iostream>
#include <string>
using namespace std;

int main() {
    int numOfElems;
    cout << "Введите число (до 20): ";
    cin >> numOfElems;

    int arrOfNums[numOfElems];
    int maxOfArr;
    int nOfNum;
    for (int i = 0;  i < numOfElems; i++) {
        int thisNum;
        cin >> thisNum;
        arrOfNums[i] = thisNum;
        if (i == 1) {
            if (arrOfNums[i] > arrOfNums[i-1]) {
                maxOfArr = arrOfNums[i];
                nOfNum = i;
            } else {
                maxOfArr = arrOfNums[i-1];
                nOfNum = i;
            }
        } else {
            if (arrOfNums[i] > maxOfArr) {
                maxOfArr = arrOfNums[i];
                nOfNum = i;
            } else {
                maxOfArr = maxOfArr;
            }
        }
    }
    cout << "Наибольшее число в массиве: " << to_string(maxOfArr)  << endl;
    cout << "Порядок числа в массиве: " << nOfNum+1 << endl;
}