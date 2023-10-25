#include <iostream>
using namespace std;

int main() {
    const int max = 10;
    long long min = 1;
    for (int i = 1; i <= max; i++)
        min *= (i * (i + 1)) / 2;
    cout << min << endl;
    return 0;
}