#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Введіть 7 чисел по черзі" << endl;
	int numbers[7];
	for (int i = 0; i < 7; i++) {
		cout << "Введіть ціле число:" << endl;
		cin >> numbers[i];
	}
	int max_number = numbers[0];
	for (int i = 1; i < 7; i++) {
		if (numbers[i] > max_number) {
			max_number = numbers[i];
		}
	}
	cout << "Максимальне число: " << max_number;
	return 0;
}