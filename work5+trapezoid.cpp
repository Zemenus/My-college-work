#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    int size;
    int p = 0;
    cin >> size;
    for (int i = size - 1; i >= 0; i--) {
        for (int spc = 0; spc < i; spc++) {
            cout << "  ";
        }
        for (int x = 0; x < size + p; x++) {
            cout << '*' << " ";
        }
        p += 2;
        cout << endl;

    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size - i; j++)
        {
            cout << ' ';
        }

        for (int j = size - 2 * i; j <= size; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}