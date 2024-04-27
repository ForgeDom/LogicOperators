#include <iostream>
#include <cmath>
#include <Windows.h>
#include <String>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int x,y;
	cin >> x >> y;

	string res = (x == y) ? "×èñëà ð³âí³" : (x > y) ? to_string(y) + " " + to_string(x)  : to_string(x) + " " + to_string(y);
	cout << res;
	return 0;
}