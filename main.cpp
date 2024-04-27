#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
    double s1, s2, weight;
    double current_fuel = 300;
    cout << "������ ������� AB �� BC: " << endl;
    cin >> s1 >> s2;
    cout << "������ ���� �����" << endl;
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
        cout << "��������� ���� �����" << endl;
        return 0;
    }

    double consumption_s1 = s1 * consumption_coef;
    double consumption_s2 = s2 * consumption_coef;

    double total_fuel = consumption_s1 + consumption_s2;
    
    if (total_fuel > current_fuel) {
        cout << "������� ����������� " << total_fuel - current_fuel << "����" << endl;
    }
    else {
        cout << "�������� ������� ������ " << total_fuel << " ����. ������ ��������." << endl;
    }

    return 0;
}