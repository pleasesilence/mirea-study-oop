#include <iostream>

int main() {
    int integer;
    int *integerPtr = &integer;
    *integerPtr = 1;

    std::cout << "Число до:" << integer << std::endl;

    *integerPtr += 30; // 30. Хомич Иван

    std::cout << "Число после:" << integer << std::endl;

    return 0;
}