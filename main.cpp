#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x,y;
	cin >> x >> y;
	cout << (x < y  ? x : y) << endl;
	return 0;
}