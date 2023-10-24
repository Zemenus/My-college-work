#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");

    short int first, second, result;

    cout << "Введите число" << endl;
    cin >> first;
    cout << "Введите второе число" << endl;
    cin >> second;
    cout << "Результат" << endl;
    cin >> result;

    if (result == first * second) {
        cout << "Правильно";
    }
    else {
        cout << "Не правильно. Верный ответ: >> " << first * second;
    }
    return 0;

}