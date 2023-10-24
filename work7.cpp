
#include <iostream>
using namespace std;

bool isCentury(int year) {
	return year % 100 == 0;
}

int main() {

	setlocale(0, "");

	int year;
	cout << "Введите год: ";
	cin >> year;

	if (isCentury(year)) {
		cout << "Год является вековым." << endl;
	}
	else {
		cout << "Год не является вековым." << endl;
	}

	return 0;
}