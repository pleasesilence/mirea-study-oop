#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fillSpiral(vector<vector<int>>& matrix, vector<int>& numbers, 
                int top, int bottom, int left, int right, int& index) {
    if (top > bottom || left > right || index >= numbers.size()) {
        return;
    }
    
    for (int i = left; i <= right && index < numbers.size(); i++) {
        matrix[top][i] = numbers[index++];
    }
    
    for (int i = top + 1; i <= bottom && index < numbers.size(); i++) {
        matrix[i][right] = numbers[index++];
    }
    
    if (top < bottom) {
        for (int i = right - 1; i >= left && index < numbers.size(); i--) {
            matrix[bottom][i] = numbers[index++];
        }
    }
    
    if (left < right) {
        for (int i = bottom - 1; i > top && index < numbers.size(); i--) {
            matrix[i][left] = numbers[index++];
        }
    }
    
    fillSpiral(matrix, numbers, top + 1, bottom - 1, left + 1, right - 1, index);
}

int main() {
    int rows, cols;
    
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;
    
    vector<int> numbers;
    int totalElements = rows * cols;
    
    cout << "Введите " << totalElements << " неповторяющихся чисел:" << endl;
    for (int i = 0; i < totalElements; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    
    vector<int> sortedNumbers = numbers;
    sort(sortedNumbers.begin(), sortedNumbers.end());
    bool hasDuplicates = false;
    for (int i = 1; i < totalElements; i++) {
        if (sortedNumbers[i] == sortedNumbers[i - 1]) {
            hasDuplicates = true;
            break;
        }
    }
    
    if (hasDuplicates) {
        cout << "Ошибка: обнаружены повторяющиеся числа!" << endl;
        return 1;
    }
    
    sort(numbers.begin(), numbers.end());
    
    vector<vector<int>> spiral(rows, vector<int>(cols, 0));
    
    int index = 0;
    fillSpiral(spiral, numbers, 0, rows - 1, 0, cols - 1, index);
    
    cout << "\nМассив, заполненный по спирали:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << spiral[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}