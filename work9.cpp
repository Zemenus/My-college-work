#include <iostream>
using namespace std;

int main() {

    setlocale(0,"");

    int num;

    cout << "Введите число: ";
    cin >> num;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            num += i;
        }

    }
    num == num ? cout << "Число является совершенным" : cout << "Число не является совершенным";
    return 0;
}
