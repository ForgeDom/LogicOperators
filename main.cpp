#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cin >> x;
	string res = (x > 0) ? "Додатнє" : (x < 0) ? "Від'ємне": "Дорінює нулю";
	cout << res;
	return 0;
}