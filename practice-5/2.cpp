#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int strsNum;
    cout << "Введите кол-во строк: ";
    cin >> strsNum;

    vector<string> strsVector;
    cout << "Введите строки: " << endl;
    for (int i = 0; i < strsNum; i++) {
        string thisStr;
        cin >> thisStr;
        strsVector.push_back(thisStr);

        // Пузырьковая сортировка после каждого ввода
        for (int j = 0; j < strsVector.size() - 1; j++) {
            for (int k = 0; k < strsVector.size() - j - 1; k++) {
                if (strsVector[k] > strsVector[k + 1]) {
                    swap(strsVector[k], strsVector[k + 1]);
                }
            }
        }
    }

    cout << "Вывод строк: " << endl;
    for (int i = 0; i < strsNum; i++) {
        cout << strsVector[i] << endl;
    }

    return 0;
}