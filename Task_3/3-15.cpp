/*
Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими).
Вывести самое длинное слово в предложении. Если таких слов несколько, то вывести последнее из них.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter a string S: ";
    string S;
    getline(cin, S);

    string longestWord = "";
    string currentWord = "";
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ' ') {
            if (currentWord.length() >= longestWord.length()) { // ">=" вместо ">" для получения последнего самого длинного слова
                longestWord = currentWord;
            }
            currentWord = "";
        } else {
            currentWord += S[i];
        }
    }
    // Проверяем последнее слово
    if (currentWord.length() >= longestWord.length()) {
        longestWord = currentWord;
    }

    cout << longestWord;

    return 0;
}