/*
Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). 
Найти длину самого короткого слова.
 */
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string sentence;
    cout << "Enter string:";
    getline(cin, sentence);

    int min_length = sentence.length();
    int current_length = 0;

    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        current_length = word.length();

        if (current_length < min_length) {
            min_length = current_length;
        }
    }

    cout << "The shortest word consists of - " <<  min_length << " letters" << endl;

    return 0;
}