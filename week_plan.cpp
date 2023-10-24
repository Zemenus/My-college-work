#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int dayNumber;

	cout << "Введите день недели (1, 2, 3...): ";
	cin >> dayNumber;

	switch (dayNumber)
	{
	case 1:
		cout << "Понедельник: 9:00 Колледж" << endl << "19:00 Подработка" << endl;
		break;
	case 2:
		cout << "Вторник: " << endl << "9:00 Колледж" << endl;
		break;
	case 3:
		cout << "Среда: " << endl << "9:00 Колледж" << endl << "19:00 Подработка" << endl;
		break;
	case 4:
		cout << "Четверг: " << endl << "9:00 Колледж" << endl << "19:00 Подработка" << endl;
		break;
	case 5:
		cout << "Пятница: " << endl << "9:00 Колледж" << endl << "19:00 Подработка" << endl;
		break;
	case 6:
		cout << "Суббота: " << endl << "Ничего" << endl;
		break;
	case 7:
		cout << "Четверг: " << endl << "Ничего" << endl;
		break;
	default:
		cout << "Неправельный ввод" << endl;
	}
	return 0;
}