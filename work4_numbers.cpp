#include <iostream>

using namespace std;

int main()
{
    int s = 0;
    int x;
    int i;
    for (i = 0; (cin >> x) && (x != 0); i++) {
        s += x;
    }
    cout << "summ = " << s << endl;
    if (i != 0) {
        cout << "average = " << s / i << endl;
    }
    return 0;
}