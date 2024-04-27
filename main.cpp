#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;
    cout << "Введіть шестизначне число: " << endl;
    cin >> x;

    if (x < 100000 || x > 999999) {
        cout << "Ви ввели не шестизначне число!!! " << endl;
        return 1;
    }

    int x1 = x / 100000;
    int x2 = (x / 10000) % 10;
    int x3 = (x / 1000) % 10;
    int x4 = (x / 100) % 10;
    int x5 = (x / 10) % 10;
    int x6 = x % 10;

    int sum1, sum2;
    sum1 = x1 + x2 + x3;
    sum2 = x4 + x5 + x6;

    if (sum1 == sum2) {
        cout << "Це щасливе число" << endl;
    }
    else {
        cout << "Це нещасливе число" << endl;
    }

    return 0;
}