/*
Дан символ C и строки S, S0. 
Перед каждым вхождением символа C в строку S вставить строку S0.
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    char c;
    string s, s0, result;

    cout << "Enter a character: ";
    cin >> c;

    cout << "Enter a string: ";
    cin >> s;

    cout << "Enter another string: ";
    cin >> s0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            result += s0;
        }
        result += s[i];
    }

    cout << "Result: " << result << endl;

    return 0;
}