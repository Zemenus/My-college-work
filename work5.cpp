#include <iostream>
using namespace std;

int main() {

	setlocale(0, "");

	int number;
	cout << "Введите число: ";
	cin >> number;

	if (number % 3 == 0 && number % 5 == 0) {
		cout << "Число кратно 3 и 5 одновременно:" << endl;
	}
	else {
		cout << "Число не кратно 3 и 5 одновременно:" << endl;
	}

	return 0;
}