#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int x;
	cout << "Введіть чотиризначне число" << endl;
	cin >> x;
	
	if (x < 1000 || x > 9999) {
		cout << "Ви ввели не чотиризначне число!!!" << endl;
		return 1;
	}
	
	int x1 = x / 1000;
	int x2 = (x / 100) % 10;
	int x3 = (x / 10) % 10;
	int x4 = x % 10;
	
	int res = x2 * 1000 + x1 * 100 + x4 * 10 + x3;
	cout << res;
	return 0;
}