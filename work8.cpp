#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool is_anagram(std::string s1, std::string s2)
{
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {

    setlocale(0,"");

    string word1, word2;

    cout << "Введите слово 1 ";
    cin >> word1;
    cout << "Введите слово 2 ";
    cin >> word2;

    // word1 = to_lower(word1); не распознаёт регистры :P

    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    if (word1 == word2) {
        cout << "Это анаграмма";
    }
    else {
        cout << "Это не анаграмма";
    }
}