#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
    double s1, s2, weight;
    double current_fuel = 300;
    cout << "Введіть відстань AB та BC: " << endl;
    cin >> s1 >> s2;
    cout << "Введіть вагу літака" << endl;
    cin >> weight;

    double consumption_coef;
    if (weight <= 500)
        consumption_coef = 1;
    else if (weight <= 1000)
        consumption_coef = 4;
    else if (weight <= 1500)
        consumption_coef = 7;
    else if (weight <= 2000)
        consumption_coef = 9;
    else {
        cout << "Неможлива вага літака" << endl;
        return 0;
    }

    double consumption_s1 = s1 * consumption_coef;
    double consumption_s2 = s2 * consumption_coef;

    double total_fuel = consumption_s1 + consumption_s2;
    
    if (total_fuel > current_fuel) {
        cout << "Потрібно дозаправити " << total_fuel - current_fuel << "літрів" << endl;
    }
    else {
        cout << "Загальна кількість палива " << total_fuel << " літрів. Польот можливий." << endl;
    }

    return 0;
}