#include <iostream>

int main() {

    int integerVar = 10;
    double doubleVar = 1.488;
    char charVar = 'A';

    int *intPtr = &integerVar;
    double *doublePtr = &doubleVar;
    char *charPtr = &charVar;

    int *nextIntPtr = intPtr + 1;
    size_t intSize = (char*)nextIntPtr - (char*)intPtr;

    double *nextDoublePtr = doublePtr + 1;
    size_t doubleSize = (char*)nextDoublePtr - (char*)doublePtr;

    char *nextCharPtr = charPtr + 1;
    size_t charSize = (char*)nextCharPtr - (char*)charPtr;

    std::cout << "Адрес и размер int:" << std::endl;
    std::cout << intPtr << std::endl << intSize << std::endl;

    std::cout << "Адрес и размер double:" << std::endl;
    std::cout << doublePtr << std:: endl << doubleSize << std::endl;

    std::cout << "Адрес и размер char:" << std::endl;
    std::cout << (void*)charPtr << std:: endl << charSize << std::endl; // Приведение к void для корректного отображения

    return 0;
}