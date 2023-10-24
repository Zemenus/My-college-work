#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int age = 0;
	int maxAge = 0;
	int minAge = 100;
	int sum = 0; 
	int average = 0;
	int amount = 0;

	cout << "Введите количество посетителей спортзала: ";
	cin >> amount;

	for (int i = 0; i < amount; i++)
	{
		cout << "Введите возраст " << i + 1 << "-го посетителя: ";
		cin >> age;

		if (age > maxAge) {
			maxAge = age;
		}
		if (age < minAge) {
			minAge = age;
		}

		sum += age;
	}

	average = sum / amount;

	cout << "Средний возраст всех посетителей: " << average << endl;
	cout << "Самый взрослый: " << maxAge << endl;
	cout << "Самый молодой: " << minAge << endl;

	return 0;
}