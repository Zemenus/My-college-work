#include <iostream>
using namespace std;

int main() {

	setlocale(0, "");
	
	int number;
	cout << "Введите число: " << endl;
	cin >> number;

	if (number > 0) {
		cout << "Число " << number << " положительное" << endl;
	}
	else if (number < 0) {
		cout << "Число " << number << " отрицательное" << endl;
	}
	else {
		cout << "Число " << number << " ноль" << endl;
	}

	return 0;
}
