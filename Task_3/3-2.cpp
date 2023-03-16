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
    getline(cin, sentence); // Get the sentence as input

    int count = 0;
    int start = 0;
    int end = 0;

    // Loop through each character in the sentence
    for (int i = 0; i < sentence.length(); i++) {
        // Check if we have a new word
        if (sentence[i] == ' ' && start < end) {
            // Check if the first and last letters are the same
            if (sentence[start] == sentence[end-1]) {
                count++;
            }
            // Reset start and end to look for the next word
            start = i+1;
            end = i+1;
        }
        else {
            end++;
        }
    }

    // Check the last word in the sentence
    if (start < end && sentence[start] == sentence[end-1]) {
        count++;
    }

    cout << "Result: " << count << endl;

    return 0;
}