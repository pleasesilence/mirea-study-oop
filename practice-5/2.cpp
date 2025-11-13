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

        if (i == (strsNum - 1)) {
            sort(begin(strsVector), end(strsVector));
        }
    }

    cout << "Вывод строк: " << endl;
    for (int i = 0; i < strsNum; i++) {
        cout << strsVector[i] << endl;
    }

    return 0;
}