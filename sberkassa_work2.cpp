#include <iostream>
using namespace std;

int main() {

    setlocale(0,"");

    int year;
    float percent, summa_all, summa;

    cout << "Сумма вклада: ";
    cin >> summa;
    cout << "Года: ";
    cin >> year;

    percent = summa * 3 / 100;
    summa_all = summa + percent * year;
    cout << "Сумма через " << year << " лет: " << summa_all << endl;

    return 0;
}