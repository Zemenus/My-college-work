#include <iostream>
using namespace std;

int main() {

	setlocale(0, "");

	int year;
	cout << "Введите год: ";
	cin >> year;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				cout << year << " високосный год" << endl;
			}
			else {
				cout << year << " не високосный год" << endl;
			}
		}
		else {
			cout << year << " високосный год" << endl;
		}
	}
	else {
		cout << year << " не високосный год" << endl;
	}

	return 0;
}
