#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> getMinor(const vector<vector<int>>& matr, int row, int col) {
    int n = matr.size();
    vector<vector<int>> minor(n-1, vector<int>(n-1));
    
    int minor_i = 0;
    for (int i = 0; i < n; i++) {
        if (i == row) continue;
        
        int minor_j = 0;
        for (int j = 0; j < n; j++) {
            if (j == col) continue;
            
            minor[minor_i][minor_j] = matr[i][j];
            minor_j++;
        }
        minor_i++;
    }
    return minor;
}

void printMinor(const vector<vector<int>>& matr, int row, int col) {
    int n = matr.size();
    
    cout << "Минор матрицы после удаления строки " << row + 1 
         << " и столбца " << col + 1 << ":" << endl;
    
    for (int i = 0; i < n; i++) {
        if (i == row) continue;
        
        for (int j = 0; j < n; j++) {
            if (j == col) continue;
            
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
}

int calculateDet(const vector<vector<int>>& matr) {
    int n = matr.size();
    
    if (n == 1) {
        return matr[0][0];
    }
    
    int det = 0;
    for (int j = 0; j < n; j++) {
        vector<vector<int>> minor = getMinor(matr, 0, j);
        int sign = (j % 2 == 0) ? 1 : -1;
        det += sign * matr[0][j] * calculateDet(minor);
    }
    
    return det;
}

int main() {
    int n;
    cout << "Введите размер квадратной матрицы: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    
    cout << "Введите " << n * n << " элементов матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    printMinor(matrix, 0, 0);
    
    cout << "Определитель матрицы: " << calculateDet(matrix) << endl;
    
    return 0;
}