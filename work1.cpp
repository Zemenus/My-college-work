#include <iostream>
using namespace std;

bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
		else {
			return true;
		}
	}
}

int main() {

	setlocale(0, "");

	int num;
	bool isOn = true;

	while (isOn = true) {

		cout << "Введите число: " << endl;
		cin >> num;

		if (isPrime(num)) {
			cout << num << " является простым числом" << endl;
		}
		else {
			cout << num << " не является простым числом" << endl;
		}

	}

	return 0;
}