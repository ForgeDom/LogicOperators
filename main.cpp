#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cin >> x;
	cout << (x % 2 == 0 ? "Парне" : "Непарне") << endl;
	return 0;
}