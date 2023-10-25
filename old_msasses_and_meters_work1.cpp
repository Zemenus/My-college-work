#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    int input;

    cout << "Выберите Вариант перевода:" <<
        endl << "[1] Cажени в метры" <<
        endl << "[2] Дюймы в сантиметры" <<
        endl << "[3] Футы в метры" <<
        endl << "[4] Драхмы в граммы" <<
        endl << "[5] Унции в граммы" <<
        endl << "[6] Фунты в килограммы" <<
        endl << "[7] Аршины в метры" <<
        endl << "[8] Золотники в граммы" <<
        endl << "[9] Дюймы в миллиметры" << endl;
        //endl << "[0] Выход";
    cin >> input;
    switch (input) {
    case 1:
        cout << "Сажени: ";
        cin >> input;
        cout << input * 2.1366 << " м" << endl;
        break;
    case 2:
        cout << "Дюймы: ";
        cin >> input;
        cout << input * 2.5 << " см" << endl;
        break;
    case 3:
        cout << "Футы: ";
        cin >> input;
        cout << input * 0.3048 << " м" << endl;
        break;
    case 4:
        cout << "Драхмы: ";
        cin >> input;
        cout << input * 3.7325 << " гр" << endl;
        break;
    case 5:
        cout << "Унции: ";
        cin >> input;
        cout << input * 29.86 << " гр" << endl;
        break;
    case 6:
        cout << "Фунты: ";
        cin >> input;
        cout << input * 0.40951 << " кг" << endl;
        break;
    case 7:
        cout << "Аршины: ";
        cin >> input;
        cout << input * 0.7112 << " м" << endl;
        break;
    case 8:
        cout << "Золотники: ";
        cin >> input;
        cout << input * 4.2657 << " гр" << endl;
        break;
    case 9:
        cout << "Дюймы: ";
        cin >> input;
        cout << input * 25.3995 << " мм" << endl;
        break;
    }
    return 0;
}