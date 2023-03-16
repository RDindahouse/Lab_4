/*
Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими).
Найти количество слов, которые начинаются и заканчиваются одной и той же буквой.
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter string:";
   getline(cin, sentence);

    int count = 0;
    bool hasA = false;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (hasA) {
                count++;
                hasA = false;
            }
        } else if (sentence[i] == 'A') {
            hasA = true;
        }
    }

    // check the last word
    if (hasA) {
        count++;
    }

    cout << "Number of words that contain at least one A: " << count << endl;
    return 0;
}