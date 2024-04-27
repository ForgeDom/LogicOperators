#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введіть сім цілих чисел:" << endl;;

    int num1, num2, num3, num4, num5, num6, num7;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;

    int max_number = num1;
    if (num2 > max_number) {
        max_number = num2;
    }
    if (num3 > max_number) {
        max_number = num3;
    }
    if (num4 > max_number) {
        max_number = num4;
    }
    if (num5 > max_number) {
        max_number = num5;
    }
    if (num6 > max_number) {
        max_number = num6;
    }
    if (num7 > max_number) {
        max_number = num7;
    }

    cout << "Максимальне число: " << max_number << endl;

    return 0;
}