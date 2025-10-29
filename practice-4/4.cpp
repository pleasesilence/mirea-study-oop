#include <iostream>
using namespace std;

void inputArray(int arr[], int* size) {
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    
    *size = n;
    
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void printArray(const int arr[], int size) {
    if (size == 0) {
        cout << "Введен ноль" << endl;
        return;
    }
    
    cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Размер массива: " << size;
}

int main() {
    int arr[20];
    int size;
    
    inputArray(arr, &size);
    
    printArray(arr, size);
    
    return 0;
}