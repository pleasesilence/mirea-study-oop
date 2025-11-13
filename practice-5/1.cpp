#include <vector>
#include <iostream>
using namespace std;

int main() {
    int vectorSize;
    cout << "Введите кол-во элементов: ";
    cin >> vectorSize;

    vector<int> numsVector;
    cout << "Введите элементы: " << endl;
    for (int i = 0; i < vectorSize; i++) {
        int thisNum;
        cin >> thisNum;
        numsVector.push_back(thisNum);
    }

    int maxNum;  
    for (int i = 0; i < vectorSize; i++) {
        if (i == 0) {
            maxNum = numsVector[i];
        }
        if (maxNum < numsVector[i]) {
            maxNum = numsVector[i];
        }
    }

    cout << "Наибольшее: " << maxNum << endl;
    return 0;
}