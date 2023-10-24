#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	char answer;
	bool loop = true;

	cout << "Введите букву из перечня, для расчета времени в пути (A,B,C,D,E): ";

	do {
		loop = false;
		cin >> answer;

		switch (answer)
		{
		case 'a':
		case 'A':
			cout << "Станция метро A" << endl;
			break;
		case 'b':
		case 'B':
			cout << "Станция метро B" << endl;
			break;
		case 'c':
		case 'C':
			cout << "Станция метро C" << endl;
			break;
		case 'd':
		case 'D':
			cout << "Станция метро D" << endl;
			break;
		case 'e':
		case 'E':
			cout << "Станция метро E" << endl;
			break;
		default:
			cout << answer << " - некорректный ввод. ";
			cout << "Повторите выбор (A,B,C,D,E): ";
			loop = true;
		}
	} while (loop);

	return 0;
}