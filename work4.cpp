#include <string>
#include <iostream>

using namespace std;

int main() {

	setlocale(0, "");

	string word;
	cin >> word;
	if (word == string(word.rbegin(), word.rend()))
		cout << "Палидром.\n";
	else
		cout << "Не палидром.\n";
}