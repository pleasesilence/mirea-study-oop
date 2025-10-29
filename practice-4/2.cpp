#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int max(int arr[], int arrSize) {
    int arrMax;
    for (int i = 0; i < (arrSize); i++) {
        if (i == 0) {
            if (arr[i+1] > arr[i]) {
                arrMax = arr[i+1];
            }
        } else {
            if (arrMax > arr[i]) {
                arrMax = arrMax;
            } else {
                arrMax = arr[i];
            }
        }
    }
    return arrMax;
}

int main() {
    int size;
    cout << "Введите количество элементов массива: " << endl;
    cin >> size;

    int arr[size];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; i++) {
        int thisNum;
        cin >> thisNum;
        arr[i] = thisNum;
    }
    
    cout << "Наибольшее: " << max(arr, size) << endl;

    return 0;
}