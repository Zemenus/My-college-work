#include <iostream>
using namespace std;

int main() {

    setlocale(0, "");
    int num_10;
    cin >> num_10; 
    for (int i = 1; i < 13; i++) {
        if (num_10 == 1) {
            cout << "Число является факториалом какого - то числа";
            break;
        }
        else if (num_10 % i >= 1) {
            cout << "Число не является факториалом какого-то числа";
            break;
        }
        else {
            num_10 /= i;
        }
    }
}