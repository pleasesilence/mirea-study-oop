#include <iostream>
using namespace std;

int main() {
    int numOfStrings;
    cout << "=== Ввод размеров двумерного массива ===" << endl;
    cout << "Введите кол-во строк: ";
    cin >> numOfStrings;

    int numOfColumns;
    cout << "Введите кол-во столбцов: ";
    cin >> numOfColumns;

    int matrix[numOfStrings][numOfColumns];
    int lengthOfMatrix = numOfColumns * numOfStrings;
    
    int minimax;

    cout << "=== Ввод элементов двумерного массива ===" << endl;
    for (int i = 0; i < numOfStrings; i++) {
        cout << "Ввод элементов " << i+1 << " строки (всего " << numOfColumns << " элем.)" << endl;
        int minStr;
        for (int j = 0; j < numOfColumns; j++) {
            int thisNum;
            cin >> thisNum;
            matrix[i][j] = thisNum;
            if (j == 1) {
                minStr = matrix[i][j] < matrix[i][j-1] ? matrix[i][j] : matrix[i][j-1];
            } else {
                minStr = minStr < matrix[i][j] ? minStr : matrix[i][j];
            }
        }
        if (i == 0) {
            minimax = minStr;
        } else {
            minimax = minimax > minStr ? minimax : minStr;
        }
        cout << "Построчный минимум: " << minStr << endl;
    }
    cout << "Минимаксное значение: " << minimax << endl;
    return 0;
}