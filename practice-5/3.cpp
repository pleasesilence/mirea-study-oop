#include <iostream>
using namespace std;

int main() {
    cout << "Введите количество элементов: ";
    int count;
    cin >> count;
    
    int* memoryBlock = new int[count];
    
    cout << "Введите " << count << " элементов:" << endl;
    int* pointer = memoryBlock;
    for (int i = 0; i < count; ++i) {
        cin >> *pointer;
        ++pointer;
    }
    
    int* maxPointer = memoryBlock;
    pointer = memoryBlock + 1;
    
    for (int i = 1; i < count; ++i) {
        if (*pointer > *maxPointer) {
            maxPointer = pointer;
        }
        ++pointer;
    }
    
    cout << "Максимальный элемент: " << *maxPointer << endl;
    cout << "Его позиция: " << (maxPointer - memoryBlock) + 1 << endl;
    
    delete[] memoryBlock;
    
    return 0;
}