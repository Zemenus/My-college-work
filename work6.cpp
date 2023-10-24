#include <iostream>

using namespace std;

int main(){

    setlocale(0,"");

    int num;
    cout << "Введите число: ";
    cin >> num;

    for (int i = num; i >= 1; i /= 2) {
        if (i == 1) {
            cout << "Число является степенью 2";
            break;
        }
        else if (i % 2 == 1) {
            cout << "Число не является степенью 2";
            break;
        }
    }
}
