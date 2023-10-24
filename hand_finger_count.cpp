#include <iostream>
using namespace std;

int main() {

    setlocale(0,"");

    int num;

    cout << "Введите номер пальца руки" << endl;
    cin >> num;
    switch(num) {
    case 1:
        cout << "Это мизинец";
        break;
    case 2:
        cout << "Это безымянный";
        break;
    case 3:
        cout << "Это средний";
        break;
    case 4:
        cout << "Это указательный";
        break;
    case 5:
        cout << "Это большой";
        break;
    default:
        cout << "Сколько у вас вообще пальцев на руке???";
    }
}