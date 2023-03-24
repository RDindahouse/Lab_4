/*
Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими).
Вывести строку, содержащую эти же слова, разделенные одним символом «.» (точка). В конце
строки точку не ставить.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cout << "Enter a string S: ";
    getline(cin, S);

    string output;
    bool lastWasSpace = false;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ' ') {
            if (!lastWasSpace) {
                output += '.';
                lastWasSpace = true;
            }
        } else {
            output += S[i];
            lastWasSpace = false;
        }
    }

    cout << output;

    return 0;
}